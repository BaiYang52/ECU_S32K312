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
 * @file        : PduR_PBcfg.h
 * @licence     : 
 * @date        : 2026-09-12 18:25:39
 * @customer    : iSoft
 * @description : Post-Build configuration parameter of IpduM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/
#ifndef PDUR_PBCFG_H_
#define PDUR_PBCFG_H_

/* =================================================== inclusions =================================================== */
#include "Std_Types.h"
#ifdef __cplusplus
extern "C" {
#endif

/* =============================================== version information ============================================== */

/* ===================================================== macros ===================================================== */

#define PDUR_NUMBER_OF_QUEUES               0u
#define PDUR_NUM_OF_QUEUES_DEPTH_SUM        0u

#define PDUR_SRC_PDU_SUM                    3u
#define PDUR_DEST_PDU_SUM                   3u

#define PDUR_ROUTING_PATH_GROUP_SUM         0u

#define PDUR_DEFAULT_VALUE_PDU              0u
#define PDUR_DEFAULT_VALUE_LENGTH           0u

/* PRQA S 0793, 0791 ++ */ /* VL_PduR_0793, VL_PduR_0791 */
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0x110_Tx      0u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0x12a_Rx      1u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0x119_Routing_Rx      2u

#define PduRConf_PduRDestPdu_PduRDestPdu_0x110_Tx      0u
#define PduRConf_PduRDestPdu_PduRDestPdu_0x12a_Rx      1u
#define PduRConf_PduRDestPdu_PduRDestPdu_0x119_Routing_Tx      2u

/* PRQA S 0793, 0791 -- */ /* VL_PduR_0793, VL_PduR_0791 */

/* ================================================ type definitions ================================================ */

/* ========================================== internal function definitions ========================================= */

/* =========================================== external data declarations =========================================== */
/**
 * @brief PduR basic configuration, provided to BswM for initialization
 */

extern const struct PduR_PBConfigTypeTag PduR_Config; /* PRQA S 3313 */ /* VL_QAC_3313 */

/* ========================================= external function declarations ========================================= */
#ifdef __cplusplus
}
#endif
#endif

