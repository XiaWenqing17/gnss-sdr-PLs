// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gnss_synchro.proto

#ifndef PROTOBUF_INCLUDED_gnss_5fsynchro_2eproto
#define PROTOBUF_INCLUDED_gnss_5fsynchro_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_gnss_5fsynchro_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_gnss_5fsynchro_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_gnss_5fsynchro_2eproto();
namespace gnss_sdr {
class GnssSynchro;
class GnssSynchroDefaultTypeInternal;
extern GnssSynchroDefaultTypeInternal _GnssSynchro_default_instance_;
class Observables;
class ObservablesDefaultTypeInternal;
extern ObservablesDefaultTypeInternal _Observables_default_instance_;
}  // namespace gnss_sdr
namespace google {
namespace protobuf {
template<> ::gnss_sdr::GnssSynchro* Arena::CreateMaybeMessage<::gnss_sdr::GnssSynchro>(Arena*);
template<> ::gnss_sdr::Observables* Arena::CreateMaybeMessage<::gnss_sdr::Observables>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gnss_sdr {

// ===================================================================

class GnssSynchro :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gnss_sdr.GnssSynchro) */ {
 public:
  GnssSynchro();
  virtual ~GnssSynchro();

  GnssSynchro(const GnssSynchro& from);

  inline GnssSynchro& operator=(const GnssSynchro& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GnssSynchro(GnssSynchro&& from) noexcept
    : GnssSynchro() {
    *this = ::std::move(from);
  }

  inline GnssSynchro& operator=(GnssSynchro&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const GnssSynchro& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GnssSynchro* internal_default_instance() {
    return reinterpret_cast<const GnssSynchro*>(
               &_GnssSynchro_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(GnssSynchro* other);
  friend void swap(GnssSynchro& a, GnssSynchro& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GnssSynchro* New() const final {
    return CreateMaybeMessage<GnssSynchro>(nullptr);
  }

  GnssSynchro* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GnssSynchro>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GnssSynchro& from);
  void MergeFrom(const GnssSynchro& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GnssSynchro* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string system = 1;
  void clear_system();
  static const int kSystemFieldNumber = 1;
  const ::std::string& system() const;
  void set_system(const ::std::string& value);
  #if LANG_CXX11
  void set_system(::std::string&& value);
  #endif
  void set_system(const char* value);
  void set_system(const char* value, size_t size);
  ::std::string* mutable_system();
  ::std::string* release_system();
  void set_allocated_system(::std::string* system);

  // string signal = 2;
  void clear_signal();
  static const int kSignalFieldNumber = 2;
  const ::std::string& signal() const;
  void set_signal(const ::std::string& value);
  #if LANG_CXX11
  void set_signal(::std::string&& value);
  #endif
  void set_signal(const char* value);
  void set_signal(const char* value, size_t size);
  ::std::string* mutable_signal();
  ::std::string* release_signal();
  void set_allocated_signal(::std::string* signal);

  // uint32 prn = 3;
  void clear_prn();
  static const int kPrnFieldNumber = 3;
  ::google::protobuf::uint32 prn() const;
  void set_prn(::google::protobuf::uint32 value);

  // int32 channel_id = 4;
  void clear_channel_id();
  static const int kChannelIdFieldNumber = 4;
  ::google::protobuf::int32 channel_id() const;
  void set_channel_id(::google::protobuf::int32 value);

  // double acq_delay_samples = 5;
  void clear_acq_delay_samples();
  static const int kAcqDelaySamplesFieldNumber = 5;
  double acq_delay_samples() const;
  void set_acq_delay_samples(double value);

  // double acq_doppler_hz = 6;
  void clear_acq_doppler_hz();
  static const int kAcqDopplerHzFieldNumber = 6;
  double acq_doppler_hz() const;
  void set_acq_doppler_hz(double value);

  // uint64 acq_samplestamp_samples = 7;
  void clear_acq_samplestamp_samples();
  static const int kAcqSamplestampSamplesFieldNumber = 7;
  ::google::protobuf::uint64 acq_samplestamp_samples() const;
  void set_acq_samplestamp_samples(::google::protobuf::uint64 value);

  // int64 fs = 10;
  void clear_fs();
  static const int kFsFieldNumber = 10;
  ::google::protobuf::int64 fs() const;
  void set_fs(::google::protobuf::int64 value);

  // double prompt_i = 11;
  void clear_prompt_i();
  static const int kPromptIFieldNumber = 11;
  double prompt_i() const;
  void set_prompt_i(double value);

  // double prompt_q = 12;
  void clear_prompt_q();
  static const int kPromptQFieldNumber = 12;
  double prompt_q() const;
  void set_prompt_q(double value);

  // double cn0_db_hz = 13;
  void clear_cn0_db_hz();
  static const int kCn0DbHzFieldNumber = 13;
  double cn0_db_hz() const;
  void set_cn0_db_hz(double value);

  // double carrier_doppler_hz = 14;
  void clear_carrier_doppler_hz();
  static const int kCarrierDopplerHzFieldNumber = 14;
  double carrier_doppler_hz() const;
  void set_carrier_doppler_hz(double value);

  // double carrier_phase_rads = 15;
  void clear_carrier_phase_rads();
  static const int kCarrierPhaseRadsFieldNumber = 15;
  double carrier_phase_rads() const;
  void set_carrier_phase_rads(double value);

  // uint32 acq_doppler_step = 8;
  void clear_acq_doppler_step();
  static const int kAcqDopplerStepFieldNumber = 8;
  ::google::protobuf::uint32 acq_doppler_step() const;
  void set_acq_doppler_step(::google::protobuf::uint32 value);

  // bool flag_valid_acquisition = 9;
  void clear_flag_valid_acquisition();
  static const int kFlagValidAcquisitionFieldNumber = 9;
  bool flag_valid_acquisition() const;
  void set_flag_valid_acquisition(bool value);

  // bool flag_valid_symbol_output = 18;
  void clear_flag_valid_symbol_output();
  static const int kFlagValidSymbolOutputFieldNumber = 18;
  bool flag_valid_symbol_output() const;
  void set_flag_valid_symbol_output(bool value);

  // bool flag_valid_word = 20;
  void clear_flag_valid_word();
  static const int kFlagValidWordFieldNumber = 20;
  bool flag_valid_word() const;
  void set_flag_valid_word(bool value);

  // bool flag_valid_pseudorange = 24;
  void clear_flag_valid_pseudorange();
  static const int kFlagValidPseudorangeFieldNumber = 24;
  bool flag_valid_pseudorange() const;
  void set_flag_valid_pseudorange(bool value);

  // double code_phase_samples = 16;
  void clear_code_phase_samples();
  static const int kCodePhaseSamplesFieldNumber = 16;
  double code_phase_samples() const;
  void set_code_phase_samples(double value);

  // uint64 tracking_sample_counter = 17;
  void clear_tracking_sample_counter();
  static const int kTrackingSampleCounterFieldNumber = 17;
  ::google::protobuf::uint64 tracking_sample_counter() const;
  void set_tracking_sample_counter(::google::protobuf::uint64 value);

  // int32 correlation_length_ms = 19;
  void clear_correlation_length_ms();
  static const int kCorrelationLengthMsFieldNumber = 19;
  ::google::protobuf::int32 correlation_length_ms() const;
  void set_correlation_length_ms(::google::protobuf::int32 value);

  // uint32 tow_at_current_symbol_ms = 21;
  void clear_tow_at_current_symbol_ms();
  static const int kTowAtCurrentSymbolMsFieldNumber = 21;
  ::google::protobuf::uint32 tow_at_current_symbol_ms() const;
  void set_tow_at_current_symbol_ms(::google::protobuf::uint32 value);

  // double pseudorange_m = 22;
  void clear_pseudorange_m();
  static const int kPseudorangeMFieldNumber = 22;
  double pseudorange_m() const;
  void set_pseudorange_m(double value);

  // double rx_time = 23;
  void clear_rx_time();
  static const int kRxTimeFieldNumber = 23;
  double rx_time() const;
  void set_rx_time(double value);

  // double interp_tow_ms = 25;
  void clear_interp_tow_ms();
  static const int kInterpTowMsFieldNumber = 25;
  double interp_tow_ms() const;
  void set_interp_tow_ms(double value);

  // @@protoc_insertion_point(class_scope:gnss_sdr.GnssSynchro)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr system_;
  ::google::protobuf::internal::ArenaStringPtr signal_;
  ::google::protobuf::uint32 prn_;
  ::google::protobuf::int32 channel_id_;
  double acq_delay_samples_;
  double acq_doppler_hz_;
  ::google::protobuf::uint64 acq_samplestamp_samples_;
  ::google::protobuf::int64 fs_;
  double prompt_i_;
  double prompt_q_;
  double cn0_db_hz_;
  double carrier_doppler_hz_;
  double carrier_phase_rads_;
  ::google::protobuf::uint32 acq_doppler_step_;
  bool flag_valid_acquisition_;
  bool flag_valid_symbol_output_;
  bool flag_valid_word_;
  bool flag_valid_pseudorange_;
  double code_phase_samples_;
  ::google::protobuf::uint64 tracking_sample_counter_;
  ::google::protobuf::int32 correlation_length_ms_;
  ::google::protobuf::uint32 tow_at_current_symbol_ms_;
  double pseudorange_m_;
  double rx_time_;
  double interp_tow_ms_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_gnss_5fsynchro_2eproto;
};
// -------------------------------------------------------------------

class Observables :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gnss_sdr.Observables) */ {
 public:
  Observables();
  virtual ~Observables();

  Observables(const Observables& from);

  inline Observables& operator=(const Observables& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Observables(Observables&& from) noexcept
    : Observables() {
    *this = ::std::move(from);
  }

  inline Observables& operator=(Observables&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Observables& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Observables* internal_default_instance() {
    return reinterpret_cast<const Observables*>(
               &_Observables_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Observables* other);
  friend void swap(Observables& a, Observables& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Observables* New() const final {
    return CreateMaybeMessage<Observables>(nullptr);
  }

  Observables* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Observables>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Observables& from);
  void MergeFrom(const Observables& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Observables* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .gnss_sdr.GnssSynchro observable = 1;
  int observable_size() const;
  void clear_observable();
  static const int kObservableFieldNumber = 1;
  ::gnss_sdr::GnssSynchro* mutable_observable(int index);
  ::google::protobuf::RepeatedPtrField< ::gnss_sdr::GnssSynchro >*
      mutable_observable();
  const ::gnss_sdr::GnssSynchro& observable(int index) const;
  ::gnss_sdr::GnssSynchro* add_observable();
  const ::google::protobuf::RepeatedPtrField< ::gnss_sdr::GnssSynchro >&
      observable() const;

  // @@protoc_insertion_point(class_scope:gnss_sdr.Observables)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::gnss_sdr::GnssSynchro > observable_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_gnss_5fsynchro_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GnssSynchro

// string system = 1;
inline void GnssSynchro::clear_system() {
  system_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GnssSynchro::system() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.system)
  return system_.GetNoArena();
}
inline void GnssSynchro::set_system(const ::std::string& value) {
  
  system_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.system)
}
#if LANG_CXX11
inline void GnssSynchro::set_system(::std::string&& value) {
  
  system_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gnss_sdr.GnssSynchro.system)
}
#endif
inline void GnssSynchro::set_system(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  system_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gnss_sdr.GnssSynchro.system)
}
inline void GnssSynchro::set_system(const char* value, size_t size) {
  
  system_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gnss_sdr.GnssSynchro.system)
}
inline ::std::string* GnssSynchro::mutable_system() {
  
  // @@protoc_insertion_point(field_mutable:gnss_sdr.GnssSynchro.system)
  return system_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GnssSynchro::release_system() {
  // @@protoc_insertion_point(field_release:gnss_sdr.GnssSynchro.system)
  
  return system_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GnssSynchro::set_allocated_system(::std::string* system) {
  if (system != nullptr) {
    
  } else {
    
  }
  system_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), system);
  // @@protoc_insertion_point(field_set_allocated:gnss_sdr.GnssSynchro.system)
}

// string signal = 2;
inline void GnssSynchro::clear_signal() {
  signal_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GnssSynchro::signal() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.signal)
  return signal_.GetNoArena();
}
inline void GnssSynchro::set_signal(const ::std::string& value) {
  
  signal_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.signal)
}
#if LANG_CXX11
inline void GnssSynchro::set_signal(::std::string&& value) {
  
  signal_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gnss_sdr.GnssSynchro.signal)
}
#endif
inline void GnssSynchro::set_signal(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  signal_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gnss_sdr.GnssSynchro.signal)
}
inline void GnssSynchro::set_signal(const char* value, size_t size) {
  
  signal_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gnss_sdr.GnssSynchro.signal)
}
inline ::std::string* GnssSynchro::mutable_signal() {
  
  // @@protoc_insertion_point(field_mutable:gnss_sdr.GnssSynchro.signal)
  return signal_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GnssSynchro::release_signal() {
  // @@protoc_insertion_point(field_release:gnss_sdr.GnssSynchro.signal)
  
  return signal_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GnssSynchro::set_allocated_signal(::std::string* signal) {
  if (signal != nullptr) {
    
  } else {
    
  }
  signal_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), signal);
  // @@protoc_insertion_point(field_set_allocated:gnss_sdr.GnssSynchro.signal)
}

// uint32 prn = 3;
inline void GnssSynchro::clear_prn() {
  prn_ = 0u;
}
inline ::google::protobuf::uint32 GnssSynchro::prn() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.prn)
  return prn_;
}
inline void GnssSynchro::set_prn(::google::protobuf::uint32 value) {
  
  prn_ = value;
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.prn)
}

// int32 channel_id = 4;
inline void GnssSynchro::clear_channel_id() {
  channel_id_ = 0;
}
inline ::google::protobuf::int32 GnssSynchro::channel_id() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.channel_id)
  return channel_id_;
}
inline void GnssSynchro::set_channel_id(::google::protobuf::int32 value) {
  
  channel_id_ = value;
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.channel_id)
}

// double acq_delay_samples = 5;
inline void GnssSynchro::clear_acq_delay_samples() {
  acq_delay_samples_ = 0;
}
inline double GnssSynchro::acq_delay_samples() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.acq_delay_samples)
  return acq_delay_samples_;
}
inline void GnssSynchro::set_acq_delay_samples(double value) {
  
  acq_delay_samples_ = value;
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.acq_delay_samples)
}

// double acq_doppler_hz = 6;
inline void GnssSynchro::clear_acq_doppler_hz() {
  acq_doppler_hz_ = 0;
}
inline double GnssSynchro::acq_doppler_hz() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.acq_doppler_hz)
  return acq_doppler_hz_;
}
inline void GnssSynchro::set_acq_doppler_hz(double value) {
  
  acq_doppler_hz_ = value;
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.acq_doppler_hz)
}

// uint64 acq_samplestamp_samples = 7;
inline void GnssSynchro::clear_acq_samplestamp_samples() {
  acq_samplestamp_samples_ = PROTOBUF_ULONGLONG(0);
}
inline ::google::protobuf::uint64 GnssSynchro::acq_samplestamp_samples() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.acq_samplestamp_samples)
  return acq_samplestamp_samples_;
}
inline void GnssSynchro::set_acq_samplestamp_samples(::google::protobuf::uint64 value) {
  
  acq_samplestamp_samples_ = value;
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.acq_samplestamp_samples)
}

// uint32 acq_doppler_step = 8;
inline void GnssSynchro::clear_acq_doppler_step() {
  acq_doppler_step_ = 0u;
}
inline ::google::protobuf::uint32 GnssSynchro::acq_doppler_step() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.acq_doppler_step)
  return acq_doppler_step_;
}
inline void GnssSynchro::set_acq_doppler_step(::google::protobuf::uint32 value) {
  
  acq_doppler_step_ = value;
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.acq_doppler_step)
}

// bool flag_valid_acquisition = 9;
inline void GnssSynchro::clear_flag_valid_acquisition() {
  flag_valid_acquisition_ = false;
}
inline bool GnssSynchro::flag_valid_acquisition() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.flag_valid_acquisition)
  return flag_valid_acquisition_;
}
inline void GnssSynchro::set_flag_valid_acquisition(bool value) {
  
  flag_valid_acquisition_ = value;
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.flag_valid_acquisition)
}

// int64 fs = 10;
inline void GnssSynchro::clear_fs() {
  fs_ = PROTOBUF_LONGLONG(0);
}
inline ::google::protobuf::int64 GnssSynchro::fs() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.fs)
  return fs_;
}
inline void GnssSynchro::set_fs(::google::protobuf::int64 value) {
  
  fs_ = value;
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.fs)
}

// double prompt_i = 11;
inline void GnssSynchro::clear_prompt_i() {
  prompt_i_ = 0;
}
inline double GnssSynchro::prompt_i() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.prompt_i)
  return prompt_i_;
}
inline void GnssSynchro::set_prompt_i(double value) {
  
  prompt_i_ = value;
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.prompt_i)
}

// double prompt_q = 12;
inline void GnssSynchro::clear_prompt_q() {
  prompt_q_ = 0;
}
inline double GnssSynchro::prompt_q() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.prompt_q)
  return prompt_q_;
}
inline void GnssSynchro::set_prompt_q(double value) {
  
  prompt_q_ = value;
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.prompt_q)
}

// double cn0_db_hz = 13;
inline void GnssSynchro::clear_cn0_db_hz() {
  cn0_db_hz_ = 0;
}
inline double GnssSynchro::cn0_db_hz() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.cn0_db_hz)
  return cn0_db_hz_;
}
inline void GnssSynchro::set_cn0_db_hz(double value) {
  
  cn0_db_hz_ = value;
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.cn0_db_hz)
}

// double carrier_doppler_hz = 14;
inline void GnssSynchro::clear_carrier_doppler_hz() {
  carrier_doppler_hz_ = 0;
}
inline double GnssSynchro::carrier_doppler_hz() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.carrier_doppler_hz)
  return carrier_doppler_hz_;
}
inline void GnssSynchro::set_carrier_doppler_hz(double value) {
  
  carrier_doppler_hz_ = value;
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.carrier_doppler_hz)
}

// double carrier_phase_rads = 15;
inline void GnssSynchro::clear_carrier_phase_rads() {
  carrier_phase_rads_ = 0;
}
inline double GnssSynchro::carrier_phase_rads() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.carrier_phase_rads)
  return carrier_phase_rads_;
}
inline void GnssSynchro::set_carrier_phase_rads(double value) {
  
  carrier_phase_rads_ = value;
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.carrier_phase_rads)
}

// double code_phase_samples = 16;
inline void GnssSynchro::clear_code_phase_samples() {
  code_phase_samples_ = 0;
}
inline double GnssSynchro::code_phase_samples() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.code_phase_samples)
  return code_phase_samples_;
}
inline void GnssSynchro::set_code_phase_samples(double value) {
  
  code_phase_samples_ = value;
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.code_phase_samples)
}

// uint64 tracking_sample_counter = 17;
inline void GnssSynchro::clear_tracking_sample_counter() {
  tracking_sample_counter_ = PROTOBUF_ULONGLONG(0);
}
inline ::google::protobuf::uint64 GnssSynchro::tracking_sample_counter() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.tracking_sample_counter)
  return tracking_sample_counter_;
}
inline void GnssSynchro::set_tracking_sample_counter(::google::protobuf::uint64 value) {
  
  tracking_sample_counter_ = value;
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.tracking_sample_counter)
}

// bool flag_valid_symbol_output = 18;
inline void GnssSynchro::clear_flag_valid_symbol_output() {
  flag_valid_symbol_output_ = false;
}
inline bool GnssSynchro::flag_valid_symbol_output() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.flag_valid_symbol_output)
  return flag_valid_symbol_output_;
}
inline void GnssSynchro::set_flag_valid_symbol_output(bool value) {
  
  flag_valid_symbol_output_ = value;
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.flag_valid_symbol_output)
}

// int32 correlation_length_ms = 19;
inline void GnssSynchro::clear_correlation_length_ms() {
  correlation_length_ms_ = 0;
}
inline ::google::protobuf::int32 GnssSynchro::correlation_length_ms() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.correlation_length_ms)
  return correlation_length_ms_;
}
inline void GnssSynchro::set_correlation_length_ms(::google::protobuf::int32 value) {
  
  correlation_length_ms_ = value;
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.correlation_length_ms)
}

// bool flag_valid_word = 20;
inline void GnssSynchro::clear_flag_valid_word() {
  flag_valid_word_ = false;
}
inline bool GnssSynchro::flag_valid_word() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.flag_valid_word)
  return flag_valid_word_;
}
inline void GnssSynchro::set_flag_valid_word(bool value) {
  
  flag_valid_word_ = value;
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.flag_valid_word)
}

// uint32 tow_at_current_symbol_ms = 21;
inline void GnssSynchro::clear_tow_at_current_symbol_ms() {
  tow_at_current_symbol_ms_ = 0u;
}
inline ::google::protobuf::uint32 GnssSynchro::tow_at_current_symbol_ms() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.tow_at_current_symbol_ms)
  return tow_at_current_symbol_ms_;
}
inline void GnssSynchro::set_tow_at_current_symbol_ms(::google::protobuf::uint32 value) {
  
  tow_at_current_symbol_ms_ = value;
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.tow_at_current_symbol_ms)
}

// double pseudorange_m = 22;
inline void GnssSynchro::clear_pseudorange_m() {
  pseudorange_m_ = 0;
}
inline double GnssSynchro::pseudorange_m() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.pseudorange_m)
  return pseudorange_m_;
}
inline void GnssSynchro::set_pseudorange_m(double value) {
  
  pseudorange_m_ = value;
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.pseudorange_m)
}

// double rx_time = 23;
inline void GnssSynchro::clear_rx_time() {
  rx_time_ = 0;
}
inline double GnssSynchro::rx_time() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.rx_time)
  return rx_time_;
}
inline void GnssSynchro::set_rx_time(double value) {
  
  rx_time_ = value;
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.rx_time)
}

// bool flag_valid_pseudorange = 24;
inline void GnssSynchro::clear_flag_valid_pseudorange() {
  flag_valid_pseudorange_ = false;
}
inline bool GnssSynchro::flag_valid_pseudorange() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.flag_valid_pseudorange)
  return flag_valid_pseudorange_;
}
inline void GnssSynchro::set_flag_valid_pseudorange(bool value) {
  
  flag_valid_pseudorange_ = value;
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.flag_valid_pseudorange)
}

// double interp_tow_ms = 25;
inline void GnssSynchro::clear_interp_tow_ms() {
  interp_tow_ms_ = 0;
}
inline double GnssSynchro::interp_tow_ms() const {
  // @@protoc_insertion_point(field_get:gnss_sdr.GnssSynchro.interp_tow_ms)
  return interp_tow_ms_;
}
inline void GnssSynchro::set_interp_tow_ms(double value) {
  
  interp_tow_ms_ = value;
  // @@protoc_insertion_point(field_set:gnss_sdr.GnssSynchro.interp_tow_ms)
}

// -------------------------------------------------------------------

// Observables

// repeated .gnss_sdr.GnssSynchro observable = 1;
inline int Observables::observable_size() const {
  return observable_.size();
}
inline void Observables::clear_observable() {
  observable_.Clear();
}
inline ::gnss_sdr::GnssSynchro* Observables::mutable_observable(int index) {
  // @@protoc_insertion_point(field_mutable:gnss_sdr.Observables.observable)
  return observable_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::gnss_sdr::GnssSynchro >*
Observables::mutable_observable() {
  // @@protoc_insertion_point(field_mutable_list:gnss_sdr.Observables.observable)
  return &observable_;
}
inline const ::gnss_sdr::GnssSynchro& Observables::observable(int index) const {
  // @@protoc_insertion_point(field_get:gnss_sdr.Observables.observable)
  return observable_.Get(index);
}
inline ::gnss_sdr::GnssSynchro* Observables::add_observable() {
  // @@protoc_insertion_point(field_add:gnss_sdr.Observables.observable)
  return observable_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gnss_sdr::GnssSynchro >&
Observables::observable() const {
  // @@protoc_insertion_point(field_list:gnss_sdr.Observables.observable)
  return observable_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace gnss_sdr

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_gnss_5fsynchro_2eproto
