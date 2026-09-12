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
 * @file        : EcuM_Cfg.c
 * @licence     : 
 * @date        : 2026-09-12 18:25:38
 * @customer    : iSoft
 * @description : configuration parameter of EcuM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/


/* =================================================== inclusions =================================================== */
#include "EcuM_Internal.h"

/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */

/* ========================================== internal function declarations ======================================== */

/* ============================================ internal data definitions =========================================== */
#define ECUM_START_SEC_CONFIG_DATA_16
#include "EcuM_MemMap.h"
/* PRQA S 1531 ++ */ /* VL_QAC_OneRefSymbol */
const ResourceType EcuM_OSResource = RES_SCHEDULER_CORE0;
/* PRQA S 1531 -- */
#define ECUM_STOP_SEC_CONFIG_DATA_16
#include "EcuM_MemMap.h"


#define ECUM_START_SEC_CONFIG_DATA_8
#include "EcuM_MemMap.h"
/* PRQA S 1533 ++ */ /* VL_QAC_OneRefSymbol */
const Mcu_ModeType EcuM_NormalMcuModeCfg = McuConf_McuModeSettingConf_McuModeSettingConf_0; /* EcuMNormalMcuModeRef*/
/* PRQA S 1533 -- */
#define ECUM_STOP_SEC_CONFIG_DATA_8
#include "EcuM_MemMap.h"

#define ECUM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "EcuM_MemMap.h"
/*Containers:EcuMFlexUserConfig*/
const EcuM_UserCfgType EcuM_UserCfgs[ECUM_MAX_USER_NUM] = {
    /*EcuMFlexUserConfig_0*/
    {
        FALSE, /*goDownAllowed*/
        0u,     /*usrId*/
    },
};

#define ECUM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "EcuM_MemMap.h"

