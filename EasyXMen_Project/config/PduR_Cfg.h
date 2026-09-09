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
 * @file        : PduR_Cfg.h
 * @licence     : 
 * @date        : 2026-09-09 23:13:44
 * @customer    : iSoft
 * @description : Pre-compile configuration parameter of PduR
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/
#ifndef PDUR_CFG_H_
#define PDUR_CFG_H_

/* =================================================== inclusions =================================================== */
#include "ComStack_Types.h"
#include "PduR_PBcfg.h"

#ifdef __cplusplus
extern "C" {
#endif
/* =============================================== version information ============================================== */

/* ===================================================== macros ===================================================== */
/*Switches the Default Error Tracer (Det) detection and notification ON or OFF.*/
#define PDUR_DEV_ERROR_DETECT              STD_OFF

/*Enable support for MetaData handling.*/
#define PDUR_META_DATA_SUPPORT             STD_OFF

/*Switches the LinSM_GetVersionInfo function ON or OFF.*/
#define PDUR_VERSION_INFO_API              STD_OFF
/*Switches the LinSM_GetVersionInfo function ON or OFF.*/
#define PDUR_ZERO_COST_OPERATION           STD_OFF

#define PDUR_MULITIPARTITION_SUPPORT       STD_OFF
#define PDUR_MULITIVARIANT_SUPPORT       STD_OFF


#define PDUR_BSW_MODULE_SUM                2u
#define PDUR_CANIF       0u
#define PDUR_COM       1u

#define PDUR_TRANSMIT_SUPPORT           STD_ON
#define PDUR_CANCEL_TRANSMIT            STD_ON
#define PDUR_CANCEL_RECEIVE             STD_ON
#define PDUR_RX_INDICATION              STD_ON
#define PDUR_TX_CONFIRMATION            STD_ON
#define PDUR_TRIGGER_TRANSMIT            STD_ON
#define PDUR_TP_STARTOFRECEPTION_TRANSMIT            STD_ON
#define PDUR_TP_COPYRXDATA            STD_ON
#define PDUR_TP_RXINDICATION            STD_ON
#define PDUR_TP_COPYTXDATA            STD_ON
#define PDUR_TP_TXCONFIRMATION            STD_ON

#define PDUR_COMMUNICATION_INTERFACE_FORWARDING_ENABLED     STD_ON
#define PDUR_COMMUNICATION_INTERFACE_GATEWAYING_ENABLED     STD_OFF
#define PDUR_TRANSPORT_PROTOCOL_FORWARDING_NOBUFFERED_ENABLED     STD_OFF
#define PDUR_TRANSPORT_PROTOCOL_FORWARDING_BUFFERED_ENABLED     STD_OFF
#define PDUR_TRANSPORT_PROTOCOL_GATEWAYING_ENABLED     STD_OFF

#define PDUR_ROUTINGPATH_MAX               20u
#define PDUR_ROUTING_PATH_GROUP_MAX        0u
#define PDUR_NUMBER_OF_BUFFERS             0u

#define PDUR_NUMBER_OF_QUEUES_MAX            0u
#define PDUR_NUM_OF_QUEUES_DEPTH_SUM_MAX     0u

#define PDUR_DEFAULT_VALUE_PDU_ENABLE        STD_OFF


#define PDUR_PDU_LENGTH_INVALID 0xffffu

#define PDUR_PDU_ID_INVALID 0xffffu

/* ================================================ type definitions ================================================ */

/* ========================================== internal function definitions ========================================= */

/* =========================================== external data declarations =========================================== */

/* ========================================= external function declarations ========================================= */
#ifdef __cplusplus
}
#endif
#endif
