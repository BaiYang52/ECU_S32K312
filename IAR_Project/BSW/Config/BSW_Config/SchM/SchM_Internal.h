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
 * @file        : SchM_Internal.h
 * @licence     : 
 * @date        : 2026-07-20 00:26:49
 * @customer    : iSoft
 * @description : SchM Internal Header
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/
/* PRQA S 3472 EOF */ /* VL_Rte_SimilarIdentifier */
/* PRQA S 1513, 1512 EOF */ /* VL_QAC_MultiDeclaration */
/* PRQA S 1709 EOF */ /* VL_Rte_Redeclaration_Diff */
#ifndef SCHM_INTERNAL_H
#define SCHM_INTERNAL_H

#include "SchM_Type.h"
#include "Rte_Type.h"


SchM_ServiceBufferType * SchM_GetBuffer(CoreIdType coreId);

void SchM_AppendBuffer(CoreIdType coreId, SchM_ServiceBufferType * buffer);

SchM_ServiceBufferType * SchM_TakeBuffer(CoreIdType coreId);

void SchM_UpdateBuffer(SchM_ServiceBufferType * buffer);

void SchM_ReleaseBuffer(CoreIdType coreId, SchM_ServiceBufferType * buffer);

void SchM_ServiceProcessWait(CoreIdType coreId, SchM_ServiceBufferType * buffer);

uint32 Os_CmpSwapW(uint32* address, uint32 compareVal, uint32 exchangedVal);

#define SchM_CmpSwap(addr, expected, desired)	Os_CmpSwapW(addr, expected, desired)


/* LifeCycle */

#endif
