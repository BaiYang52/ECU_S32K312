/* SchM ExclusiveArea Function Define */
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
 * @file        : SchM_PduR.h
 * @licence     : 
 * @date        : 2026-04-14 18:59:45
 * @customer    : iSoft
 * @description : SchM PduR Header
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 2.2.2
 **********************************************************************************************************************/

#ifndef SCHM_PDUR_H
#define SCHM_PDUR_H
/* PRQA S 3472 EOF */ /* VL_Rte_SimilarIdentifier */
/* PRQA S 1709 EOF */ /* VL_Rte_UniqueDefinition */
/* PRQA S 1512 EOF */ /* VL_Rte_Redeclaration */
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */
/*******************************************************************************
** Include Section **
*******************************************************************************/
#include "Os.h"
#include "ComStack_Types.h"
#include "SchM_PduR_Type.h"

/* PRQA S 1753 ++ */ /* VL_Rte_NoDefination */
/* PRQA S 1753 -- */

/* Exclusive Area */
#define SchM_Enter_PduR_ExclusiveArea_Route()   SuspendAllInterrupts()
#define SchM_Exit_PduR_ExclusiveArea_Route()    ResumeAllInterrupts()
#define SchM_Enter_PduR_ExclusiveArea_Init()   SuspendAllInterrupts()
#define SchM_Exit_PduR_ExclusiveArea_Init()    ResumeAllInterrupts()



/* Mode-Switch */



#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* SCHM_PDUR_H */

