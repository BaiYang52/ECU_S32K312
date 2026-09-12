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
 * @file        : CanIf_Cfg.c
 * @licence     : 
 * @date        : 2026-09-12 10:41:07
 * @customer    : iSoft
 * @description : Configuration data for CanIf
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/

/* PRQA S 1531, 1533 EOF */ /* VL_QAC_OneRefSymbol */
/* PRQA S 3132 EOF */ /* VL_QAC_MagicNum */
/* =================================================== inclusions =================================================== */
#include "CanIf_Cfg.h"
#include "CanIf_Types.h"
#include "CanIf_CfgTypes.h"
#include "CanSM_CanIf.h"
#include "PduR_PBcfg.h"
#include "PduR_CanIf.h"
#include "CanGeneral.h"

/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */

/* ========================================== internal function declarations ======================================== */

/* ============================================ internal data definitions =========================================== */

/* ============================================ external data definitions =========================================== */
#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
const CanIf_DispatchConfigType CanIf_DispatchConfigData = {
    .CanIfDispatchUserCtrlBusOffName = &CanSM_ControllerBusOff,
    .CanIfDispatchUserCtrlModeIndicationName = &CanSM_ControllerModeIndication,
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
const Can_DriverApiType Can_DriverApi
[CANIF_CANDRIVER_NUMBER] = {
    {
        .CanGetControllerErrorStateApi = &CanGeneral_GetControllerErrorState,
        .CanGetControllerRxErrorCounterApi = &CanGeneral_GetControllerRxErrorCounter,
        .CanGetControllerTxErrorCounterApi = &CanGeneral_GetControllerTxErrorCounter,
        .CanSetControllerModeApi = &CanGeneral_SetControllerMode,
        .CanWriteApi = &CanGeneral_Write,
    },
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"


#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
const CanIf_CtrlConfigType CanIf_CtrlCfgData
[CANIF_CANCONTROLLER_NUMBER] = {
    {
        /* CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_0 */
        .CanCtrlId = 0u,
        .CanDriverId = CANIF_CANGENERAL,
        .CanIfCtrlWakeupSupport = FALSE,
        .CanIfWakeUpSource = 0x00000000u,
    },
    {
        /* CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_1 */
        .CanCtrlId = 1u,
        .CanDriverId = CANIF_CANGENERAL,
        .CanIfCtrlWakeupSupport = FALSE,
        .CanIfWakeUpSource = 0x00000000u,
    },
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_CONFIG_DATA_8
#include "CanIf_MemMap.h"
const uint8 CanIf_CanCtrlId2Index
[CANIF_CANCTRLID2INDEX_NUMBER] = {
    0u,
    1u,
};
#define CANIF_STOP_SEC_CONFIG_DATA_8
#include "CanIf_MemMap.h"



/* ========================================== external function definitions ========================================= */

/* ========================================== internal function definitions ========================================= */

