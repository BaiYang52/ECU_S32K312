/**
 * COPYRIGHT
 * ---------------------------------------------------------------------------------------------------------------------
 * Copyright (c) iSOFT INFRASTRUCTURE SOFTWARE CO., LTD. This software is proprietary to
 * iSOFT INFRASTRUCTURE SOFTWARE CO., LTD., and all rights are reserved by iSOFT INFRASTRUCTURE SOFTWARE CO., LTD.
 * Without the express written permission of the company, no organization or individual may copy, install, trial,
 * distribute, or reverse engineer this software. For terms of use and further details, please refer to the End User
 * License Agreement (EULA) or contact us business@i-soft.com.cn for more assistance.
 *
 * This file contains code from iSoft, which is licensed under the LGPL-2.1. However, due to a special exception,
 * you are not required to comply with the provisions of section 6a of LGPL-2.1. Specifically, you may distribute
 * your software, including this file, under terms of your choice, including proprietary licenses, without needing to
 * provide the source code or object code as specified in section 6a. For more details, please refer to the project's
 * LICENSE and EXCEPTION files and the specific exception statement.
 * ---------------------------------------------------------------------------------------------------------------------
 * FILE DESCRIPTION
 * ---------------------------------------------------------------------------------------------------------------------
 * @MCU         : S32K148
 * @file        : EcuM_Cfg.h
 * @licence     : 
 * @date        : 2026-09-12 18:25:38
 * @customer    : iSoft
 * @description : configuration parameter of EcuM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/


#ifndef ECUM_CFG_H
#define ECUM_CFG_H
/* =================================================== inclusions =================================================== */
#include "Std_Types.h"

#ifdef __cplusplus
extern "C" {
#endif
/* ===================================================== macros ===================================================== */
/** period of time in milliseconds */
#define ECUM_MAINFUNC_PERIOD 10u

/** enable/disable wakeup sources of ComM Pnc */
#define ECUM_COMM_PNC_ENABLED STD_OFF

/** enable/disable wakeup sources of ComM Channel */
#define ECUM_COMM_CHANNEL_ENABLED STD_ON

/** timer source selection */
#define ECUM_USE_TIMER ECUM_TIMER_USE_GPT

/** enable/disable development error detection */
#define ECUM_DEV_ERROR_DETECT STD_OFF

/** enable/disable version info api */
#define ECUM_VERSION_INFO_API STD_OFF

/** Switch for whether a driver init list zero configured*/
#define ECUM_DRIVER_INIT_LIST_ZERO STD_OFF

/** Switch for whether a driver init list one configured*/
#define ECUM_DRIVER_INIT_LIST_ONE STD_ON

/** Switch for whether a driver init list BswMs configured*/
#define ECUM_DRIVER_INIT_LIST_BSWMS STD_ON

/** Switch for whether a driver restart list configured*/
#define ECUM_DRIVER_RESTART_LIST STD_OFF

/** This flag indicates whether the optional AlarmClock feature is present*/
#define ECUM_ALARM_CLOCK_PRESENT STD_OFF

/** To reuse software components (legacy SWCs), which are designed to work with
 * the "ECU State Manager with fixed state machine" the option
 * "ECU Mode Handling" has to be activated.
 *If STD_OFF, Run Request Protocol is not performed */
#define ECUM_MODE_HANDING STD_OFF

/** This flag indicates whether the optional Reset Loop Detection feature is present */
#define ECUM_RESET_LOOP_DETECTION STD_OFF

/** This flag indicates whether programable interrupts are enabled or not */
#define ECUM_SET_PROGRAMMABLE_INTERRUPTS STD_OFF

/** Switch of sleep mode enabled in this ECUM */
#define ECUM_SLEEP_MODE_ENABLED STD_OFF

/** Number of sleep mode configured in this ECUM */
#define ECUM_MAX_SLEEP_MODE_NUM 0u

/** Number of reset mode configured in this ECUM */
#define ECUM_MAX_RESET_MODE_NUM 1u

/** Number of shutdown case configured in this ECUM */
#define ECUM_MAX_SHUTDOWN_CAUSE_NUM 1u

/** Number of wake up sources configured in this ECUM */
#define ECUM_MAX_WAKE_UP_SOURCE_NUM 1u

/** Number of ECUM user configured */
#define ECUM_MAX_USER_NUM 1u

/** Number of ECUM alarm clock configured */
#define ECUM_MAX_ALARM_CLOCK_NUM 0u

/** number of core, in multi-core case, it is bigger than one */
#define ECUM_MAX_MCU_CORE_NUM 0u

/**
 * @name ECUM_CONFIG_CORE_ID
 * @{
 * @brief ECUM Configuration Core ID 
 */
/** Id of the core that will be  configured in this ECUM */
#define ECUM_CONFIG_CORE0_ID 0u
/** @} */

/** the CORE identifier on which the master ECUM running*/
#define ECUM_MASTER_CORE_ID 0u

/**
 * @name ECUM_BSWM_INIT_INDEX
 * @{
 * @brief ECUM Configuration index of BswM Init list
 */
/** index of BswM driver */
#define EcuMDriverInitListBswM_0 0u
/** index of BswM driver  */
#define EcuMConf_EcuMDriverInitListBswM_EcuMDriverInitListBswM_0 0u
/** @} */

/**
 * @name ECUM_USER_INDEX
 * @{
 * @brief ECUM Configuration index of user list
 */
/** index of user */
#define EcuMFlexUserConfig_0 0u
/** index of user  */
#define EcuMConf_EcuMFlexUserConfig_EcuMFlexUserConfig_0 0u
/** @} */

/* ================================================ type definitions ================================================ */
 
/* ========================================== internal function definitions ========================================= */
 
/* =========================================== external data declarations =========================================== */
 
/* ========================================= external function declarations ========================================= */

#ifdef __cplusplus
}
#endif
#endif /* ECUM_CFG_H */

