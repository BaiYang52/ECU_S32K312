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
 * @file        : CanIf_PBcfg.c
 * @licence     : 
 * @date        : 2026-09-20 23:21:30
 * @customer    : iSoft
 * @description : Configuration data for CanIf
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/

/* PRQA S 1531, 1533 EOF */ /* VL_QAC_OneRefSymbol */
/* PRQA S 1532 EOF */ /* VL_QAC_OneFunRef */
/* PRQA S 3132 EOF */ /* VL_QAC_MagicNum */
/* PRQA S 1502 EOF */ /* VL_CanIf_1502 */
/* PRQA S 2905 EOF */ /* VL_CanIf_2905 */
/* =================================================== inclusions =================================================== */
#include "CanIf_Cfg.h"
#include "CanIf_PBcfg.h"
#include "CanIf_Types.h"
#include "CanIf_CfgTypes.h"
#include "CanIf.h"
#include "CanSM_CanIf.h"
#include "PduR_PBcfg.h"
#include "PduR_CanIf.h"
#include "CanGeneral.h"

/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */

/* ========================================== internal function declarations ======================================== */

/* ============================================ internal data definitions =========================================== */
#define CANIF_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanIf_MemMap.h"
static CanIf_RuntimeType CanIf_Runtime_Partition0;
#define CANIF_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanIf_MemMap.h"


#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
CanIf_RuntimeType* const CanIf_Runtime
[CANIF_PARTITION_NUMBER] = {
    &CanIf_Runtime_Partition0,
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanIf_MemMap.h"
static CanIf_DynamicTxPduType CanIf_DynamicTxPdu_Partition0
[CANIF_DYNAMICTXPDU_NUMBER_PARTITION0];
#define CANIF_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanIf_MemMap.h"


#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
const CanIf_DynamicTxPduPartitionType CanIf_DynamicTxPdu
[CANIF_PARTITION_NUMBER] = {
    {
        .DynamicTxPduNumber = CANIF_DYNAMICTXPDU_NUMBER_PARTITION0,
        .DynamicTxPduRef = CanIf_DynamicTxPdu_Partition0,
    },
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"


#define CANIF_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanIf_MemMap.h"
static CanIf_UpConfirmTxPduType CanIf_UpConfirmTxPdu_Partition0
[CANIF_UPCONFIRMTXPDU_NUMBER_PARTITION0];
#define CANIF_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanIf_MemMap.h"


#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
const CanIf_UpConfirmTxPduPartitionType CanIf_UpConfirmTxPdu
[CANIF_PARTITION_NUMBER] = {
    {
        .UpConfirmTxPduNumber = CANIF_UPCONFIRMTXPDU_NUMBER_PARTITION0,
        .UpConfirmTxPduRef = CanIf_UpConfirmTxPdu_Partition0,
    },
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_VAR_CLEARED_8
#include "CanIf_MemMap.h"
static uint8 CanIf_TxByteBuffer_Partition0
[CANIF_TXBYTEBUFFER_NUMBER_PARTITION0];
#define CANIF_STOP_SEC_VAR_CLEARED_8
#include "CanIf_MemMap.h"


#define CANIF_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanIf_MemMap.h"
static CanIf_TxPduBufferType CanIf_TxPduBuffer_Partition0
[CANIF_TXPDUBUFFER_NUMBER_PARTITION0];
#define CANIF_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanIf_MemMap.h"


#define CANIF_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanIf_MemMap.h"
static CanIf_TxBufferType CanIf_TxBuffer_Partition0
[CANIF_TXBUFFER_NUMBER_PARTITION0];
#define CANIF_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanIf_MemMap.h"


#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
const CanIf_TxBufferPartitionType CanIf_TxBuffer
[CANIF_PARTITION_NUMBER] = {
    {
        .TxByteBufferNumber = CANIF_TXBYTEBUFFER_NUMBER_PARTITION0,
        .TxPduBufferNumber = CANIF_TXPDUBUFFER_NUMBER_PARTITION0,
        .TxBufferNumber = CANIF_TXBUFFER_NUMBER_PARTITION0,
        .TxByteBufferRef = CanIf_TxByteBuffer_Partition0,
        .TxPduBufferRef = CanIf_TxPduBuffer_Partition0,
        .TxBufferRef = CanIf_TxBuffer_Partition0,
    },
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"




#define CANIF_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanIf_MemMap.h"
static CanIf_CtrlRuntimeType CanIf_CtrlRuntime_Partition0
[CANIF_CTRLRUNTIME_NUMBER_PARTITION0];
#define CANIF_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanIf_MemMap.h"


#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
CanIf_CtrlRuntimeType* const CanIf_CtrlRuntime
[CANIF_PARTITION_NUMBER] = {
    CanIf_CtrlRuntime_Partition0,
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"

/* ============================================ external data definitions =========================================== */
#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
const CanIfTxPduUserTxConfirmationNameApiType CanIf_UpTxConfirmationArray
[CANIF_UPTXCONFIRMATION_API_NUMBER] = {
    &PduR_CanIfTxConfirmation,
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"



#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
const CanIfRxPduUserRxIndicationNameApiType CanIf_UpRxIndicationArray
[CANIF_UPRXINDICATION_API_NUMBER] = {
    &PduR_CanIfRxIndication,
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"





#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
static const CanIf_HthConfigType CanIf_HthConfigData
[CANIF_HTH_NUMBER] = {
    {
        /* CanIfConf_CanIfHthCfg_CanIfHthCfg_CAN0_BASIC */
        .CanIfHthCanCtrlId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_0,
        .CanIfHthType = CANIF_BASIC_CAN,
        .CanObjectId = 3u,
    },
    {
        /* CanIfConf_CanIfHthCfg_CanIfHthCfg_CAN1_BASIC */
        .CanIfHthCanCtrlId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_1,
        .CanIfHthType = CANIF_BASIC_CAN,
        .CanObjectId = 4u,
    },
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
static const CanIf_HrhConfigType CanIf_HrhConfigData
[CANIF_HRH_NUMBER] = {
    {
        /* CanIfConf_CanIfHrhCfg_CanIfHrhCfg_CAN0_BASIC */
        .CanIfHrhCanCtrlId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_0,
        .CanIfHrhType = CANIF_BASIC_CAN,
        .CanObjectId = 0u,
        .RxPduIndexMaxExcluded = CanIfConf_CanIfRxPduCfg_RX_PDU_CAN0_Rx_0x250_Cyclic_PN17_CONTROLLER_0_S32K312 + 1u,
        .RxPduIndexMin = CanIfConf_CanIfRxPduCfg_CanIfRxPduCfg_CAN0_0x114_SignalRouting,
    },
    {
        /* CanIfConf_CanIfHrhCfg_CanIfHrhCfg_CAN0_FULL_0x119 */
        .CanIfHrhCanCtrlId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_0,
        .CanIfHrhType = CANIF_FULL_CAN,
        .CanObjectId = 1u,
        .RxPduIndexMaxExcluded = CanIfConf_CanIfRxPduCfg_CanIfRxPduCfg_CAN0_0x119_Routing + 1u,
        .RxPduIndexMin = CanIfConf_CanIfRxPduCfg_CanIfRxPduCfg_CAN0_0x119_Routing,
    },
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
static const CanIf_TxPduConfigType CanIf_TxPduConfigData
[CANIF_TXPDU_NUMBER] = {
    {
        /* CanIfConf_CanIfTxPduCfg_CanIfTxPduCfg_CAN0_0x110 */
        .CanIfTxPduCanId = 0x00000110u,
        .CanIfTxPduCanIdMask = 0x000007FFu,
        .CanIfTxPduCanIdType = CANIF_TX_STANDARD_CAN,
        .CanIfTxPduDlc = 8u,
        .CanIfTxPduHthId = CanIfConf_CanIfHthCfg_CanIfHthCfg_CAN0_BASIC,
        .CanIfTxPduTruncation = TRUE,
        .CanIfUpPduId = PduRConf_PduRDestPdu_PduRDestPdu_0x110_Tx,
        .DynamicTxPduPtr = NULL_PTR,
        .TxBufferIndex = 0u,
        .TxMetaDataEnable = FALSE,
        .UpConfirmTxPduMask = ((uint8)1u << (0u & 7u)),
        .UpConfirmTxPduPtr = &CanIf_UpConfirmTxPdu_Partition0[(0u >> 3u)],
        .UpTxConfirmationApiIndex = 0u,
    },
    {
        /* CanIfConf_CanIfTxPduCfg_TX_PDU_CAN0_Tx_0x300_Cyclic_CONTROLLER_0_S32K312 */
        .CanIfTxPduCanId = 0x00000300u,
        .CanIfTxPduCanIdMask = 0x000007FFu,
        .CanIfTxPduCanIdType = CANIF_TX_STANDARD_CAN,
        .CanIfTxPduDlc = 8u,
        .CanIfTxPduHthId = CanIfConf_CanIfHthCfg_CanIfHthCfg_CAN0_BASIC,
        .CanIfTxPduTruncation = TRUE,
        .CanIfUpPduId = PduRConf_PduRDestPdu_PduRDestPdu_CAN0_Tx_0x300_Cyclic_CONTROLLER_0_S32K312_Tx,
        .DynamicTxPduPtr = &CanIf_DynamicTxPdu_Partition0[0u],
        .TxBufferIndex = 0u,
        .TxMetaDataEnable = FALSE,
        .UpConfirmTxPduMask = ((uint8)1u << (1u & 7u)),
        .UpConfirmTxPduPtr = &CanIf_UpConfirmTxPdu_Partition0[(1u >> 3u)],
        .UpTxConfirmationApiIndex = 0u,
    },
    {
        /* CanIfConf_CanIfTxPduCfg_TX_PDU_CAN0_Tx_0x301_Event_CONTROLLER_0_S32K312 */
        .CanIfTxPduCanId = 0x00000301u,
        .CanIfTxPduCanIdMask = 0x000007FFu,
        .CanIfTxPduCanIdType = CANIF_TX_STANDARD_CAN,
        .CanIfTxPduDlc = 8u,
        .CanIfTxPduHthId = CanIfConf_CanIfHthCfg_CanIfHthCfg_CAN0_BASIC,
        .CanIfTxPduTruncation = TRUE,
        .CanIfUpPduId = PduRConf_PduRDestPdu_PduRDestPdu_CAN0_Tx_0x301_Event_CONTROLLER_0_S32K312_Tx,
        .DynamicTxPduPtr = &CanIf_DynamicTxPdu_Partition0[1u],
        .TxBufferIndex = 0u,
        .TxMetaDataEnable = FALSE,
        .UpConfirmTxPduMask = ((uint8)1u << (2u & 7u)),
        .UpConfirmTxPduPtr = &CanIf_UpConfirmTxPdu_Partition0[(2u >> 3u)],
        .UpTxConfirmationApiIndex = 0u,
    },
    {
        /* CanIfConf_CanIfTxPduCfg_TX_PDU_CAN0_Tx_0x302_Mixed_CONTROLLER_0_S32K312 */
        .CanIfTxPduCanId = 0x00000302u,
        .CanIfTxPduCanIdMask = 0x000007FFu,
        .CanIfTxPduCanIdType = CANIF_TX_STANDARD_CAN,
        .CanIfTxPduDlc = 8u,
        .CanIfTxPduHthId = CanIfConf_CanIfHthCfg_CanIfHthCfg_CAN0_BASIC,
        .CanIfTxPduTruncation = TRUE,
        .CanIfUpPduId = PduRConf_PduRDestPdu_PduRDestPdu_CAN0_Tx_0x302_Mixed_CONTROLLER_0_S32K312_Tx,
        .DynamicTxPduPtr = &CanIf_DynamicTxPdu_Partition0[2u],
        .TxBufferIndex = 0u,
        .TxMetaDataEnable = FALSE,
        .UpConfirmTxPduMask = ((uint8)1u << (3u & 7u)),
        .UpConfirmTxPduPtr = &CanIf_UpConfirmTxPdu_Partition0[(3u >> 3u)],
        .UpTxConfirmationApiIndex = 0u,
    },
    {
        /* CanIfConf_CanIfTxPduCfg_TX_PDU_CAN0_Tx_0x303_Cyclic_Counter_CONTROLLER_0_S32K312 */
        .CanIfTxPduCanId = 0x00000303u,
        .CanIfTxPduCanIdMask = 0x000007FFu,
        .CanIfTxPduCanIdType = CANIF_TX_STANDARD_CAN,
        .CanIfTxPduDlc = 8u,
        .CanIfTxPduHthId = CanIfConf_CanIfHthCfg_CanIfHthCfg_CAN0_BASIC,
        .CanIfTxPduTruncation = TRUE,
        .CanIfUpPduId = PduRConf_PduRDestPdu_PduRDestPdu_CAN0_Tx_0x303_Cyclic_Counter_CONTROLLER_0_S32K312_Tx,
        .DynamicTxPduPtr = &CanIf_DynamicTxPdu_Partition0[3u],
        .TxBufferIndex = 0u,
        .TxMetaDataEnable = FALSE,
        .UpConfirmTxPduMask = ((uint8)1u << (4u & 7u)),
        .UpConfirmTxPduPtr = &CanIf_UpConfirmTxPdu_Partition0[(4u >> 3u)],
        .UpTxConfirmationApiIndex = 0u,
    },
    {
        /* CanIfConf_CanIfTxPduCfg_TX_PDU_CAN0_Tx_0x350_Cyclic_PN17_CONTROLLER_0_S32K312 */
        .CanIfTxPduCanId = 0x00000350u,
        .CanIfTxPduCanIdMask = 0x000007FFu,
        .CanIfTxPduCanIdType = CANIF_TX_STANDARD_CAN,
        .CanIfTxPduDlc = 8u,
        .CanIfTxPduHthId = CanIfConf_CanIfHthCfg_CanIfHthCfg_CAN0_BASIC,
        .CanIfTxPduTruncation = TRUE,
        .CanIfUpPduId = PduRConf_PduRDestPdu_PduRDestPdu_CAN0_Tx_0x350_Cyclic_PN17_CONTROLLER_0_S32K312_Tx,
        .DynamicTxPduPtr = &CanIf_DynamicTxPdu_Partition0[4u],
        .TxBufferIndex = 0u,
        .TxMetaDataEnable = FALSE,
        .UpConfirmTxPduMask = ((uint8)1u << (5u & 7u)),
        .UpConfirmTxPduPtr = &CanIf_UpConfirmTxPdu_Partition0[(5u >> 3u)],
        .UpTxConfirmationApiIndex = 0u,
    },
    {
        /* CanIfConf_CanIfTxPduCfg_TX_PDU_CAN0_Tx_0x351_Cyclic_PN29_CONTROLLER_0_S32K312 */
        .CanIfTxPduCanId = 0x00000351u,
        .CanIfTxPduCanIdMask = 0x000007FFu,
        .CanIfTxPduCanIdType = CANIF_TX_STANDARD_CAN,
        .CanIfTxPduDlc = 8u,
        .CanIfTxPduHthId = CanIfConf_CanIfHthCfg_CanIfHthCfg_CAN0_BASIC,
        .CanIfTxPduTruncation = TRUE,
        .CanIfUpPduId = PduRConf_PduRDestPdu_PduRDestPdu_CAN0_Tx_0x351_Cyclic_PN29_CONTROLLER_0_S32K312_Tx,
        .DynamicTxPduPtr = &CanIf_DynamicTxPdu_Partition0[5u],
        .TxBufferIndex = 0u,
        .TxMetaDataEnable = FALSE,
        .UpConfirmTxPduMask = ((uint8)1u << (6u & 7u)),
        .UpConfirmTxPduPtr = &CanIf_UpConfirmTxPdu_Partition0[(6u >> 3u)],
        .UpTxConfirmationApiIndex = 0u,
    },
    {
        /* CanIfConf_CanIfTxPduCfg_TX_PDU_CAN0_Tx_0x360_E2E_P01_CONTROLLER_0_S32K312 */
        .CanIfTxPduCanId = 0x00000360u,
        .CanIfTxPduCanIdMask = 0x000007FFu,
        .CanIfTxPduCanIdType = CANIF_TX_STANDARD_CAN,
        .CanIfTxPduDlc = 8u,
        .CanIfTxPduHthId = CanIfConf_CanIfHthCfg_CanIfHthCfg_CAN0_BASIC,
        .CanIfTxPduTruncation = TRUE,
        .CanIfUpPduId = PduRConf_PduRDestPdu_PduRDestPdu_CAN0_Tx_0x360_E2E_P01_CONTROLLER_0_S32K312_Tx,
        .DynamicTxPduPtr = &CanIf_DynamicTxPdu_Partition0[6u],
        .TxBufferIndex = 0u,
        .TxMetaDataEnable = FALSE,
        .UpConfirmTxPduMask = ((uint8)1u << (7u & 7u)),
        .UpConfirmTxPduPtr = &CanIf_UpConfirmTxPdu_Partition0[(7u >> 3u)],
        .UpTxConfirmationApiIndex = 0u,
    },
    {
        /* CanIfConf_CanIfTxPduCfg_CanIfTxPduCfg_CAN1_0x119_Routing */
        .CanIfTxPduCanId = 0x00000119u,
        .CanIfTxPduCanIdMask = 0x000007FFu,
        .CanIfTxPduCanIdType = CANIF_TX_STANDARD_CAN,
        .CanIfTxPduDlc = 8u,
        .CanIfTxPduHthId = CanIfConf_CanIfHthCfg_CanIfHthCfg_CAN1_BASIC,
        .CanIfTxPduTruncation = TRUE,
        .CanIfUpPduId = PduRConf_PduRDestPdu_PduRDestPdu_0x119_Routing_Tx,
        .DynamicTxPduPtr = NULL_PTR,
        .TxBufferIndex = 1u,
        .TxMetaDataEnable = FALSE,
        .UpConfirmTxPduMask = ((uint8)1u << (8u & 7u)),
        .UpConfirmTxPduPtr = &CanIf_UpConfirmTxPdu_Partition0[(8u >> 3u)],
        .UpTxConfirmationApiIndex = 0u,
    },
    {
        /* CanIfConf_CanIfTxPduCfg_CanIfTxPduCfg_CAN1_0x114_SignalRouting */
        .CanIfTxPduCanId = 0x00000114u,
        .CanIfTxPduCanIdMask = 0x000007FFu,
        .CanIfTxPduCanIdType = CANIF_TX_STANDARD_CAN,
        .CanIfTxPduDlc = 4u,
        .CanIfTxPduHthId = CanIfConf_CanIfHthCfg_CanIfHthCfg_CAN1_BASIC,
        .CanIfTxPduTruncation = TRUE,
        .CanIfUpPduId = PduRConf_PduRDestPdu_PduRDestPdu_0x114_SignalRouting_Tx,
        .DynamicTxPduPtr = NULL_PTR,
        .TxBufferIndex = 1u,
        .TxMetaDataEnable = FALSE,
        .UpConfirmTxPduMask = ((uint8)1u << (9u & 7u)),
        .UpConfirmTxPduPtr = &CanIf_UpConfirmTxPdu_Partition0[(9u >> 3u)],
        .UpTxConfirmationApiIndex = 0u,
    },
    {
        /* CanIfConf_CanIfTxPduCfg_CanIfTxPduCfg_CAN1_0x115_SignalRouting */
        .CanIfTxPduCanId = 0x00000115u,
        .CanIfTxPduCanIdMask = 0x000007FFu,
        .CanIfTxPduCanIdType = CANIF_TX_STANDARD_CAN,
        .CanIfTxPduDlc = 4u,
        .CanIfTxPduHthId = CanIfConf_CanIfHthCfg_CanIfHthCfg_CAN1_BASIC,
        .CanIfTxPduTruncation = TRUE,
        .CanIfUpPduId = PduRConf_PduRDestPdu_PduRDestPdu_0x115_SignalRouting_Tx,
        .DynamicTxPduPtr = NULL_PTR,
        .TxBufferIndex = 1u,
        .TxMetaDataEnable = FALSE,
        .UpConfirmTxPduMask = ((uint8)1u << (10u & 7u)),
        .UpConfirmTxPduPtr = &CanIf_UpConfirmTxPdu_Partition0[(10u >> 3u)],
        .UpTxConfirmationApiIndex = 0u,
    },
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
static const CanIf_RxPduConfigType CanIf_RxPduConfigData
[CANIF_RXPDU_NUMBER] = {
    {
        /* CanIfConf_CanIfRxPduCfg_CanIfRxPduCfg_CAN0_0x114_SignalRouting */
        .CanIfRxPduCanIdMask = 0x000007FFu,
        .CanIfRxPduCanIdMasked = (0x00000114u & 0x000007FFu),
        .CanIfRxPduCanIdType = CANIF_RX_STANDARD_CAN,
        .CanIfRxPduDlc = 8u,
        .CanIfRxPduForNM = FALSE,
        .CanIfRxPduHrhId = CanIfConf_CanIfHrhCfg_CanIfHrhCfg_CAN0_BASIC,
        .CanIfUpPduId = PduRConf_PduRSrcPdu_PduRSrcPdu_0x114_SignalRouting_Rx,
        .RxMetaDataEnable = FALSE,
        .UpRxIndicationApiIndex = 0u,
    },
    {
        /* CanIfConf_CanIfRxPduCfg_CanIfRxPduCfg_CAN0_0x12a */
        .CanIfRxPduCanIdMask = 0x000007FFu,
        .CanIfRxPduCanIdMasked = (0x0000012Au & 0x000007FFu),
        .CanIfRxPduCanIdType = CANIF_RX_STANDARD_CAN,
        .CanIfRxPduDlc = 8u,
        .CanIfRxPduForNM = FALSE,
        .CanIfRxPduHrhId = CanIfConf_CanIfHrhCfg_CanIfHrhCfg_CAN0_BASIC,
        .CanIfUpPduId = PduRConf_PduRSrcPdu_PduRSrcPdu_0x12a_Rx,
        .RxMetaDataEnable = FALSE,
        .UpRxIndicationApiIndex = 0u,
    },
    {
        /* CanIfConf_CanIfRxPduCfg_RX_PDU_CAN0_Rx_0x200_Cyclic_CONTROLLER_0_S32K312 */
        .CanIfRxPduCanIdMask = 0x000007FFu,
        .CanIfRxPduCanIdMasked = (0x00000200u & 0x000007FFu),
        .CanIfRxPduCanIdType = CANIF_RX_STANDARD_NO_FD_CAN,
        .CanIfRxPduDlc = 8u,
        .CanIfRxPduForNM = FALSE,
        .CanIfRxPduHrhId = CanIfConf_CanIfHrhCfg_CanIfHrhCfg_CAN0_BASIC,
        .CanIfUpPduId = PduRConf_PduRSrcPdu_PduRSrcPdu_CAN0_Rx_0x200_Cyclic_CONTROLLER_0_S32K312_Rx,
        .RxMetaDataEnable = FALSE,
        .UpRxIndicationApiIndex = 0u,
    },
    {
        /* CanIfConf_CanIfRxPduCfg_RX_PDU_CAN0_Rx_0x201_Event_CONTROLLER_0_S32K312 */
        .CanIfRxPduCanIdMask = 0x000007FFu,
        .CanIfRxPduCanIdMasked = (0x00000201u & 0x000007FFu),
        .CanIfRxPduCanIdType = CANIF_RX_STANDARD_NO_FD_CAN,
        .CanIfRxPduDlc = 8u,
        .CanIfRxPduForNM = FALSE,
        .CanIfRxPduHrhId = CanIfConf_CanIfHrhCfg_CanIfHrhCfg_CAN0_BASIC,
        .CanIfUpPduId = PduRConf_PduRSrcPdu_PduRSrcPdu_CAN0_Rx_0x201_Event_CONTROLLER_0_S32K312_Rx,
        .RxMetaDataEnable = FALSE,
        .UpRxIndicationApiIndex = 0u,
    },
    {
        /* CanIfConf_CanIfRxPduCfg_RX_PDU_CAN0_Rx_0x202_Mixed_CONTROLLER_0_S32K312 */
        .CanIfRxPduCanIdMask = 0x000007FFu,
        .CanIfRxPduCanIdMasked = (0x00000202u & 0x000007FFu),
        .CanIfRxPduCanIdType = CANIF_RX_STANDARD_NO_FD_CAN,
        .CanIfRxPduDlc = 8u,
        .CanIfRxPduForNM = FALSE,
        .CanIfRxPduHrhId = CanIfConf_CanIfHrhCfg_CanIfHrhCfg_CAN0_BASIC,
        .CanIfUpPduId = PduRConf_PduRSrcPdu_PduRSrcPdu_CAN0_Rx_0x202_Mixed_CONTROLLER_0_S32K312_Rx,
        .RxMetaDataEnable = FALSE,
        .UpRxIndicationApiIndex = 0u,
    },
    {
        /* CanIfConf_CanIfRxPduCfg_RX_PDU_CAN0_Rx_0x203_Cyclic_Counter_CONTROLLER_0_S32K312 */
        .CanIfRxPduCanIdMask = 0x000007FFu,
        .CanIfRxPduCanIdMasked = (0x00000203u & 0x000007FFu),
        .CanIfRxPduCanIdType = CANIF_RX_STANDARD_NO_FD_CAN,
        .CanIfRxPduDlc = 8u,
        .CanIfRxPduForNM = FALSE,
        .CanIfRxPduHrhId = CanIfConf_CanIfHrhCfg_CanIfHrhCfg_CAN0_BASIC,
        .CanIfUpPduId = PduRConf_PduRSrcPdu_PduRSrcPdu_CAN0_Rx_0x203_Cyclic_Counter_CONTROLLER_0_S32K312_Rx,
        .RxMetaDataEnable = FALSE,
        .UpRxIndicationApiIndex = 0u,
    },
    {
        /* CanIfConf_CanIfRxPduCfg_RX_PDU_CAN0_Rx_0x250_Cyclic_PN17_CONTROLLER_0_S32K312 */
        .CanIfRxPduCanIdMask = 0x000007FFu,
        .CanIfRxPduCanIdMasked = (0x00000250u & 0x000007FFu),
        .CanIfRxPduCanIdType = CANIF_RX_STANDARD_NO_FD_CAN,
        .CanIfRxPduDlc = 8u,
        .CanIfRxPduForNM = FALSE,
        .CanIfRxPduHrhId = CanIfConf_CanIfHrhCfg_CanIfHrhCfg_CAN0_BASIC,
        .CanIfUpPduId = PduRConf_PduRSrcPdu_PduRSrcPdu_CAN0_Rx_0x250_Cyclic_PN17_CONTROLLER_0_S32K312_Rx,
        .RxMetaDataEnable = FALSE,
        .UpRxIndicationApiIndex = 0u,
    },
    {
        /* CanIfConf_CanIfRxPduCfg_CanIfRxPduCfg_CAN0_0x119_Routing */
        .CanIfRxPduCanIdMask = 0x000007FFu,
        .CanIfRxPduCanIdMasked = (0x00000119u & 0x000007FFu),
        .CanIfRxPduCanIdType = CANIF_RX_STANDARD_CAN,
        .CanIfRxPduDlc = 8u,
        .CanIfRxPduForNM = FALSE,
        .CanIfRxPduHrhId = CanIfConf_CanIfHrhCfg_CanIfHrhCfg_CAN0_FULL_0x119,
        .CanIfUpPduId = PduRConf_PduRSrcPdu_PduRSrcPdu_0x119_Routing_Rx,
        .RxMetaDataEnable = FALSE,
        .UpRxIndicationApiIndex = 0u,
    },
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
static const CanIf_BufferConfigType CanIf_TxBufferConfigData_Partition0
[CANIF_TXBUFFER_CONFIG_NUMBER_PARTITION0] = {
    {
        .BufferSize = 4u,
        .PduLength = 8u,
    },
    {
        .BufferSize = 4u,
        .PduLength = 8u,
    },
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
static const CanIf_BufferConfigPartitionType CanIf_TxBufferConfigData
[CANIF_PARTITION_NUMBER] = {
    {
        .BufferConfigNumber = CANIF_TXBUFFER_CONFIG_NUMBER_PARTITION0,
        .BufferConfigRef = CanIf_TxBufferConfigData_Partition0,
    },
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"



#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
static const CanIf_CtrlPbConfigType CanIf_CtrlPbConfigData
[CANIF_CANCONTROLLER_NUMBER] = {
    {
        /* CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_0 */
        .PartitionIndex = 0u,
        .RuntimePtr = &CanIf_CtrlRuntime_Partition0[0u],
        .RxPduIndexMaxExcluded = CanIfConf_CanIfRxPduCfg_CanIfRxPduCfg_CAN0_0x119_Routing + 1u,
        .RxPduIndexMin = CanIfConf_CanIfRxPduCfg_CanIfRxPduCfg_CAN0_0x114_SignalRouting,
        .TxPduIndexMaxExcluded = CanIfConf_CanIfTxPduCfg_TX_PDU_CAN0_Tx_0x360_E2E_P01_CONTROLLER_0_S32K312 + 1u,
        .TxPduIndexMin = CanIfConf_CanIfTxPduCfg_CanIfTxPduCfg_CAN0_0x110,
    },
    {
        /* CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_1 */
        .PartitionIndex = 0u,
        .RuntimePtr = &CanIf_CtrlRuntime_Partition0[1u],
        .RxPduIndexMaxExcluded = CANIF_PDUID_INVALID,
        .RxPduIndexMin = CANIF_PDUID_INVALID,
        .TxPduIndexMaxExcluded = CanIfConf_CanIfTxPduCfg_CanIfTxPduCfg_CAN1_0x115_SignalRouting + 1u,
        .TxPduIndexMin = CanIfConf_CanIfTxPduCfg_CanIfTxPduCfg_CAN1_0x119_Routing,
    },
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"


#if (STD_OFF == CANIF_RXINDICATION_AUTOSAR_PARAMETER)
#define CANIF_START_SEC_CONFIG_DATA_16
#include "CanIf_MemMap.h"
static const Can_HwHandleType CanIf_CanHoh2HrhId_0
[2u] = {
    CanIfConf_CanIfHrhCfg_CanIfHrhCfg_CAN0_BASIC,
    CanIfConf_CanIfHrhCfg_CanIfHrhCfg_CAN0_FULL_0x119,
};
#define CANIF_STOP_SEC_CONFIG_DATA_16
#include "CanIf_MemMap.h"

#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
static const CanIf_CanHoh2HrhType CanIf_CanHoh2Hrh
[1u] = {
    {
        .CanHrhIdNumber = 2u,
        .CanHrhIdRef = CanIf_CanHoh2HrhId_0,
    },
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
#endif


#define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"
const CanIf_ConfigType CanIf_Config = {
    .TxPduConfigNumber = CANIF_TXPDU_NUMBER,
    .TxPduConfigRef = CanIf_TxPduConfigData,
    .HthConfigNumber = CANIF_HTH_NUMBER,
    .HthConfigRef = CanIf_HthConfigData,
    .RxPduConfigNumber = CANIF_RXPDU_NUMBER,
    .RxPduConfigRef = CanIf_RxPduConfigData,
    .HrhConfigNumber = CANIF_HRH_NUMBER,
    .HrhConfigRef = CanIf_HrhConfigData,
    .TxBufferConfigRef = CanIf_TxBufferConfigData,
    .RxBufferConfigRef = NULL_PTR,
    .CtrlPbConfigRef = CanIf_CtrlPbConfigData,
#if (STD_OFF == CANIF_RXINDICATION_AUTOSAR_PARAMETER)
    .CanHoh2HrhRef = CanIf_CanHoh2Hrh,
#endif
};
#define CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "CanIf_MemMap.h"



/* ========================================== external function definitions ========================================= */

/* ========================================== internal function definitions ========================================= */

