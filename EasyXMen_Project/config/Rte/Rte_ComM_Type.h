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
 * @file        : Rte_ComM_Type.h
 * @licence     : 
 * @date        : 2026-09-13 17:07:00
 * @customer    : iSoft
 * @description : Application Types Header File for 
SWC-ComM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/
#ifndef RTE_COMM_TYPE_H
#define RTE_COMM_TYPE_H

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Rte_Type.h"
/*******************************************************************************
**                      Global Macros                                         **
*******************************************************************************/
/* ActivationReason */



/* Enumeration Data Types */
#ifndef COMM_NO_COMMUNICATION
#define COMM_NO_COMMUNICATION 0U
#endif
#ifndef COMM_SILENT_COMMUNICATION
#define COMM_SILENT_COMMUNICATION 1U
#endif
#ifndef COMM_FULL_COMMUNICATION
#define COMM_FULL_COMMUNICATION 2U
#endif
#ifndef COMM_FULL_COMMUNICATION_WITH_WAKEUP_REQUEST
#define COMM_FULL_COMMUNICATION_WITH_WAKEUP_REQUEST 3U
#endif
#ifndef COMM_WAKEUP_INHIBITION_ACTIVE_YES
#define COMM_WAKEUP_INHIBITION_ACTIVE_YES 1U
#endif
#ifndef COMM_WAKEUP_INHIBITION_ACTIVE_NO
#define COMM_WAKEUP_INHIBITION_ACTIVE_NO 0U
#endif
#ifndef COMM_LIMITED_TO_NO_COM_YES
#define COMM_LIMITED_TO_NO_COM_YES 2U
#endif
#ifndef COMM_LIMITED_TO_NO_COM_NO
#define COMM_LIMITED_TO_NO_COM_NO 0U
#endif
#ifndef COMM_NOT_USED_USER_ID
#define COMM_NOT_USED_USER_ID 65535U
#endif
#ifndef COMM_WAKEUP_INHIBITION_ACTIVE_BflMask
#define COMM_WAKEUP_INHIBITION_ACTIVE_BflMask 1U
#endif
#ifndef COMM_LIMITED_TO_NO_COM_BflMask
#define COMM_LIMITED_TO_NO_COM_BflMask 2U
#endif

/* Implementation Data Type symbols */
      
/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Declaration                               **
*******************************************************************************/

/*******************************************************************************
**                      Global Functions                                      **
*******************************************************************************/
#ifdef __cplusplus
} /* extern "C" */
#endif 
#endif /* RTE_COMM_TYPE_H */
