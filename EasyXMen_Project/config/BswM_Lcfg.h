
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
 * @file        : BswM_Lcfg.h
 * @licence     : 
 * @date        : 2026-09-13 22:58:04
 * @customer    : iSoft
 * @description : Link-Time Configuration parameter of BswM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/

#ifndef BSWM_LCFG__H
#define BSWM_LCFG__H


/* =================================================== inclusions =================================================== */
#include "BswM_Internal.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ===================================================== macros ===================================================== */



/* PRQA S 0793 ++ */ /* VL_BswM_0793 */
/* BswMConfig*/
#define BSWM_AL_Core0_Par0_BswMActionList_0      0u
#define BSWM_AL_Core0_Par0_BswMActionList_1      1u

/* PRQA S 0793 -- */
/* ================================================ type definitions ================================================ */

/* ========================================== internal function definitions ========================================= */

/* =========================================== external data declarations =========================================== */
/* BswMConfig */
/* PRQA S 0777,1712 ++ */ /* VL_QAC_DiffIdentifier,VL_BswM_1712 */
/* Declare the PC configuration for each partition */
extern const BswM_PartitionPCCfgType BswM_PartitionPCCfg_Core0_Par0;
/* Declare the LC configuration for each partition */
extern const BswM_PartitionLCfgType BswM_PartitionLCfg_Core0_Par0;
/* PRQA S 0777,1712 -- */

extern const BswM_PCCfgType BswM_CorePCCfg_Core0;

/* ========================================= external function declarations ========================================= */
/* BswMConfig */


#ifdef __cplusplus
}
#endif

#endif /* BSWM_LCFG__H */
