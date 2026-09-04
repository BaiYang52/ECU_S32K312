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
 * @file        : Rte_EcuM_Type.h
 * @licence     : 
 * @date        : 2026-09-04 22:16:16
 * @customer    : iSoft
 * @description : configuration parameter of EcuM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/


#ifndef RTE_ECUM_TYPE_H
#define RTE_ECUM_TYPE_H

/* =================================================== inclusions =================================================== */
#include "Std_Types.h"

#ifdef __cplusplus
extern "C" {
#endif
/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */
/*ECUM Mode, represents the modes of the ECU State Manager module that will be
 * notified to the SW-Cs*/
typedef uint8 EcuM_ModeType;
#define ECUM_MODE_STARTUP    0x00u
#define ECUM_MODE_RUN        0x01u
#define ECUM_MODE_POST_RUN   0x02u
#define ECUM_MODE_SLEEP      0x03u
#define ECUM_MODE_SHUTDOWN   0x04u
#define ECUM_MODE_WAKE_SLEEP 0x05u

/*Unique value for each user.
 *The integrator shall define a unique value for each user at system generation time.
 */
typedef uint8 EcuM_UserType;

/*This type describes the cause for a shutdown by the ECU State Manager.
 *It can be extended by configuration.*/
typedef uint8 EcuM_ShutdownCauseType;
#define EcuMShutdownCause_0 (EcuM_ShutdownCauseType)0u

/*This data type represents the modes of the ECU Manager module*/
typedef uint16 EcuM_ShutdownModeType;

#define EcuMResetMode_0 (uint16)256u

/*This data type represents the time of the ECU Manager module*/
typedef uint32 EcuM_TimeType;

typedef uint8 EcuM_ShutdownTargetType;

#define ECUM_SHUTDOWN_TARGET_SLEEP (uint8)0u
#define ECUM_SHUTDOWN_TARGET_RESET (uint8)1u
#define ECUM_SHUTDOWN_TARGET_OFF   (uint8)2u

/*This type represents the boot targets the ECU Manager module can be configured with.*/
typedef uint8 EcuM_BootTargetType;
#define ECUM_BOOT_TARGET_APP            (EcuM_BootTargetType)0u
#define ECUM_BOOT_TARGET_OEM_BOOTLOADER (EcuM_BootTargetType)1u
#define ECUM_BOOT_TARGET_SYS_BOOTLOADER (EcuM_BootTargetType)2u

/* ========================================== internal function definitions ========================================= */
 
/* =========================================== external data declarations =========================================== */
 
/* ========================================= external function declarations ========================================= */

#ifdef __cplusplus
}
#endif
#endif /* RTE_ECUM_TYPE_H */
