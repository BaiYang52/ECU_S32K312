
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
 * @file        : BswM_Cfg.c
 * @licence     : 
 * @date        : 2026-09-05 20:35:45
 * @customer    : iSoft
 * @description : configuration parameter of BswM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/
/* =================================================== inclusions =================================================== */
#include "BswM_Lcfg.h"

/* ===================================================== macros ===================================================== */
/* BswMConfig*/
/* PRQA S 0380 ++ */ /* VL_BswM_0380 */




#define BSWM_EVENT_REQUEST_PORT_Core0_Par0_NUM 1u

#define BSWM_GENERIC_REQUEST_Core0_Par0_NUM 1u

/* PRQA S 0380 -- */
#define BSWM_START_SEC_CONST_UNSPECIFIED
#include "BswM_MemMap.h"
/* BswMComMInitiateReset */
BSWM_LOCAL const BswM_EventRqstPortIdxType BswM_EventRqstPort_ComMInitRstIdx_Core0_Par0 = 0u;
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
#include "BswM_MemMap.h"





#define BSWM_START_SEC_CONST_UNSPECIFIED
#include "BswM_MemMap.h"
BSWM_LOCAL const BswM_EvRqstPortPCCfgType BswM_EvRqstSrc_Core0_Par0 = {
    &BswM_EventRqstPort_ComMInitRstIdx_Core0_Par0,     /*comMInitRstIdxPtr*/
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
#include "BswM_MemMap.h"

#define BSWM_START_SEC_CONST_UNSPECIFIED
#include "BswM_MemMap.h"
BSWM_LOCAL const BswM_ModeRqstPortPCCfgType BswM_ModeRqstSrc_Core0_Par0 = {
    1u,                                    /*numOfGenericReq*/
    NULL_PTR, /*genRqstInitMode*/
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
#include "BswM_MemMap.h"

#define BSWM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "BswM_MemMap.h"
BSWM_LOCAL BswM_EventRquestPortRuntimeType BswM_EvRqstSrcStatus_Core0_Par0[BSWM_EVENT_REQUEST_PORT_Core0_Par0_NUM];
#define BSWM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "BswM_MemMap.h"

#define BSWM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "BswM_MemMap.h"
BSWM_LOCAL uint16 BswM_GenericRequestStatus_Core0_Par0[BSWM_GENERIC_REQUEST_Core0_Par0_NUM];
#define BSWM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "BswM_MemMap.h"

#define BSWM_START_SEC_VAR_INIT_UNSPECIFIED
#include "BswM_MemMap.h"
BSWM_LOCAL BswM_ModeRqstPortRuntimeType BswM_ModeRqstSrcSatus_Core0_Par0 = {
    &(BswM_GenericRequestStatus_Core0_Par0[0u]),                   /*BswMGenericRequest*/
};
#define BSWM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "BswM_MemMap.h"

/* ============================================ external data definitions =========================================== */

#define BSWM_START_SEC_CONST_UNSPECIFIED
#include "BswM_MemMap.h"
const BswM_PartitionPCCfgType BswM_PartitionPCCfg_Core0_Par0 = {
    1u,                         /*evRqstSrcNum*/
    &BswM_EvRqstSrc_Core0_Par0,             /*evRqstPCCfg*/
    &BswM_ModeRqstSrc_Core0_Par0,           /*modeRqstPCCfg*/
    &(BswM_EvRqstSrcStatus_Core0_Par0[0u]), /*eventRqstPortRunPtr*/
    &BswM_ModeRqstSrcSatus_Core0_Par0,      /*modeRqstPortRunPtr*/
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
#include "BswM_MemMap.h"
    
#define BSWM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "BswM_MemMap.h"
/*runtime status information of BSWM partition on this local core. If it is
 * mulit-core ECU, every CORE running BSW will have a core-specific status*/
BSWM_LOCAL BswM_RuntimeStatusType BswM_EcuRuntimeStatus[BSWM_MAX_NUM_CORE];
#define BSWM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "BswM_MemMap.h"

#define BSWM_START_SEC_CONST_UNSPECIFIED
#include "BswM_MemMap.h"
/* PRQA S 1533 ++ */ /* VL_QAC_OneRefSymbol */
const BswM_PCCfgType BswM_CorePCCfg_Core0 = 
/* PRQA S 1533 -- */
{
    /* partitionNum    RuntimePtr   */
     1u,            &BswM_EcuRuntimeStatus[0u],   /* BswMConfigName ... */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
#include "BswM_MemMap.h"

