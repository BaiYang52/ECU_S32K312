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
 * @file        : CanIf_Cfg.h
 * @licence     : 
 * @date        : 2026-09-12 18:25:38
 * @customer    : iSoft
 * @description : Configuration data for CanIf
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/

#ifndef CANIF_CFG_H_
#define CANIF_CFG_H_

/* =================================================== inclusions =================================================== */
#include "ComStack_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

/* =============================================== version information ============================================== */
#define CANIF_CFG_H_AR_RELEASE_MAJOR_VERSION    4u
#define CANIF_CFG_H_AR_RELEASE_MINOR_VERSION    5u
#define CANIF_CFG_H_AR_RELEASE_REVISION_VERSION 0u
#define CANIF_CFG_H_SW_MAJOR_VERSION            2u
#define CANIF_CFG_H_SW_MINOR_VERSION            2u
#define CANIF_CFG_H_SW_PATCH_VERSION            2u

/* ===================================================== macros ===================================================== */
#define CANIF_CAN_AUTOSAR_R422 0u
#define CANIF_CAN_AUTOSAR_R431 1u
#define CANIF_CAN_AUTOSAR_R440 2u
#define CANIF_CAN_AUTOSAR_R19  3u
#define CANIF_CAN_AUTOSAR_R21  4u
#define CANIF_CAN_AUTOSAR_R23  5u

#define CANIF_CAN_IDTYPE_UINT16 0u
#define CANIF_CAN_IDTYPE_UINT32 1u

#define CANIF_SOFTWARE_FILTER_BINARY 0u
#define CANIF_SOFTWARE_FILTER_INDEX  1u
#define CANIF_SOFTWARE_FILTER_LINEAR 2u
#define CANIF_SOFTWARE_FILTER_TABLE  3u

#define CANIF_CAN_AUTOSAR_VERSION CANIF_CAN_AUTOSAR_R440

#define CANIF_CAN_IDTYPE CANIF_CAN_IDTYPE_UINT32

#define CANIF_GLOBAL_TIME_SUPPORT STD_OFF

#define CANIF_HOHID_INVALID ((Can_HwHandleType)CANIF_UNUSED_UINT16)

#define CANIF_META_DATA_SUPPORT STD_OFF

#define CANIF_PUBLIC_BUS_MIRRORING_SUPPORT STD_OFF

#define CANIF_PUBLIC_CTRL_PN_SUPPORT STD_OFF

#define CANIF_PUBLIC_DEV_ERROR_DETECT STD_OFF

#define CANIF_PUBLIC_MULTIPLE_DRV_SUPPORT STD_ON

#define CANIF_PUBLIC_PN_SUPPORT STD_OFF

#define CANIF_PUBLIC_READ_RX_PDU_DATA_API STD_OFF

#define CANIF_PUBLIC_READ_RX_PDU_NOTIFY_STATUS_API STD_OFF

#define CANIF_PUBLIC_READ_TX_PDU_NOTIFY_STATUS_API STD_OFF

#define CANIF_PUBLIC_SET_DYNAMIC_TX_ID_API STD_OFF

#define CANIF_PUBLIC_TRCV_PN_SUPPORT STD_OFF

#define CANIF_PUBLIC_TX_BUFFERING STD_ON

#define CANIF_PUBLIC_TX_CONFIRM_POLLING_SUPPORT STD_ON

#define CANIF_PUBLIC_VERSION_INFO_API STD_OFF

#define CANIF_PUBLIC_WAKEUP_CHECK_VALID_BY_NM STD_OFF

#define CANIF_PUBLIC_WAKEUP_CHECK_VALID_SUPPORT STD_OFF

#define CANIF_SET_BAUDRATE_API STD_OFF

#define CANIF_TRIGGER_TRANSMIT_SUPPORT STD_OFF

#define CANIF_TX_OFFLINE_ACTIVE_SUPPORT STD_OFF

#define CANIF_UP_TRIGGER_TRANSMIT_ENABLE STD_OFF

#define CANIF_WAKEUP_SUPPORT STD_ON


#define CANIF_CANDRV_WAKE_UP_SUPPORT STD_OFF

#define CANIF_CANTRCV_WAKE_UP_SUPPORT STD_OFF

#define CANIF_CDD_CANIDS_MODULE_ENABLE STD_OFF

#define CANIF_FIXED_BUFFER STD_OFF

#define CANIF_HRH_CANID_RANGE_SUPPORT STD_OFF

#define CANIF_PARTITION_ID2INDEX_NUMBER 0u

#define CANIF_PARTITION_NUMBER 1u

#define CANIF_PARTITION_USED STD_OFF

#define CANIF_PDUID_INVALID ((PduIdType)CANIF_UNUSED_UINT16)

#define CANIF_PRIVATE_DLC_CHECK STD_ON

#define CANIF_RXPDU_CANID_RANGE_SUPPORT STD_OFF

#define CANIF_RX_EXTENDED_CAN_SUPPORT STD_OFF

#define CANIF_RX_EXTENDED_FD_CAN_SUPPORT STD_OFF

#define CANIF_RX_EXTENDED_NO_FD_CAN_SUPPORT STD_OFF

#define CANIF_RX_STANDARD_CAN_SUPPORT STD_ON

#define CANIF_RX_STANDARD_FD_CAN_SUPPORT STD_OFF

#define CANIF_RX_STANDARD_NO_FD_CAN_SUPPORT STD_OFF

#define CANIF_SOFTWARE_FILTER_TYPE CANIF_SOFTWARE_FILTER_LINEAR

#define CANIF_TX_EXTENDED_CAN_SUPPORT STD_OFF

#define CANIF_TX_EXTENDED_FD_CAN_SUPPORT STD_OFF

#define CANIF_TX_STANDARD_CAN_SUPPORT STD_ON

#define CANIF_TX_STANDARD_FD_CAN_SUPPORT STD_OFF

#define CANIF_WAKEUPSOURCE_MAX 0x0000001Fu


#define CANIF_MAX_RXPDU_NUMBER 0u

#define CANIF_MAX_TXPDU_NUMBER 0u


#define CANIF_CANDRIVER_NUMBER 1u
#define CANIF_CANGENERAL 0u

#define CANIF_TRCVDRIVER_NUMBER 0u

#define CANIF_CANCONTROLLER_NUMBER 2u
#define CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_0 0u
#define CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg_1 1u

#define CANIF_CANCTRLID2INDEX_NUMBER 2u

#define CANIF_TRCV_NUMBER 0u

#define CANIF_CANTRCVID2INDEX_NUMBER 0u

#define CANIF_TXPDU_NUMBER 2u
#define CanIfConf_CanIfTxPduCfg_CanIfTxPduCfg_0x110 0u
#define CanIfConf_CanIfTxPduCfg_CanIfTxPduCfg_Controller1_0x119_Tx 1u

#define CANIF_RXPDU_NUMBER 2u
#define CanIfConf_CanIfRxPduCfg_CanIfRxPduCfg_0x12a 0u
#define CanIfConf_CanIfRxPduCfg_CanIfRxPduCfg_0x119_Routing_Rx 1u

/* ================================================ type definitions ================================================ */

/* ========================================== internal function definitions ========================================= */

/* =========================================== external data declarations =========================================== */

/* ========================================= external function declarations ========================================= */

#ifdef __cplusplus
}
#endif

#endif

