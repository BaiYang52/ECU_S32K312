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
 * @date        : 2026-09-13 22:58:15
 * @customer    : iSoft
 * @description : Application Types Header File for 
SWC-EcuM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/
#ifndef RTE_ECUM_TYPE_H
#define RTE_ECUM_TYPE_H

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Rte_Type.h"
/*******************************************************************************
**                      Global Macros                                         **
*******************************************************************************/
/* ActivationReason */



/* Enumeration Data Types */
#ifndef ECUM_SHUTDOWN_TARGET_SLEEP
#define ECUM_SHUTDOWN_TARGET_SLEEP 0x0U
#endif
#ifndef ECUM_SHUTDOWN_TARGET_RESET
#define ECUM_SHUTDOWN_TARGET_RESET 0x1U
#endif
#ifndef ECUM_SHUTDOWN_TARGET_OFF
#define ECUM_SHUTDOWN_TARGET_OFF 0x2U
#endif
#ifndef EcuMResetMode_0
#define EcuMResetMode_0 256U
#endif
#ifndef ECUM_CAUSE_UNKNOWN
#define ECUM_CAUSE_UNKNOWN 0U
#endif
#ifndef ECUM_CAUSE_ECU_STATE
#define ECUM_CAUSE_ECU_STATE 1U
#endif
#ifndef ECUM_CAUSE_WDGM
#define ECUM_CAUSE_WDGM 2U
#endif
#ifndef ECUM_CAUSE_DCM
#define ECUM_CAUSE_DCM 3U
#endif
#ifndef ECUM_BOOT_TARGET_APP
#define ECUM_BOOT_TARGET_APP 0U
#endif
#ifndef ECUM_BOOT_TARGET_OEM_BOOTLOADER
#define ECUM_BOOT_TARGET_OEM_BOOTLOADER 1U
#endif
#ifndef ECUM_BOOT_TARGET_SYS_BOOTLOADER
#define ECUM_BOOT_TARGET_SYS_BOOTLOADER 2U
#endif
#define EcuM_ShutdownCauseType_LowerLimit (0)
#define EcuM_ShutdownCauseType_UpperLimit (3)
#define EcuM_BootTargetType_LowerLimit (0)
#define EcuM_BootTargetType_UpperLimit (2)

/* Implementation Data Type symbols */
      
/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Declaration                               **
*******************************************************************************/

/*******************************************************************************
**                      Global Functions                                      **
*******************************************************************************/
#ifdef __cplusplus
} /* extern "C" */
#endif 
#endif /* RTE_ECUM_TYPE_H */
