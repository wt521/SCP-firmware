/*
 * Arm SCP/MCP Software
 * Copyright (c) 2017-2019, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef MOD_MOCK_PSU_H
#define MOD_MOCK_PSU_H

#include <fwk_module_idx.h>
#include <stdbool.h>
#include <stdint.h>

/*!
 * \ingroup GroupModules
 * \defgroup GroupMockPsu Mock Power Supply Driver
 *
 * \details The `mock_psu` module provides a mock power supply driver for use
 *      alongside the `psu` interface on systems that do not provide a real
 *      power supply.
 *
 * \{
 */

/*!
 * \brief Element configuration.
 */
struct mod_mock_psu_element_cfg {
    /*!
     * \brief Default state of the mock device's supply (enabled or disabled).
     */
    bool default_enabled;

    /*!
     * \brief Default voltage, in millivolts (mV), of the device's supply.
     */
    uint64_t default_voltage;
};

/*!
 * \brief API indices.
 */
enum mod_mock_psu_api_idx {
    /*!
     * \brief Driver API index.
     *
     * \note This API implements the ::mod_psu_driver_api interface.
     *
     * \warning Binding to this API must occur through an element of this
     *      module.
     */
    MOD_MOCK_PSU_API_IDX_DRIVER,

    /*!
     * \brief Number of defined APIs.
     */
    MOD_MOCK_PSU_API_IDX_COUNT
};

/*!
 * \brief Driver API identifier.
 *
 * \note This identifier corresponds to the ::MOD_MOCK_PSU_API_IDX_DRIVER API
 *      index.
 */
static const fwk_id_t mod_mock_psu_api_id_driver =
    FWK_ID_API_INIT(FWK_MODULE_IDX_MOCK_PSU, MOD_MOCK_PSU_API_IDX_DRIVER);

/*!
 * \}
 */

#endif /* MOD_MOCK_PSU_H */
