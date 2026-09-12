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
 * @file        : CanSM_Cfg.h
 * @licence     : 
 * @date        : 2026-09-12 22:33:35
 * @customer    : iSoft
 * @description : Pre-compile parameter definition of CanSM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/
#ifndef CANSM_CFG_H_
#define CANSM_CFG_H_

/* =================================================== inclusions =================================================== */
#include "ComStack_Types.h"
#ifdef __cplusplus
extern "C" {
#endif
/* ===================================================== macros ===================================================== */
/** development error tracer switch */
#define CANSM_DEV_ERROR_DETECT              STD_ON

/** <User_GetBusOffDelay> callout function */
#define CANSM_GET_BUSOFF_DELAY_FUNCTION_USED    STD_OFF

/** Enables or disables support of partial networking */
#define CANSM_PNC_SUPPORT                   STD_OFF

/** Enables or disables support of CanSM_SetBaudrate */
#define CANSM_SET_BAUDRATE_API              STD_OFF

/** Determines whether the ECU passive feature is supported by CanSM */
#define CANSM_TX_OFFLINE_ACTIVE_SUPPORT     STD_OFF

/** version information switch */
#define CANSM_VERSION_INFO_API              STD_OFF

/** PN filter functionality on the indicated NM channel */
#define CANSM_CANNM_CONF_PN_AVA             STD_OFF

/** Enables or disables the polling of the Tx confirmation of the BOR */
#define CANSM_BOR_TX_CONFIRMATION_POLLING_ENABLED   STD_OFF
/** Enables or disables the polling of the Tx ensured of the BOR */
#define CANSM_BOR_TIME_TX_ENSURED_ENABLED           STD_ON

/** CanSM network handle number */
#define CANSM_NETWORK_NUM       1u
/** Enables or disables CanTransceiver */
#define CANSM_TRCV_ENABLED          STD_OFF

/** Enables or disables ComM channel partition */
#define CANSM_MULTIPLE_PARTITION_USED       STD_OFF
/** Partition number of CanSM */
#define CANSM_PARTITION_NUM     1u

/* ================================================ type definitions ================================================ */
 
/* ========================================== internal function definitions ========================================= */
 
/* =========================================== external data declarations =========================================== */

/* ========================================= external function declarations ========================================= */

#ifdef __cplusplus
}
#endif
#endif
