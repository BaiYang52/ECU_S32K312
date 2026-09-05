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
 * @file        : EcuM_PBcfg.c
 * @licence     : 
 * @date        : 2026-09-05 09:46:59
 * @customer    : iSoft
 * @description : Post-Build Configuration parameter of EcuM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/

/* =================================================== inclusions =================================================== */

#include "EcuM_PBcfg.h"
#include "Rte_Main.h"
#include "Can.h"
#include "CanIf.h"

/* ===================================================== macros ===================================================== */
/* PRQA S 3414 ++ */ /* VL_QAC_FctLikeMacro */
#if !defined (ECUM_LOCAL)
#define ECUM_LOCAL static
#endif
/* PRQA S 3414 -- */


/** Number of wakeup sources */
#define ECUM_WAKE_UP_SOURCE_NUM 1u

/** Number of channels for wakeup source EcuMWakeupSource */
#define ECUM_WAKEUP_SOURES_0REF_COMM_CH_NUM 1u

 
 /* ================================================ type definitions ================================================ */

/* ========================================== internal function declarations ======================================== */

/* ============================================ internal data definitions =========================================== */


#define ECUM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "EcuM_MemMap.h"
ECUM_LOCAL const NetworkHandleType EcuM_WkSource0RefComMCh[ECUM_WAKEUP_SOURES_0REF_COMM_CH_NUM] = {
    ComMConf_ComMChannel_ComMChannel_0,
};
#define ECUM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "EcuM_MemMap.h"

 
 
#define ECUM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "EcuM_MemMap.h"
/*Containers:EcuMWakeupSource*/
/* PRQA S 3408 ++ */ /* VL_EcuM_3408 */
ECUM_LOCAL const EcuM_WakeupSourceCfgType EcuM_WkSourceCfgs[ECUM_WAKE_UP_SOURCE_NUM] = 
/* PRQA S 3408 -- */
{
    /*EcuMWakeupSource*/
    {
        0u, /*checkWkupTimeout*/
        0u, /*validationTimeout*/
        EcuMWakeupSource, /*wkSource*/
        FALSE,/*isPolling*/
        1u,/*comMChnlNum*/
        &(EcuM_WkSource0RefComMCh[0]),/*comMChnl*/
        0u,/*resetResasonNum*/
        NULL_PTR,/*resetResasonPtr*/
    },
};
#define ECUM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "EcuM_MemMap.h"


 
#define ECUM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "EcuM_MemMap.h"
ECUM_LOCAL const EcuM_GenBSWPbCfgType EcuM_GenMcalConfig = {
    /* PRQA S 0314 ++ */ /* VL_EcuM_0314 */
    NULL_PTR, /*bswmPbCfg*/
    NULL_PTR, /*schmPbCfg*/
    /* PRQA S 0314 -- */
};
#define ECUM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "EcuM_MemMap.h"

 /* ============================================ external data definitions =========================================== */

#define ECUM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "EcuM_MemMap.h"
/* PRQA S 1502 ++ */ /* VL_EcuM_1502 */
const EcuM_PBConfigType EcuM_Config = 
/* PRQA S 1502 -- */
{
    1234u,/*EcuMConfigConsistencyHash*/
    FALSE,/*EcuMIgnoreWakeupEvValOffPreOS*/
    0u,/*EcuMDefaultAppMode*/
    ECUM_SHUTDOWN_TARGET_OFF, /** EcuMDefaultShutdownTargetOff */
    0u, /*EcuMPbcfgDefaultRefIndex*/
    1u, /*EcuMWakeupSourcesNum*/
    &EcuM_WkSourceCfgs[0u], /*EcuMWakeupSources*/
    EcuMWakeupSource, /* EcuMAllWakeupSource */
    &EcuM_GenMcalConfig,    /** EcuMGenBSWPbCfg*/
};
#define ECUM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "EcuM_MemMap.h"

 /* ========================================== external function definitions ========================================= */

/* ========================================== internal function definitions ========================================= */
/* PRQA S 6530 EOF */ /* VL_MTR_EcuM_STECT */
