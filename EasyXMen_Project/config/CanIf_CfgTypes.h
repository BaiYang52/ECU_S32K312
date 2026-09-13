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
 * @file        : CanIf_CfgTypes.h
 * @licence     : 
 * @date        : 2026-09-13 22:58:04
 * @customer    : iSoft
 * @description : Configuration type for CanIf
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/

#ifndef CANIF_CFGTYPES_H_
#define CANIF_CFGTYPES_H_

/* PRQA S 5004 EOF */ /* VL_CanIf_5004 */
/* PRQA S 1536 EOF */ /* VL_CanIf_1536 */
/* =================================================== inclusions =================================================== */
#include "Os_Types.h"
#include "ComStack_Types.h"
#include "CanIf_Cfg.h"
#include "CanIf_PBcfg.h"
#include "CanIf_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ===================================================== macros ===================================================== */
#define CANIF_CONTROLLER_DRV_ID(ctrlIndex) CanIf_CtrlCfgData[(ctrlIndex)].CanDriverId

#define CANIF_DYNAMICTXPDU_NUMBER(partitionIndex) CanIf_DynamicTxPdu[(partitionIndex)].DynamicTxPduNumber


#define CANIF_UPCONFIRMTXPDU_NUMBER(partitionIndex) CanIf_UpConfirmTxPdu[(partitionIndex)].UpConfirmTxPduNumber
#define CANIF_UPCONFIRMTXPDU(partitionIndex, upConfirmTxPduIndex) \
    CanIf_UpConfirmTxPdu[(partitionIndex)].UpConfirmTxPduRef[(upConfirmTxPduIndex)]

#define CANIF_TXBYTEBUFFER_NUMBER(partitionIndex) CanIf_TxBuffer[(partitionIndex)].TxByteBufferNumber
#define CANIF_TXBYTEBUFFER(partitionIndex, txByteBufferIndex) \
    CanIf_TxBuffer[(partitionIndex)].TxByteBufferRef[(txByteBufferIndex)]
#define CANIF_TXPDUBUFFER_NUMBER(partitionIndex) CanIf_TxBuffer[(partitionIndex)].TxPduBufferNumber
#define CANIF_TXPDUBUFFER(partitionIndex, txPduBufferIndex) \
    CanIf_TxBuffer[(partitionIndex)].TxPduBufferRef[(txPduBufferIndex)]
#define CANIF_TXBUFFER_NUMBER(partitionIndex)         CanIf_TxBuffer[(partitionIndex)].TxBufferNumber
#define CANIF_TXBUFFER(partitionIndex, txBufferIndex) CanIf_TxBuffer[(partitionIndex)].TxBufferRef[(txBufferIndex)]




/* ================================================ type definitions ================================================ */
/**
 * @brief type of callout functions with respect to the upper layers
 */
typedef struct CanIf_DispatchConfigTag
{
#if (STD_ON == CANIF_PUBLIC_WAKEUP_CHECK_VALID_SUPPORT)
    void (*CanIfDispatchUserValidateWakeupEventName)(EcuM_WakeupSourceType sources);
#endif
    void (*CanIfDispatchUserCtrlBusOffName)(uint8 ControllerId);
    void (*CanIfDispatchUserCtrlModeIndicationName)(uint8 ControllerId, Can_ControllerStateType ControllerMode);
} CanIf_DispatchConfigType;

/**
 * @brief type of can driver api
 */
typedef struct Can_DriverApiTag
{
    Std_ReturnType (*CanSetControllerModeApi)(uint8 Controller, Can_ControllerStateType Transition);
    Std_ReturnType (*CanWriteApi)(Can_HwHandleType Hth, const Can_PduType* PduInfo);
#if (STD_ON == CANIF_CANDRV_WAKE_UP_SUPPORT)
    Std_ReturnType (*CanCheckWakeupApi)(uint8 Controller);
#endif
#if (STD_ON == CANIF_SET_BAUDRATE_API)
    Std_ReturnType (*CanSetBaudrateApi)(uint8 Controller, uint16 BaudRateConfigID);
#endif
    Std_ReturnType (*CanGetControllerErrorStateApi)(uint8 ControllerId, Can_ErrorStateType* ErrorStatePtr);
    Std_ReturnType (*CanGetControllerRxErrorCounterApi)(uint8 ControllerId, uint8* RxErrorCounterPtr);
    Std_ReturnType (*CanGetControllerTxErrorCounterApi)(uint8 ControllerId, uint8* TxErrorCounterPtr);
} Can_DriverApiType;


/**
 * @brief type of Can controller configuration
 */
typedef struct CanIf_CtrlConfigTag
{
    /*the id of CanDriver*/
    uint8 CanDriverId;
    /* This parameter defines if a respective controller of the referenced CAN Driver modules is queriable for wake up
     * events*/
    boolean CanIfCtrlWakeupSupport;
/*if more than zero Tx L-PDUs per CAN Controller are configured as CanIfTxPduPnFilterPdu is TRUE*/
    /*Symbolic name reference to CanCtrl,the lower CanCtrl id*/
    uint8 CanCtrlId;
#if (STD_ON == CANIF_WAKEUP_SUPPORT)
    /*Controller WakeUpSource | Controller Ref Trcv WakeUpSource*/
    EcuM_WakeupSourceType CanIfWakeUpSource;
#endif
} CanIf_CtrlConfigType;


/**
 * @brief define CANIF module initiation status
 */
typedef enum CanIf_InitStatusTag
{
    CANIF_UNINIT,
    CANIF_INITED,
} CanIf_InitStatusType;

/**
 * @brief type of CanIf module's runtime state
 */
typedef struct CanIf_RuntimeTag
{
    CanIf_InitStatusType InitStatus;
} CanIf_RuntimeType;

/**
 * @brief type of CanIf Dynamic TxPdu runtime state for each partition
 */
typedef struct CanIf_DynamicTxPduPartitionTag
{
    PduIdType               DynamicTxPduNumber;
    CanIf_DynamicTxPduType* DynamicTxPduRef;
} CanIf_DynamicTxPduPartitionType;

/**
 * @brief type of CanIf Tx Notification Status for each partition
 */
typedef struct CanIf_TxNotifStatusPartitionTag
{
    PduIdType              TxNotifStatusNumber;
    CanIf_NotifStatusType* TxNotifStatusRef;
} CanIf_TxNotifStatusPartitionType;

/**
 * @brief type of User Tx Confirmation runtime state for each partition
 */
typedef struct CanIf_UpConfirmTxPduPartitionTag
{
    PduIdType                 UpConfirmTxPduNumber;
    CanIf_UpConfirmTxPduType* UpConfirmTxPduRef;
} CanIf_UpConfirmTxPduPartitionType;

/**
 * @brief type of CanIf TxPduBuffer
 */
typedef struct CanIf_TxPduBufferTag
{
    uint8      Length;
    PduIdType  TxPduId;
    PduIdType  TxPduIndex;
    Can_IdType CanId;
    uint8*     Data;
} CanIf_TxPduBufferType;

/**
 * @brief type of CanIf TxBuffer
 */
typedef struct CanIf_TxBufferTag
{
    CanIf_TxPduBufferNumberType BufferSize;
    CanIf_TxPduBufferType*      TxPduBufferRef;
} CanIf_TxBufferType;

/**
 * @brief type of CanIf TxBuffer for each partition
 */
typedef struct CanIf_TxBufferPartitionTag
{
    CanIf_TxBufferNumberType     TxBufferNumber;
    CanIf_TxPduBufferNumberType  TxPduBufferNumber;
    CanIf_TxByteBufferNumberType TxByteBufferNumber;
    CanIf_TxBufferType*          TxBufferRef;
    CanIf_TxPduBufferType*       TxPduBufferRef;
    uint8*                       TxByteBufferRef;
} CanIf_TxBufferPartitionType;


/**
 * @brief type of CanIf Rx Notification Status for each partition
 */
typedef struct CanIf_RxNotifStatusPartitionTag
{
    PduIdType              RxNotifStatusNumber;
    CanIf_NotifStatusType* RxNotifStatusRef;
} CanIf_RxNotifStatusPartitionType;

/**
 * @brief type of CanIf RxPduBuffer
 */
typedef struct CanIf_RxPduBufferTag
{
    uint8        Length;
    CanIf_IdType MetaData;
    uint8*       Data;
} CanIf_RxPduBufferType;

/**
 * @brief type of CanIf RxBuffer
 */
typedef struct CanIf_RxBufferTag
{
    uint8                 PduLength;
    CanIf_RxPduBufferType RxPduBuffer;
} CanIf_RxBufferType;

/**
 * @brief type of CanIf RxBuffer for each partition
 */
typedef struct CanIf_RxBufferPartitionTag
{
    CanIf_RxBufferNumberType     RxBufferNumber;
    CanIf_RxByteBufferNumberType RxByteBufferNumber;
    CanIf_RxBufferType*          RxBufferRef;
    uint8*                       RxByteBufferRef;
} CanIf_RxBufferPartitionType;

/**
 * @brief type of CanIf CanId
 */
typedef enum CanIf_CanIdTypeTag
{
    CANIF_CANID_STANDARD,
    CANIF_CANID_EXTENDED,
} CanIf_CanIdTypeType;

/**
 * @brief type of CanIf HRH CanId Range configuration
 */
typedef struct CanIf_HrhCanIdRangeTag
{
    /*Lower CAN Identifier of a receive CAN L-PDU for identifier range definition*/
    CanIf_IdType HrhRangeRxPduLowerCanId;
    /*Upper CAN Identifier of a receive CAN L-PDU for identifier range definition*/
    CanIf_IdType        HrhRangeRxPduUpperCanId;
    CanIf_IdType        HrhRangeBaseId;
    CanIf_IdType        HrhRangeMask;
    CanIf_CanIdTypeType HrhRangeRxPduRangeCanIdType;
} CanIf_HrhCanIdRangeType;

/**
 * @brief type of User_TxConfirmation() callback function
 */
typedef void (*CanIfTxPduUserTxConfirmationNameApiType)(PduIdType TxPduId, Std_ReturnType result);


/**
 * @brief type of CanIf RxPdu CanId Range configuration
 */
typedef struct CanIf_RxPduCanIdRangeTag
{
    CanIf_IdType LowerCanId;
    CanIf_IdType UpperCanId;
} CanIf_RxPduCanIdRangeType;

/**
 * @brief type of User_RxIndication() callback function
 */
typedef void (*CanIfRxPduUserRxIndicationNameApiType)(PduIdType RxPduId, const PduInfoType* PduInfoPtr);

/* ========================================== internal function definitions ========================================= */

/* =========================================== external data declarations =========================================== */
extern const CanIf_DispatchConfigType CanIf_DispatchConfigData;

extern const Can_DriverApiType Can_DriverApi[CANIF_CANDRIVER_NUMBER];


extern const CanIf_CtrlConfigType CanIf_CtrlCfgData[CANIF_CANCONTROLLER_NUMBER];

extern const uint8 CanIf_CanCtrlId2Index[CANIF_CANCTRLID2INDEX_NUMBER];


#if (CANIF_PARTITION_ID2INDEX_NUMBER > 0u)
extern const ApplicationType CanIf_PartitionId2Index[CANIF_PARTITION_ID2INDEX_NUMBER];
#endif

extern CanIf_RuntimeType* const CanIf_Runtime[CANIF_PARTITION_NUMBER];

extern const CanIf_DynamicTxPduPartitionType CanIf_DynamicTxPdu[CANIF_PARTITION_NUMBER];


extern const CanIf_UpConfirmTxPduPartitionType CanIf_UpConfirmTxPdu[CANIF_PARTITION_NUMBER];

extern const CanIf_TxBufferPartitionType CanIf_TxBuffer[CANIF_PARTITION_NUMBER];




extern CanIf_CtrlRuntimeType* const CanIf_CtrlRuntime[CANIF_PARTITION_NUMBER];

extern const CanIfTxPduUserTxConfirmationNameApiType CanIf_UpTxConfirmationArray[CANIF_UPTXCONFIRMATION_API_NUMBER];



extern const CanIfRxPduUserRxIndicationNameApiType CanIf_UpRxIndicationArray[CANIF_UPRXINDICATION_API_NUMBER];



extern const CanIf_ConfigType CanIf_Config;

/* ========================================= external function declarations ========================================= */

#ifdef __cplusplus
}
#endif

#endif
