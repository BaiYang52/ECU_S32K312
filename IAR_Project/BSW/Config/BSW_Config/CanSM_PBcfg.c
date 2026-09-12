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
 * @file        : CanSM_PBcfg.c
 * @licence     : 
 * @date        : 2026-09-12 18:04:18
 * @customer    : iSoft
 * @description : Pre-compile parameter definition of CanSM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/
/* =================================================== inclusions =================================================== */
#include "CanSM.h"
#include "CanSM_PBcfg.h"
#include "CanSM_Cfg.h"
#include "ComM_Cfg.h"



/* ============================================ internal data definitions =========================================== */
#define CANSM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanSM_MemMap.h"
static CanSM_NetWorkRunTimeType CanSM_NetworkRT_CanSMManagerNetwork_0;
static Can_ControllerStateType CanSM_ControllerModeRT_CanSMManagerNetwork_0[2u];
#define CANSM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanSM_MemMap.h"

#define CANSM_START_SEC_CONFIG_DATA_8
#include "CanSM_MemMap.h"

static const uint8 CanSM_MN_0ControllerId[2u] =
{
    CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_0,   /*CanSMControllerId*/
    CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_1,   /*CanSMControllerId*/
};

#define CANSM_STOP_SEC_CONFIG_DATA_8
#include "CanSM_MemMap.h"


#define CANSM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanSM_MemMap.h"

static const CanSM_ControllerRefType CanSM_ControllerConfig[CANSM_NETWORK_NUM] =
{
    { 2u, &CanSM_MN_0ControllerId[0u], &CanSM_ControllerModeRT_CanSMManagerNetwork_0[0u]},
};


static const CanSM_ManagerNetworkType CanSM_NetworkConfig[CANSM_NETWORK_NUM] =
{
    {
        10u, /*CanSMBorCounterL1ToL2 */
        100u, /*CanSMBorTimeL1 */
        1000u, /*CanSMBorTimeL2 */
        10u, /*CanSMBorTimeTxEnsured */
        FALSE, /*CanSMEnableBusOffDelay */
        ComMConf_ComMChannel_ComMChannel_0, /*CanSMComMNetworkHandleRef*/
        NULL_PTR, /* TrcvRef */
        &CanSM_ControllerConfig[0u], /*ControllerRef*/
        &CanSM_NetworkRT_CanSMManagerNetwork_0,    /*RuntimeNetPtr*/
    },
};
const CanSM_ConfigType CanSM_Config = /* PRQA S 1531 */ /* VL_QAC_OneRefSymbol */
{
    10u, /* CanSMModeRequestRepetitionMax */
    10u, /* CanSMModeRequestRepetitionTime */
    &CanSM_NetworkConfig[0u]  /* CanSMManagerNetworkRef */
};

#define CANSM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanSM_MemMap.h"

/* ============================================ external data definitions =========================================== */

/* ========================================== external function definitions ========================================= */
