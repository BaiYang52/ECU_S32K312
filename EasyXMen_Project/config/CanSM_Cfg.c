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
 * @file        : CanSM_Cfg.c
 * @licence     : 
 * @date        : 2026-09-05 09:46:58
 * @customer    : iSoft
 * @description : Pre-compile parameter definition of CanSM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/
/* =================================================== inclusions =================================================== */
#include "CanSM.h"
#include "SchM_CanSM.h"
#include "CanIf_Cfg.h"

/* ============================================ internal data definitions =========================================== */

/* ============================================ external data definitions =========================================== */

/* ========================================== external function definitions ========================================= */
#define CANSM_START_SEC_CODE
#include "CanSM_MemMap.h"
/* PRQA S 1532 ++ */ /* VL_QAC_OneFunRef */
/**
 * @brief       Periodic function for the  network.
 * @reentrant   TRUE
 * @synchronous TRUE
 * @trace       CPD-73378
 */
void CanSM_MainFunction_CanSMManagerNetwork_0(void)
{
    CanSM_MainFunction(0u);
}
/* PRQA S 1532 -- */ /* VL_QAC_OneFunRef */
#define CANSM_STOP_SEC_CODE
#include "CanSM_MemMap.h"
