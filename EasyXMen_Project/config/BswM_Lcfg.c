
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
 * @file        : BswM_Lcfg.c
 * @licence     : 
 * @date        : 2026-09-13 22:58:04
 * @customer    : iSoft
 * @description : Link-Time Configuration parameter of BswM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/

/* =================================================== inclusions =================================================== */
#include "BswM_Lcfg.h"

/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */

/* ========================================== internal function declarations ======================================== */

/* ============================================ internal data definitions =========================================== */

/* ============================================ external data definitions =========================================== */

/* ========================================== external function definitions ========================================= */

boolean BswM_GetPartitionLcPCCfgPtr(
    const BswM_PartitionPCCfgType** bswmPartPCCfg,
    const BswM_PartitionLCfgType** bswmPartLCfg)
{
    boolean foundResult = TRUE;
    *bswmPartPCCfg = &BswM_PartitionPCCfg_Core0_Par0;
    *bswmPartLCfg = &BswM_PartitionLCfg_Core0_Par0;
    return foundResult;
}

boolean BswM_GetPartitionPCCfgPtr(
    const BswM_PartitionPCCfgType** bswmPartPCCfg)
{
    boolean foundResult = TRUE;
    *bswmPartPCCfg = &BswM_PartitionPCCfg_Core0_Par0;
    return foundResult;
}


boolean BswM_GetCorePCCfgPtr(const BswM_PCCfgType** bswmCorePCCfgPtr)
{
    boolean foundResult = TRUE;
    *bswmCorePCCfgPtr = &BswM_CorePCCfg_Core0;
    return foundResult;
}
