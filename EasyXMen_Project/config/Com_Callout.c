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
 * @file        : Com_Callout.c
 * @licence     : 
 * @date        : 2026-09-05 22:43:31
 * @customer    : iSoft
 * @description : Com Callout Functions
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/
#include "Com_Callout.h"
/* PRQA S 3206,1532 ++ */ /* VL_Com_3206,VL_QAC_OneFunRef */
/** DO NOT CHANGE THIS COMMENT!
* <USERBLOCK Com_Callout Inclusion>
*/
/* Header file defined by User */
/** DO NOT CHANGE THIS COMMENT!
* </USERBLOCK>
*/
#define COM_START_SEC_CODE_FAST
#include "Com_MemMap.h"
boolean ComIPdu_0x110_Tx_Callout(
    PduIdType PduId,
    PduInfoType* PduInfoPtr
)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK ComIPdu_0x110_Tx_Callout>
    */
    /* ComIPdu_0x110_Tx_Callout code defined by User */
        boolean ret = TRUE;
        return ret;

    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define COM_STOP_SEC_CODE_FAST
#include "Com_MemMap.h"
#define COM_START_SEC_CODE_FAST
#include "Com_MemMap.h"
boolean ComIPdu_0x12a_Rx_Callout(
    PduIdType PduId,
    const PduInfoType* PduInfoPtr
)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK ComIPdu_0x12a_Rx_Callout>
    */
    /* ComIPdu_0x12a_Rx_Callout code defined by User */
        boolean ret = TRUE;
        return ret;

    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define COM_STOP_SEC_CODE_FAST
#include "Com_MemMap.h"


/* PRQA S 3206,1532 -- */
/***********************************************************************************************************************
**                                      End of file                                                                   **
***********************************************************************************************************************/
