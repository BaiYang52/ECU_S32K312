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
 * @file        : PduR_PBcfg.c
 * @licence     : 
 * @date        : 2026-09-05 09:46:59
 * @customer    : iSoft
 * @description : Configuration parameter of PduR
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/
/* PRQA S 6520 EOF */ /* VL_MTR_PduR_STVAR */
/* =================================================== inclusions =================================================== */
#include "PduR.h"
#include "CanIf.h"
#include "Com_Cbk.h"
/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */

/* ============================================ internal data definition ============================================ */
/* PRQA S 3120,3132 ++ */ /* VL_QAC_MagicNum */




#define PDUR_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "PduR_MemMap.h"

static const PduR_DestPduType PduR_DestPduConfigData[PDUR_DEST_PDU_SUM] =
{
    {
        /* 0 PduRDestPdu_0x110_Tx */
        PDUR_CANIF,    /* BswModuleIndex */
        TRUE,  /* TransmissionConfirmation */
        PduRConf_PduRSrcPdu_PduRSrcPdu_0x110_Tx,    /* PduRSrcPduRef */
        CanIfConf_CanIfTxPduCfg_CanIfTxPduCfg__0x110,  /* PduRDestModulePduIndex */
        8u,    /* ConfiguredLength */
        PDUR_ROUTE_IF_TX_NOBUFFERED,    /* RouteType */
        PDUR_DIRECT,  /* PduRDestPduDataProvision */
    },
    {
        /* 1 PduRDestPdu_0x12a_Rx */
        PDUR_COM,    /* BswModuleIndex */
        TRUE,  /* TransmissionConfirmation */
        PduRConf_PduRSrcPdu_PduRSrcPdu_0x12a_Rx,    /* PduRSrcPduRef */
        ComConf_ComIPdu_ComIPdu_0x12a,  /* PduRDestModulePduIndex */
        8u,    /* ConfiguredLength */
        PDUR_ROUTE_IF_RX_NOBUFFERED,    /* RouteType */
        PDUR_DIRECT,  /* PduRDestPduDataProvision */
    },
};

#define PDUR_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "PduR_MemMap.h"

#define PDUR_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "PduR_MemMap.h"

static const PduR_SrcPduType PduR_SrcPduConfigData[PDUR_SRC_PDU_SUM] =
{
    {
        /* 0 PduRSrcPdu_0x110_Tx */
        TRUE, /* PduRSrcPduUpTxConf */
        PDUR_COM,    /* BswModuleIndex */
        ComConf_ComIPdu_ComIPdu_0x110,    /* PduRSrcModulePduIndex */
    },
    {
        /* 1 PduRSrcPdu_0x12a_Rx */
        TRUE, /* PduRSrcPduUpTxConf */
        PDUR_CANIF,    /* BswModuleIndex */
        CanIfConf_CanIfRxPduCfg_CanIfRxPduCfg__0x12a,    /* PduRSrcModulePduIndex */
    },
};

#define PDUR_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "PduR_MemMap.h"

#define PDUR_START_SEC_CONFIG_DATA_16
#include "PduR_MemMap.h"

static const PduIdType PduR_PduRDestPduIdRef[] =
{
    PduRConf_PduRDestPdu_PduRDestPdu_0x110_Tx,    /* 0 PduRSrcPdu_0x110_Tx */
    PduRConf_PduRDestPdu_PduRDestPdu_0x12a_Rx,    /* 1 PduRSrcPdu_0x12a_Rx */
};

#define PDUR_STOP_SEC_CONFIG_DATA_16
#include "PduR_MemMap.h"


#define PDUR_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "PduR_MemMap.h"

static const PduR_RoutingPathType PduR_RoutingPathConfigData0[PDUR_SRC_PDU_SUM] =
{
    {
        /* 0 PduRSrcPdu_0x110_Tx */
        1u,    /* PduDestSum */
        FALSE,  /* TpRoute */
        &PduR_PduRDestPduIdRef[0u],    /* PduRDestPduIdRef */
    },
    {
        /* 1 PduRSrcPdu_0x12a_Rx */
        1u,    /* PduDestSum */
        FALSE,  /* TpRoute */
        &PduR_PduRDestPduIdRef[1u],    /* PduRDestPduIdRef */
    },
};
static const PduR_RoutingTableType PduR_RoutingTableConfigData[1u] =
{
   {
      PduR_RoutingPathConfigData0
   }
};

#define PDUR_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "PduR_MemMap.h"


/* ============================================ external data definition ============================================ */
#define PDUR_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "PduR_MemMap.h"

const struct PduR_PBConfigTypeTag PduR_Config = /* PRQA S 1531 */ /* VL_QAC_OneRefSymbol */
{
    0u, /* PduRConfigId */
    PDUR_ROUTING_PATH_GROUP_SUM,    /* RoutingPathGroupCnt */
    PDUR_SRC_PDU_SUM,   /* PduRSrcPduNum */
    PDUR_DEST_PDU_SUM,  /* PduRRoutingPathNum */
    PduR_RoutingTableConfigData,    /* PduRRoutingTableRef */
    PduR_SrcPduConfigData,  /* PduRSrcPduRef */
    PduR_DestPduConfigData, /* PduRDestPduRef */
};

#define PDUR_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "PduR_MemMap.h"
/* PRQA S 3120,3132 -- */ /* VL_QAC_MagicNum */
/* ========================================= internal function declarations ========================================= */

/* ========================================== external function definition ========================================== */

/* ========================================== internal function definition ========================================== */
