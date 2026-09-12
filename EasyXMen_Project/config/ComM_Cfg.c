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
 * @file        : ComM_Cfg.c
 * @licence     : 
 * @date        : 2026-09-12 11:52:52
 * @customer    : iSoft
 * @description : Pre-compile configuration parameter of ComM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/
/* PRQA S 1531, 1533, 1532 EOF */ /* VL_QAC_OneRefSymbol, VL_QAC_OneFunRef, VL_QAC_OneRefSymbol */
/* =================================================== inclusions =================================================== */
#include "ComM_Channel.h"
#include "ComM_Internal.h"
#include "SchM_ComM.h"


/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */

/* ========================================== internal function declarations ======================================== */

/* ============================================ internal data definitions =========================================== */
#define COMM_START_SEC_VAR_CLEARED_GLOBAL_UNSPECIFIED
#include "ComM_MemMap.h"
COMM_LOCAL ComM_ChannelLocalVarType ComM_ChannelLocalVarComMChannel_0;
#define COMM_STOP_SEC_VAR_CLEARED_GLOBAL_UNSPECIFIED
#include "ComM_MemMap.h"

/* ============================================ external data definitions =========================================== */


#define COMM_START_SEC_CONFIG_DATA_PTR
#include "ComM_MemMap.h"
ComM_ChannelLocalVarType* const ComM_ChannelLocalVarPtrs[COMM_CHANNEL_NUMBER] = {
    &ComM_ChannelLocalVarComMChannel_0,
};
#define COMM_STOP_SEC_CONFIG_DATA_PTR
#include "ComM_MemMap.h"

/* ========================================== external function definitions ========================================= */
#define COMM_START_SEC_CODE
#include "ComM_MemMap.h"
void ComM_MainFunction_ComMChannel_0(void)
{
    ComM_MainFunction(ComMConf_ComMChannel_ComMChannel_0);
}



/* ========================================== internal function definitions ========================================= */

#define COMM_STOP_SEC_CODE
#include "ComM_MemMap.h"
