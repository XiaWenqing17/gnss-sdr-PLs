// SPDX-FileCopyrightText: 2017 Google LLC
// SPDX-License-Identifier: Apache-2.0

#include "cpuinfo_arm.h"
#include "internal/bit_utils.h"
#include "internal/filesystem.h"
#include "internal/hwcaps.h"
#include "internal/stack_line_reader.h"
#include "internal/string_view.h"
#include <assert.h>
#include <ctype.h>

// Generation of feature's getters/setters functions and kGetters, kSetters,
// kCpuInfoFlags and kHardwareCapabilities global tables.
#define DEFINE_TABLE_FEATURES                                           \
    FEATURE(ARM_SWP, swp, "swp", ARM_HWCAP_SWP, 0)                      \
    FEATURE(ARM_HALF, half, "half", ARM_HWCAP_HALF, 0)                  \
    FEATURE(ARM_THUMB, thumb, "thumb", ARM_HWCAP_THUMB, 0)              \
    FEATURE(ARM_26BIT, _26bit, "26bit", ARM_HWCAP_26BIT, 0)             \
    FEATURE(ARM_FASTMULT, fastmult, "fastmult", ARM_HWCAP_FAST_MULT, 0) \
    FEATURE(ARM_FPA, fpa, "fpa", ARM_HWCAP_FPA, 0)                      \
    FEATURE(ARM_VFP, vfp, "vfp", ARM_HWCAP_VFP, 0)                      \
    FEATURE(ARM_EDSP, edsp, "edsp", ARM_HWCAP_EDSP, 0)                  \
    FEATURE(ARM_JAVA, java, "java", ARM_HWCAP_JAVA, 0)                  \
    FEATURE(ARM_IWMMXT, iwmmxt, "iwmmxt", ARM_HWCAP_IWMMXT, 0)          \
    FEATURE(ARM_CRUNCH, crunch, "crunch", ARM_HWCAP_CRUNCH, 0)          \
    FEATURE(ARM_THUMBEE, thumbee, "thumbee", ARM_HWCAP_THUMBEE, 0)      \
    FEATURE(ARM_NEON, neon, "neon", ARM_HWCAP_NEON, 0)                  \
    FEATURE(ARM_VFPV3, vfpv3, "vfpv3", ARM_HWCAP_VFPV3, 0)              \
    FEATURE(ARM_VFPV3D16, vfpv3d16, "vfpv3d16", ARM_HWCAP_VFPV3D16, 0)  \
    FEATURE(ARM_TLS, tls, "tls", ARM_HWCAP_TLS, 0)                      \
    FEATURE(ARM_VFPV4, vfpv4, "vfpv4", ARM_HWCAP_VFPV4, 0)              \
    FEATURE(ARM_IDIVA, idiva, "idiva", ARM_HWCAP_IDIVA, 0)              \
    FEATURE(ARM_IDIVT, idivt, "idivt", ARM_HWCAP_IDIVT, 0)              \
    FEATURE(ARM_VFPD32, vfpd32, "vfpd32", ARM_HWCAP_VFPD32, 0)          \
    FEATURE(ARM_LPAE, lpae, "lpae", ARM_HWCAP_LPAE, 0)                  \
    FEATURE(ARM_EVTSTRM, evtstrm, "evtstrm", ARM_HWCAP_EVTSTRM, 0)      \
    FEATURE(ARM_AES, aes, "aes", 0, ARM_HWCAP2_AES)                     \
    FEATURE(ARM_PMULL, pmull, "pmull", 0, ARM_HWCAP2_PMULL)             \
    FEATURE(ARM_SHA1, sha1, "sha1", 0, ARM_HWCAP2_SHA1)                 \
    FEATURE(ARM_SHA2, sha2, "sha2", 0, ARM_HWCAP2_SHA2)                 \
    FEATURE(ARM_CRC32, crc32, "crc32", 0, ARM_HWCAP2_CRC32)
#define DEFINE_TABLE_FEATURE_TYPE ArmFeatures
#include "define_tables.h"

typedef struct
{
    bool processor_reports_armv6;
    bool hardware_reports_goldfish;
} ProcCpuInfoData;

static int IndexOfNonDigit(StringView str)
{
    size_t index = 0;
    while (str.size && isdigit(CpuFeatures_StringView_Front(str)))
        {
            str = CpuFeatures_StringView_PopFront(str, 1);
            ++index;
        }
    return index;
}

static bool HandleArmLine(const LineResult result, ArmInfo* const info,
    ProcCpuInfoData* const proc_info)
{
    StringView line = result.line;
    StringView key, value;
    if (CpuFeatures_StringView_GetAttributeKeyValue(line, &key, &value))
        {
            if (CpuFeatures_StringView_IsEquals(key, str("Features")))
                {
                    for (size_t i = 0; i < ARM_LAST_; ++i)
                        {
                            kSetters[i](&info->features, CpuFeatures_StringView_HasWord(
                                                             value, kCpuInfoFlags[i], ' '));
                        }
                }
            else if (CpuFeatures_StringView_IsEquals(key, str("CPU implementer")))
                {
                    info->implementer = CpuFeatures_StringView_ParsePositiveNumber(value);
                }
            else if (CpuFeatures_StringView_IsEquals(key, str("CPU variant")))
                {
                    info->variant = CpuFeatures_StringView_ParsePositiveNumber(value);
                }
            else if (CpuFeatures_StringView_IsEquals(key, str("CPU part")))
                {
                    info->part = CpuFeatures_StringView_ParsePositiveNumber(value);
                }
            else if (CpuFeatures_StringView_IsEquals(key, str("CPU revision")))
                {
                    info->revision = CpuFeatures_StringView_ParsePositiveNumber(value);
                }
            else if (CpuFeatures_StringView_IsEquals(key, str("CPU architecture")))
                {
                    // CPU architecture is a number that may be followed by letters. e.g.
                    // "6TEJ", "7".
                    const StringView digits =
                        CpuFeatures_StringView_KeepFront(value, IndexOfNonDigit(value));
                    info->architecture = CpuFeatures_StringView_ParsePositiveNumber(digits);
                }
            else if (CpuFeatures_StringView_IsEquals(key, str("Processor")) ||
                     CpuFeatures_StringView_IsEquals(key, str("model name")))
                {
                    // Android reports this in a non-Linux standard "Processor" but sometimes
                    // also in "model name", Linux reports it only in "model name"
                    // see RaspberryPiZero (Linux) vs InvalidArmv7 (Android) test-cases
                    proc_info->processor_reports_armv6 =
                        CpuFeatures_StringView_IndexOf(value, str("(v6l)")) >= 0;
                }
            else if (CpuFeatures_StringView_IsEquals(key, str("Hardware")))
                {
                    proc_info->hardware_reports_goldfish =
                        CpuFeatures_StringView_IsEquals(value, str("Goldfish"));
                }
        }
    return !result.eof;
}

uint32_t GetArmCpuId(const ArmInfo* const info)
{
    return (ExtractBitRange(info->implementer, 7, 0) << 24) |
           (ExtractBitRange(info->variant, 3, 0) << 20) |
           (ExtractBitRange(info->part, 11, 0) << 4) |
           (ExtractBitRange(info->revision, 3, 0) << 0);
}

static void FixErrors(ArmInfo* const info,
    ProcCpuInfoData* const proc_cpu_info_data)
{
    // Fixing Samsung kernel reporting invalid cpu architecture.
    // http://code.google.com/p/android/issues/detail?id=10812
    if (proc_cpu_info_data->processor_reports_armv6 && info->architecture >= 7)
        {
            info->architecture = 6;
        }

    // Handle kernel configuration bugs that prevent the correct reporting of CPU
    // features.
    switch (GetArmCpuId(info))
        {
        case 0x4100C080:
            // Special case: The emulator-specific Android 4.2 kernel fails to report
            // support for the 32-bit ARM IDIV instruction. Technically, this is a
            // feature of the virtual CPU implemented by the emulator. Note that it
            // could also support Thumb IDIV in the future, and this will have to be
            // slightly updated.
            if (info->architecture >= 7 &&
                proc_cpu_info_data->hardware_reports_goldfish)
                {
                    info->features.idiva = true;
                }
            break;
        case 0x511004D0:
            // https://crbug.com/341598.
            info->features.neon = false;
            break;
        case 0x510006F2:
        case 0x510006F3:
            // The Nexus 4 (Qualcomm Krait) kernel configuration forgets to report
            // IDIV support.
            info->features.idiva = true;
            info->features.idivt = true;
            break;
        }

    // Propagate cpu features.
    if (info->features.vfpv4) info->features.vfpv3 = true;
    if (info->features.neon) info->features.vfpv3 = true;
    if (info->features.vfpv3) info->features.vfp = true;
}

static void FillProcCpuInfoData(ArmInfo* const info,
    ProcCpuInfoData* proc_cpu_info_data)
{
    const int fd = CpuFeatures_OpenFile("/proc/cpuinfo");
    if (fd >= 0)
        {
            StackLineReader reader;
            StackLineReader_Initialize(&reader, fd);
            for (;;)
                {
                    if (!HandleArmLine(StackLineReader_NextLine(&reader), info,
                            proc_cpu_info_data))
                        {
                            break;
                        }
                }
            CpuFeatures_CloseFile(fd);
        }
}

static const ArmInfo kEmptyArmInfo;

static const ProcCpuInfoData kEmptyProcCpuInfoData;

ArmInfo GetArmInfo(void)
{
    // capabilities are fetched from both getauxval and /proc/cpuinfo so we can
    // have some information if the executable is sandboxed (aka no access to
    // /proc/cpuinfo).
    ArmInfo info = kEmptyArmInfo;
    ProcCpuInfoData proc_cpu_info_data = kEmptyProcCpuInfoData;

    FillProcCpuInfoData(&info, &proc_cpu_info_data);
    const HardwareCapabilities hwcaps = CpuFeatures_GetHardwareCapabilities();
    for (size_t i = 0; i < ARM_LAST_; ++i)
        {
            if (CpuFeatures_IsHwCapsSet(kHardwareCapabilities[i], hwcaps))
                {
                    kSetters[i](&info.features, true);
                }
        }

    FixErrors(&info, &proc_cpu_info_data);

    return info;
}

////////////////////////////////////////////////////////////////////////////////
// Introspection functions

int GetArmFeaturesEnumValue(const ArmFeatures* features,
    ArmFeaturesEnum value)
{
    if (value >= ARM_LAST_) return false;
    return kGetters[value](features);
}

const char* GetArmFeaturesEnumName(ArmFeaturesEnum value)
{
    if (value >= ARM_LAST_) return "unknown feature";
    return kCpuInfoFlags[value];
}
