/*!
 * \file tlm_conf.cc
 * \brief Class that contains all the configuration parameters for generic
 * telemetry decoder block.
 * \author Carles Fernandez, 2020. cfernandez(at)cttc.es
 *
 * -----------------------------------------------------------------------------
 *
 * GNSS-SDR is a Global Navigation Satellite System software-defined receiver.
 * This file is part of GNSS-SDR.
 *
 * Copyright (C) 2010-2020  (see AUTHORS file for a list of contributors)
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 * -----------------------------------------------------------------------------
 */

#include "tlm_conf.h"


void Tlm_Conf::SetFromConfiguration(const ConfigurationInterface *configuration,
    const std::string &role)
{
    const std::string default_dumpname("telemetry");
    dump_filename = configuration->property(role + ".dump_filename", default_dumpname);
    dump = configuration->property(role + ".dump", false);
    dump_mat = configuration->property(role + ".dump_mat", dump);
    remove_dat = configuration->property(role + ".remove_dat", false);
    dump_crc_stats = configuration->property(role + ".dump_crc_stats", false);
    const std::string default_crc_stats_dumpname("telemetry_crc_stats");
    dump_crc_stats_filename = configuration->property(role + ".dump_crc_stats_filename", default_crc_stats_dumpname);
    enable_navdata_monitor = configuration->property("NavDataMonitor.enable_monitor", false);
    date_change_WN = configuration->property(role + ".date_change_WN", false);
    WN_new = configuration->property(role + ".WN_new", 0);
}
