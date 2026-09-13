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
 * @file        : Com_PBcfg.c
 * @licence     : 
 * @date        : 2026-09-13 17:06:52
 * @customer    : iSoft
 * @description : Post-Build configuration parameter of Com
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "ComStack_Types.h"
#include "Com_Internal.h"
#include "Com_PBcfg.h"
#include "Com_Callout.h"
/*******************************************************************************
**                      Macros                                                **
*******************************************************************************/
/*******************************************************************************
**                      Global Functions Declarations                         **
*******************************************************************************/
/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/
/* PRQA S 3120,3132,1503,1533 ++ */ /* VL_QAC_MagicNum,VL_QAC_MagicNum,VL_QAC_NoUsedApi,VL_QAC_OneRefSymbol */
#define COM_START_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"
static uint8 Com_TxIPduRuntimeBuff_ComMainFunctionTx_0[16];
#define COM_STOP_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_8
#include "Com_MemMap.h"
static const uint8 Com_TxIPduInitValue_ComMainFunctionTx_0[16] = {
    /* ComIPdu_0x110_Tx */
    0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
    /* ComIPdu_0x114_Tx */
    0x0u,
	0x0u,
	0x0u,
	0x0u,
    /* ComIPdu_0x115_Tx */
    0x0u,
	0x0u,
	0x0u,
	0x0u,
};
#define COM_STOP_SEC_CONFIG_DATA_8
#include "Com_MemMap.h"

#define COM_START_SEC_VAR_INIT_PTR
#include "Com_MemMap.h"
uint8* Com_TxIPduRuntimeBuff[COM_MAX_NUMBER_OF_MAIN_FUNCTION_TX] = {
    Com_TxIPduRuntimeBuff_ComMainFunctionTx_0,
};
#define COM_STOP_SEC_VAR_INIT_PTR
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"
static const uint8* const Com_TxIPduInitValue[COM_MAX_NUMBER_OF_MAIN_FUNCTION_TX] = {
    Com_TxIPduInitValue_ComMainFunctionTx_0,
};
#define COM_STOP_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_TxIpduBufIdType Com_TxIpduBuffSize[COM_MAX_NUMBER_OF_MAIN_FUNCTION_TX] = {
    16u,
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

#define COM_START_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"
static uint8 Com_RxIPduRuntimeBuff_ComMainFunctionRx_0[16];
#define COM_STOP_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_8
#include "Com_MemMap.h"
static const uint8 Com_RxIPduInitValue_ComMainFunctionRx_0[16] = {
    /* ComIPdu_0x12a_Rx */
    0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
    /* ComIPdu_0x114_Rx */
    0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
	0x0u,
};
#define COM_STOP_SEC_CONFIG_DATA_8
#include "Com_MemMap.h"

#define COM_START_SEC_VAR_INIT_PTR
#include "Com_MemMap.h"
uint8* Com_RxIPduRuntimeBuff[COM_MAX_NUMBER_OF_MAIN_FUNCTION_RX] = {
    Com_RxIPduRuntimeBuff_ComMainFunctionRx_0,
};
#define COM_STOP_SEC_VAR_INIT_PTR
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"
static const uint8* const Com_RxIPduInitValue[COM_MAX_NUMBER_OF_MAIN_FUNCTION_RX] = {
    Com_RxIPduInitValue_ComMainFunctionRx_0,
};
#define COM_STOP_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_RxIpduBufIdType Com_RxIpduBuffSize[COM_MAX_NUMBER_OF_MAIN_FUNCTION_RX] = {
    16u,
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

 #define COM_START_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"
static uint8 Com_Signal8BitRuntimeBuff_NoPartition[COM_MAX_SIGNAL_8BITBUFF_SIZE];
#define COM_STOP_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"

#define COM_START_SEC_VAR_INIT_PTR
#include "Com_MemMap.h"
uint8* Com_Signal8BitRuntimeBuff[1] = {
    Com_Signal8BitRuntimeBuff_NoPartition,
};
#define COM_STOP_SEC_VAR_INIT_PTR
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_8
#include "Com_MemMap.h"
static const uint8 Com_Signal8BitInitValue_NoPartition[14] = {
    0x00u,
	0x00u,
	0x00u,
	0x00u,
	0x00u,
	0x00u,
	0x00u,
	0x00u,
	0x00u,
	0x00u,
	0x00u,
	0x00u,
	0x00u,
	0x00u
};
#define COM_STOP_SEC_CONFIG_DATA_8
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"
static const uint8* const Com_Signal8BitInitValue[1] = {
    Com_Signal8BitInitValue_NoPartition,
};
#define COM_STOP_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"



#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_InitValueSignalIdType Com_Signal8BitInitValueSize[1] = {
    {
        14u,
        COM_UNUSED_UINT16,
    },
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

 #define COM_START_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"
uint8 Com_GWSignal8BitBuff[COM_MAX_GWSIGNAL_8BITBUFF_SIZE];
#define COM_STOP_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"



#define COM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Com_MemMap.h"
static Com_RxIPduRunTimeStateType Com_RxIPduRunTimeState_ComMainFunctionRx_0[2];
#define COM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_RxIPduRunTimeStateType Com_RxIPduInitState_ComMainFunctionRx_0[2] = {
    {
        /* ComIPdu_0x12a_Rx */
        8u, /* RxIpduLength */
        0u, /* RxIpduBaseDMTimeout */
        0u, /* RxOffset */
        0u, /* RxIpduRTStFlag */
        0u, /* RxIpduDMFlag */
    },
    {
        /* ComIPdu_0x114_Rx */
        8u, /* RxIpduLength */
        0u, /* RxIpduBaseDMTimeout */
        0u, /* RxOffset */
        0u, /* RxIpduRTStFlag */
        0u, /* RxIpduDMFlag */
    },
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"
Com_RxIPduRunTimeStateType* const Com_RxIPduRunTimeState[COM_MAX_NUMBER_OF_MAIN_FUNCTION_RX] = {
    Com_RxIPduRunTimeState_ComMainFunctionRx_0,
};
#define COM_STOP_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"
static const Com_RxIPduRunTimeStateType* const Com_RxIPduInitState[] = {
    Com_RxIPduInitState_ComMainFunctionRx_0,
};
#define COM_STOP_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"

#define COM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Com_MemMap.h"
static Com_TxIPduRunTimeStateType Com_TxIPduRunTimeState_ComMainFunctionTx_0[3];
#define COM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_TxIPduRunTimeStateType Com_TxIPduInitState_ComMainFunctionTx_0[3] = {
    {
        /* ComIPdu_0x110_Tx */
        8u, /* TxIpduLength */
        0u, /* RptNum */
        0u, /* NTimeCnt */
        0u, /* DMCnt */
        0u, /* PeriodCnt */
        0u, /* TxOffset */
        4u, /* TxIpduRTStFlag */
        COM_TX_MODE_PERIODIC, /* ipduTxMode */
    },
    {
        /* ComIPdu_0x114_Tx */
        4u, /* TxIpduLength */
        0u, /* RptNum */
        0u, /* NTimeCnt */
        0u, /* DMCnt */
        0u, /* PeriodCnt */
        0u, /* TxOffset */
        4u, /* TxIpduRTStFlag */
        COM_TX_MODE_PERIODIC, /* ipduTxMode */
    },
    {
        /* ComIPdu_0x115_Tx */
        4u, /* TxIpduLength */
        0u, /* RptNum */
        0u, /* NTimeCnt */
        0u, /* DMCnt */
        0u, /* PeriodCnt */
        0u, /* TxOffset */
        4u, /* TxIpduRTStFlag */
        COM_TX_MODE_PERIODIC, /* ipduTxMode */
    },
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"
Com_TxIPduRunTimeStateType* const Com_TxIPduRunTimeState[COM_MAX_NUMBER_OF_MAIN_FUNCTION_TX] = {
    Com_TxIPduRunTimeState_ComMainFunctionTx_0,
};
#define COM_STOP_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"
static const Com_TxIPduRunTimeStateType* const Com_TxIPduInitState[] = {
    Com_TxIPduInitState_ComMainFunctionTx_0,
};
#define COM_STOP_SEC_CONFIG_DATA_PTR
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"
static const Com_RxIpduGroupIdType Com_RxIPduGroupsRef[] = {
    ComIPduGroup_Rx, /*0 ComIPdu_0x12a_Rx*/
    ComIPduGroup_Rx, /*1 ComIPdu_0x114_Rx*/
};
#define COM_STOP_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"



#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
/* PRQA S 2895 ++ */ /* VL_Com_NegtiveValueType */
static const Com_RxIPduType Com_RxIPdu[2u] = {
    {
        /* 0 ComIPdu_0x12a_Rx */
        &ComIPdu_0x12a_Rx_Callout, /* ComIPduCallout */
        8u, /* IPduNoDynSignalLength */
        0u, /* IPduMaxDynSignalLength */
        0u,  /* RxIPduDMFirstTimeout */
        0u, /* RxIPduDMTimeout */
        0u, /* IpduPartitionId */
        0u, /* RxMainfunctionId */
        0u, /* RxIPduBufIndex */
        0u, /* IpduSignalRefStartId */
        1u, /* IPduSignalsRefEndId */
        0u,  /* IPduGroupsRefStartId */
        1u,  /* IPduGroupsRefEndId */
        COM_UNUSED_RXSIGNALGROUPID,  /* IPduSignalGroupsRefStartId */
        0u,  /* IPduSignalGroupsRefEndId */
        0u, /* MetaDataLength */
        FALSE,  /* ComIPduCancellationSupport */
        COM_DEFERRED,    /* ComIPduSignalProcessing */
        COM_PDU_NORMAL,    /* ComIPduType */
    },
    {
        /* 1 ComIPdu_0x114_Rx */
        NULL_PTR, /* ComIPduCallout */
        8u, /* IPduNoDynSignalLength */
        0u, /* IPduMaxDynSignalLength */
        0u,  /* RxIPduDMFirstTimeout */
        0u, /* RxIPduDMTimeout */
        0u, /* IpduPartitionId */
        0u, /* RxMainfunctionId */
        8u, /* RxIPduBufIndex */
        1u, /* IpduSignalRefStartId */
        7u, /* IPduSignalsRefEndId */
        1u,  /* IPduGroupsRefStartId */
        2u,  /* IPduGroupsRefEndId */
        COM_UNUSED_RXSIGNALGROUPID,  /* IPduSignalGroupsRefStartId */
        0u,  /* IPduSignalGroupsRefEndId */
        0u, /* MetaDataLength */
        FALSE,  /* ComIPduCancellationSupport */
        COM_DEFERRED,    /* ComIPduSignalProcessing */
        COM_PDU_NORMAL,    /* ComIPduType */
    },
};
/* PRQA S 2895 -- */ /* VL_Com_NegtiveValueType */
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"


#define COM_START_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"
static const Com_TxIpduGroupIdType Com_TxIPduGroupsRef[] = {
    ComIPduGroup_Tx, /*0 ComIPdu_0x110_Tx*/
    ComIPduGroup_Tx, /*1 ComIPdu_0x114_Tx*/
    ComIPduGroup_Tx, /*2 ComIPdu_0x115_Tx*/
};
#define COM_STOP_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_TxModePeriodType Com_TxModeTruePeriod[] = {
    {
        /* ComIPdu_0x110_Tx */
        1u,
        2u,
    },
    {
        /* ComIPdu_0x114_Tx */
        1u,
        2u,
    },
    {
        /* ComIPdu_0x115_Tx */
        1u,
        2u,
    },
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
/* PRQA S 2895 ++ */ /* VL_Com_NegtiveValueType */
static const Com_TxIPduType Com_TxIPdu[3u] = {
    {
        /* 0 - ComIPdu_0x110_Tx */
 /* ComIPduCallout */
        &ComIPdu_0x110_Tx_Callout,
        8u, /* ComIpduLength */
        0u,  /* ComMaxIpduLength */
        0u,  /*ComTimeout*/
        0u,  /*ComMinimumDelayTime*/
        0u, /* PartitionId */
        0u, /* txMainfunctionId */
        0u, /* PduBufferId */
        PduRConf_PduRSrcPdu_PduRSrcPdu_0x110_Tx, /*PduId*/
        0u, /*ComTxModeTrue*/
        COMSTACK_PDUID_INVALID, /*ComTxModeFalse*/
        0u, /*ComIpduSignalRefStartId*/
        1u, /* ComIPduSignalsRefNumber */
        COM_UNUSED_TXSIGNALGROUPID, /* ComIPduSignalGroupsRefStartId */
        0u, /* ComIPduSignalGroupsRefNumber */
        0u, /* ComIPduGroupsRefStartId */
        1u, /* ComIPduGroupsRefNumber */
        COM_TX_MODE_PERIODIC, /* ComTxTrueModeMode */
        COM_TX_MODE_NULL, /* ComTxFalseModeMode */
        0u, /* MetaDataLength */
        FALSE, /* ComIPduCancellationSupport */
        COM_DEFERRED, /* ComIPduSignalProcessing */
        COM_PDU_NORMAL, /* ComIPduType */
    },
    {
        /* 1 - ComIPdu_0x114_Tx */
        NULL_PTR, /* ComIPduCallout */
        4u, /* ComIpduLength */
        0u,  /* ComMaxIpduLength */
        0u,  /*ComTimeout*/
        0u,  /*ComMinimumDelayTime*/
        0u, /* PartitionId */
        0u, /* txMainfunctionId */
        8u, /* PduBufferId */
        PduRConf_PduRSrcPdu_PduRSrcPdu_0x114_SignalRouting_Tx, /*PduId*/
        1u, /*ComTxModeTrue*/
        COMSTACK_PDUID_INVALID, /*ComTxModeFalse*/
        1u, /*ComIpduSignalRefStartId*/
        4u, /* ComIPduSignalsRefNumber */
        COM_UNUSED_TXSIGNALGROUPID, /* ComIPduSignalGroupsRefStartId */
        0u, /* ComIPduSignalGroupsRefNumber */
        1u, /* ComIPduGroupsRefStartId */
        2u, /* ComIPduGroupsRefNumber */
        COM_TX_MODE_PERIODIC, /* ComTxTrueModeMode */
        COM_TX_MODE_NULL, /* ComTxFalseModeMode */
        0u, /* MetaDataLength */
        FALSE, /* ComIPduCancellationSupport */
        COM_DEFERRED, /* ComIPduSignalProcessing */
        COM_PDU_NORMAL, /* ComIPduType */
    },
    {
        /* 2 - ComIPdu_0x115_Tx */
        NULL_PTR, /* ComIPduCallout */
        4u, /* ComIpduLength */
        0u,  /* ComMaxIpduLength */
        0u,  /*ComTimeout*/
        0u,  /*ComMinimumDelayTime*/
        0u, /* PartitionId */
        0u, /* txMainfunctionId */
        12u, /* PduBufferId */
        PduRConf_PduRSrcPdu_PduRSrcPdu_0x115_SignalRouting_Tx, /*PduId*/
        2u, /*ComTxModeTrue*/
        COMSTACK_PDUID_INVALID, /*ComTxModeFalse*/
        4u, /*ComIpduSignalRefStartId*/
        7u, /* ComIPduSignalsRefNumber */
        COM_UNUSED_TXSIGNALGROUPID, /* ComIPduSignalGroupsRefStartId */
        0u, /* ComIPduSignalGroupsRefNumber */
        2u, /* ComIPduGroupsRefStartId */
        3u, /* ComIPduGroupsRefNumber */
        COM_TX_MODE_PERIODIC, /* ComTxTrueModeMode */
        COM_TX_MODE_NULL, /* ComTxFalseModeMode */
        0u, /* MetaDataLength */
        FALSE, /* ComIPduCancellationSupport */
        COM_DEFERRED, /* ComIPduSignalProcessing */
        COM_PDU_NORMAL, /* ComIPduType */
    },
};
/* PRQA S 2895 -- */ /* VL_Com_NegtiveValueType */
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"


#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_RxSignalType Com_RxSignal[7u] = {
    {
        /* 0 ComSignal_1_Rx */
        0u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        COM_UNUSED_UINT16, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        0u, /* SigLsbBytePos */
        0u, /* IpduRefIndex */
        0u, /* SignalPosInByte */
        8u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_BIG_ENDIAN, /* ComSignalEndianness */
        COM_NOT_USED_GW_MAPPING_ID, /* GwMappingId */
    },
    {
        /* 1 ComSignal_Signal_1_Led_Sts_Rx */
        1u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        0u, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        0u, /* SigLsbBytePos */
        1u, /* IpduRefIndex */
        0u, /* SignalPosInByte */
        8u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_BIG_ENDIAN, /* ComSignalEndianness */
        0u, /* GwMappingId */
    },
    {
        /* 2 ComSignal_Signal_2_Led_LiangDu_Rx */
        2u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        1u, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        1u, /* SigLsbBytePos */
        1u, /* IpduRefIndex */
        0u, /* SignalPosInByte */
        8u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_BIG_ENDIAN, /* ComSignalEndianness */
        1u, /* GwMappingId */
    },
    {
        /* 3 ComSignal_Signal_3_Led_Red_Rx */
        3u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        2u, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        2u, /* SigLsbBytePos */
        1u, /* IpduRefIndex */
        0u, /* SignalPosInByte */
        8u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_BIG_ENDIAN, /* ComSignalEndianness */
        2u, /* GwMappingId */
    },
    {
        /* 4 ComSignal_Signal_4_Led_Sts_Rx */
        4u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        3u, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        3u, /* SigLsbBytePos */
        1u, /* IpduRefIndex */
        0u, /* SignalPosInByte */
        8u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_BIG_ENDIAN, /* ComSignalEndianness */
        3u, /* GwMappingId */
    },
    {
        /* 5 ComSignal_Signal_5_Led_LiangDu_Rx */
        5u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        4u, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        4u, /* SigLsbBytePos */
        1u, /* IpduRefIndex */
        0u, /* SignalPosInByte */
        8u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_BIG_ENDIAN, /* ComSignalEndianness */
        4u, /* GwMappingId */
    },
    {
        /* 6 ComSignal_Signal_6_Led_Red_Rx */
        6u, /* SignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* SignalDataInitValueLength */
        5u, /* GWSignalBufferId */
        0u, /* RxMainfunctionId */
        5u, /* SigLsbBytePos */
        1u, /* IpduRefIndex */
        0u, /* SignalPosInByte */
        8u, /* ComBitSize */
        1u, /* ComSignalByteLength */
        COM_UINT8, /* ComSignalType */
        COM_BIG_ENDIAN, /* ComSignalEndianness */
        5u, /* GwMappingId */
    },
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"


#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
/* PRQA S 2895 ++ */ /* VL_Com_NegtiveValueType */
static const Com_TxSignalType Com_TxSignal[7u] = {
    {
        /* 0 ComSignal_0_Tx */
        7u, /* ComSignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* ComSignalDataInitValueLength */
        0u, /* txMainfunctionId */
        0u, /* SigLsbBytePos */
        0u, /* ComIpduRefIndex */
        0u, /*ComSignalPosInByte*/
        8u, /*ComBitSize*/
        1u, /*ComSignalByteLength*/
        FALSE, /*ComInitialValueOnly*/
        COM_BIG_ENDIAN, /*ComSignalEndianness*/
        COM_UINT8, /*ComSignalType*/
        COM_PENDING, /*ComTransferProperty*/
    },
    {
        /* 1 ComSignal_Signal_1_Led_Sts_Tx */
        8u, /* ComSignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* ComSignalDataInitValueLength */
        0u, /* txMainfunctionId */
        0u, /* SigLsbBytePos */
        1u, /* ComIpduRefIndex */
        0u, /*ComSignalPosInByte*/
        8u, /*ComBitSize*/
        1u, /*ComSignalByteLength*/
        FALSE, /*ComInitialValueOnly*/
        COM_BIG_ENDIAN, /*ComSignalEndianness*/
        COM_UINT8, /*ComSignalType*/
        COM_PENDING, /*ComTransferProperty*/
    },
    {
        /* 2 ComSignal_Signal_2_Led_LiangDu_Tx */
        9u, /* ComSignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* ComSignalDataInitValueLength */
        0u, /* txMainfunctionId */
        1u, /* SigLsbBytePos */
        1u, /* ComIpduRefIndex */
        0u, /*ComSignalPosInByte*/
        8u, /*ComBitSize*/
        1u, /*ComSignalByteLength*/
        FALSE, /*ComInitialValueOnly*/
        COM_BIG_ENDIAN, /*ComSignalEndianness*/
        COM_UINT8, /*ComSignalType*/
        COM_PENDING, /*ComTransferProperty*/
    },
    {
        /* 3 ComSignal_Signal_3_Led_Red_Tx */
        10u, /* ComSignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* ComSignalDataInitValueLength */
        0u, /* txMainfunctionId */
        2u, /* SigLsbBytePos */
        1u, /* ComIpduRefIndex */
        0u, /*ComSignalPosInByte*/
        8u, /*ComBitSize*/
        1u, /*ComSignalByteLength*/
        FALSE, /*ComInitialValueOnly*/
        COM_BIG_ENDIAN, /*ComSignalEndianness*/
        COM_UINT8, /*ComSignalType*/
        COM_PENDING, /*ComTransferProperty*/
    },
    {
        /* 4 ComSignal_Signal_4_Led_Sts_Tx */
        11u, /* ComSignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* ComSignalDataInitValueLength */
        0u, /* txMainfunctionId */
        0u, /* SigLsbBytePos */
        2u, /* ComIpduRefIndex */
        0u, /*ComSignalPosInByte*/
        8u, /*ComBitSize*/
        1u, /*ComSignalByteLength*/
        FALSE, /*ComInitialValueOnly*/
        COM_BIG_ENDIAN, /*ComSignalEndianness*/
        COM_UINT8, /*ComSignalType*/
        COM_PENDING, /*ComTransferProperty*/
    },
    {
        /* 5 ComSignal_Signal_5_Led_LiangDu_Tx */
        12u, /* ComSignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* ComSignalDataInitValueLength */
        0u, /* txMainfunctionId */
        1u, /* SigLsbBytePos */
        2u, /* ComIpduRefIndex */
        0u, /*ComSignalPosInByte*/
        8u, /*ComBitSize*/
        1u, /*ComSignalByteLength*/
        FALSE, /*ComInitialValueOnly*/
        COM_BIG_ENDIAN, /*ComSignalEndianness*/
        COM_UINT8, /*ComSignalType*/
        COM_PENDING, /*ComTransferProperty*/
    },
    {
        /* 6 ComSignal_Signal_6_Led_Red_Tx */
        13u, /* ComSignalInitValueId */
        0u, /* ComSignalLength */
        0u, /* ComSignalDataInitValueLength */
        0u, /* txMainfunctionId */
        2u, /* SigLsbBytePos */
        2u, /* ComIpduRefIndex */
        0u, /*ComSignalPosInByte*/
        8u, /*ComBitSize*/
        1u, /*ComSignalByteLength*/
        FALSE, /*ComInitialValueOnly*/
        COM_BIG_ENDIAN, /*ComSignalEndianness*/
        COM_UINT8, /*ComSignalType*/
        COM_PENDING, /*ComTransferProperty*/
    },
};
/* PRQA S 2895 -- */ /* VL_Com_NegtiveValueType */
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"





#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const  Com_GwDestType Com_GwDest[] = {
    {
    /* 0 ComGwMapping_Signal_1_Led_Sts ComGwDestination_0 */
        1u, /* GwDestSignalId */
        0u, /* MainFunctionId */
        COM_TX_SIGNAL, /* GwDestSignalType */
    },
    {
    /* 1 ComGwMapping_Signal_2_Led_LiangDu ComGwDestination_0 */
        2u, /* GwDestSignalId */
        0u, /* MainFunctionId */
        COM_TX_SIGNAL, /* GwDestSignalType */
    },
    {
    /* 2 ComGwMapping_Signal_3_Led_Red ComGwDestination_0 */
        3u, /* GwDestSignalId */
        0u, /* MainFunctionId */
        COM_TX_SIGNAL, /* GwDestSignalType */
    },
    {
    /* 3 ComGwMapping_Signal_4_Led_Sts ComGwDestination_0 */
        4u, /* GwDestSignalId */
        0u, /* MainFunctionId */
        COM_TX_SIGNAL, /* GwDestSignalType */
    },
    {
    /* 4 ComGwMapping_Signal_5_Led_LiangDu ComGwDestination_0 */
        5u, /* GwDestSignalId */
        0u, /* MainFunctionId */
        COM_TX_SIGNAL, /* GwDestSignalType */
    },
    {
    /* 5 ComGwMapping_Signal_6_Led_Red ComGwDestination_0 */
        6u, /* GwDestSignalId */
        0u, /* MainFunctionId */
        COM_TX_SIGNAL, /* GwDestSignalType */
    },
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_GwMappingType Com_GwMapping[] = {
    /* 0 ComGwMapping_Signal_1_Led_Sts*/
    {
        1u, /* GwSourceSignalId */
        0u, /* GwDestSignalStartId */
        1u, /* GwDestSignalEndId */
        COM_RX_SIGNAL, /* GwSourceSignalType */
    },
    /* 1 ComGwMapping_Signal_2_Led_LiangDu*/
    {
        2u, /* GwSourceSignalId */
        1u, /* GwDestSignalStartId */
        2u, /* GwDestSignalEndId */
        COM_RX_SIGNAL, /* GwSourceSignalType */
    },
    /* 2 ComGwMapping_Signal_3_Led_Red*/
    {
        3u, /* GwSourceSignalId */
        2u, /* GwDestSignalStartId */
        3u, /* GwDestSignalEndId */
        COM_RX_SIGNAL, /* GwSourceSignalType */
    },
    /* 3 ComGwMapping_Signal_4_Led_Sts*/
    {
        4u, /* GwSourceSignalId */
        3u, /* GwDestSignalStartId */
        4u, /* GwDestSignalEndId */
        COM_RX_SIGNAL, /* GwSourceSignalType */
    },
    /* 4 ComGwMapping_Signal_5_Led_LiangDu*/
    {
        5u, /* GwSourceSignalId */
        4u, /* GwDestSignalStartId */
        5u, /* GwDestSignalEndId */
        COM_RX_SIGNAL, /* GwSourceSignalType */
    },
    /* 5 ComGwMapping_Signal_6_Led_Red*/
    {
        6u, /* GwSourceSignalId */
        5u, /* GwDestSignalStartId */
        6u, /* GwDestSignalEndId */
        COM_RX_SIGNAL, /* GwSourceSignalType */
    },
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"



#define COM_START_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"
static const PduIdType Com_MainFunctionRxRange[] ={
    2u,     /* ComMainFunctionRx_0 */
};


static const PduIdType Com_MainFunctionTxRange[] = {
    3u,     /* ComMainFunctionTx_0 */
};

#define COM_STOP_SEC_CONFIG_DATA_16
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_SignalInitValueType Com_SignalInitValue = {
    Com_Signal8BitInitValue,
};

static const Com_SigInitValueSizePerPartitionType Com_SigInitValSize = {
    Com_Signal8BitInitValueSize,
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_GwMappingConfigType Com_GwMappingConfig = {
    Com_GwMapping,    /* GwMapping */
    Com_GwDest,   /* GwDest */
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"

#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_IpduGroupRefType Com_IPduGroup = {
    Com_RxIPduGroupsRef,
    Com_TxIPduGroupsRef,
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"





#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
static const Com_TxModeAndSignalFilterPtrType Com_TxModeAndSignalFilter = {
    Com_TxModeTruePeriod,
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"



#define COM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
const struct Com_ConfigTypeTag Com_Config = /* PRQA S 1502, 1531 */ /* VL_QAC_OneFunRef, VL_QAC_OneRefSymbol */
{
    &Com_RxIPdu[0], /* RxIPduPtr */
    Com_RxIPduInitState,  /* RxIpduInitStatePtr */
    Com_RxIPduInitValue,  /* RxIpduInitValuePtr */
    Com_RxIpduBuffSize,   /* RxIpduBufferSizePerPartition */
    &Com_TxIPdu[0],   /* TxIPduPtr */
    Com_TxIPduInitState,  /* TxIpduInitStatePtr */
    Com_TxIPduInitValue,  /* TxIpduInitValuePtr */
    Com_TxIpduBuffSize,   /* TxIpduBufferSizePerPartition */
    &Com_RxSignal[0], /* RxSignalPtr */
    &Com_TxSignal[0], /* TxSignalPtr */
    NULL_PTR,   /* RxSignalGroupPtr */
    NULL_PTR,   /* TxSignalGroupPtr */
    NULL_PTR,   /* RxGroupSignalPtr */
    NULL_PTR,   /* TxGroupSignalPtr */
    &Com_MainFunctionRxRange[0],  /* MainFunctionRxRangePtr */
    &Com_MainFunctionTxRange[0],  /* MainFunctionTxRangePtr */
    &Com_IPduGroup,   /* IpduGroupRefPtr */
    &Com_GwMappingConfig, /* GwMappingConfigPtr */
    &Com_SignalInitValue, /* SignalInitValuePtr */
    &Com_SigInitValSize,  /* SignalInitValueSizePtr */
    &Com_TxModeAndSignalFilter,   /* TxModeAndSignalFilterPtr */
    7u, /* TxSignalNum */
    7u, /* RxSignalNum */
    3u, /* TxPduNum */
    2u, /* RxPduNum */
    0u, /* TxGroupSignalNum */
    0u, /* RxGroupSignalNum */
    0u, /* TxSignalGroupNum */
    0u, /* RxSignalGroupNum */
    2u, /* IpduGroupNum */
    1u, /* MainFunctionRouteSignalsNum */
    1u, /* MainFunctionRxNum */
    1u, /* MainFunctionTxNum */
    6u, /* GwDestNum */
};
#define COM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Com_MemMap.h"
/*******************************************************************************
**                    Global Configuration Function Definitions               **
*******************************************************************************/
/* PRQA S 1532 ++*/ /* VL_QAC_OneFunRef */
void Com_MainFunctionRx_ComMainFunctionRx_0(void)
{
    Com_MainFunctionRx(0u);
}

void Com_MainFunctionTx_ComMainFunctionTx_0(void)
{
    Com_MainFunctionTx(0u);
}

void Com_MainFunctionRouteSignals_ComMainFunctionRouteSignals_0(void)
{
    Com_MainFunctionRouteSignals(0u);
}
/* PRQA S 1532 --*/
/* PRQA S 3120,3132,1503,1533 -- */
/***********************************************************************************************************************
**                                      End of file                                                                   **
***********************************************************************************************************************/
