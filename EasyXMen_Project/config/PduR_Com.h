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
 * @file        : PduR_Com.h
 * @licence     : 
 * @date        : 2026-09-12 11:52:52
 * @customer    : iSoft
 * @description : API declaration supplied by PduR to <Com>
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/
#ifndef  PDUR_COM_H_
#define  PDUR_COM_H_

/* =================================================== inclusions =================================================== */
#include "PduR.h"

#ifdef __cplusplus
extern "C" {
#endif
/* =============================================== version information ============================================== */

/* ===================================================== macros ===================================================== */
#define PduR_ComTransmit    PduR_Transmit
#define PduR_ComCancelTransmit  PduR_CancelTransmit
#define PduR_ComCancelReceive      PduR_CancelReceive

/* ================================================ type definitions ================================================ */

/* ========================================== internal function definitions ========================================= */

/* =========================================== external data declarations =========================================== */

/* ========================================= external function declarations ========================================= */
#ifdef __cplusplus
}
#endif
#endif

