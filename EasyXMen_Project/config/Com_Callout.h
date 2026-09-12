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
 * @file        : Com_Callout.h
 * @licence     : 
 * @date        : 2026-09-12 18:04:18
 * @customer    : iSoft
 * @description : Com Callout Functions
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/

#ifndef  COM_CALLOUT_H_
#define  COM_CALLOUT_H_

#include "ComStack_Types.h"
/* PRQA S 5015 ++ */ /* VL_Com_UntrustedMethod */
boolean ComIPdu_0x110_Tx_Callout(
    PduIdType PduId,
    PduInfoType* PduInfoPtr
);
boolean ComIPdu_0x12a_Rx_Callout(
    PduIdType PduId,
    const PduInfoType* PduInfoPtr
);


/* PRQA S 5015 -- */ /* VL_Com_UntrustedMethod */
#endif /* COM_CALLOUT_H */
/***********************************************************************************************************************
**                                      End of file                                                                   **
***********************************************************************************************************************/
