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
 * @file        : Rte_ComM.h
 * @licence     : 
 * @date        : 2026-09-12 18:25:46
 * @customer    : iSoft
 * @description : Application Header File for 
SWC-ComM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/

/* PRQA S 0789, 0779, 4152 EOF */ /* VL_Rte_SimilarIdentifier */
/* PRQA S 1335, 1336, 3001 EOF */ /* VL_Rte_NoFuncParaIdentifier */
/* PRQA S 3451, 3449, 1513, 1510, 1707, 1758, 1756, 1512 EOF */ /* VL_Rte_Redeclaration */
/* PRQA S 0787, 1710, 1712, 0786 EOF */ /* VL_Rte_SimilarIdentifier */
/* PRQA S 1753 EOF */ /* VL_Rte_NoDefination */
/* PRQA S 1507, 1506 EOF */ /* VL_Rte_Mutitypedef */
/* PRQA S 3472 EOF */ /* VL_Rte_MaCroDefExpression */
/* PRQA S 0844 EOF */ /* VL_Rte_UniqueDefinition */
#ifndef RTE_COMM_H
#define RTE_COMM_H

#ifndef RTE_CORE
#ifdef RTE_APPLICATION_HEADER_FILE
#error "Multiple application header files included."
#endif
#define RTE_APPLICATION_HEADER_FILE
#endif

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Rte_ComM_Type.h"
#include "Rte_DataHandleType.h"

/*******************************************************************************
**                      Global Macros                                         **
*******************************************************************************/



/* Application Errors */
#define RTE_E_ComM_UserRequest_E_OK 0U
#define RTE_E_ComM_UserRequest_E_NOT_OK 1U
#define RTE_E_ComM_UserRequest_E_MODE_LIMITATION 2U
#define RTE_E_ComM_UserRequest_E_MULTIPLE_PNC_ASSIGNED 3U
#define RTE_E_ComM_UserRequest_E_NO_PNC_ASSIGNED 4U

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
/* PRQA S 0787, 0786 ++ */ /* VL_Rte_SimilarIdentifier */
struct Rte_PDS_ComM_ComM_CurrentMode_P
{
    Std_ReturnType (*Switch_currentMode)(ComM_ModeType);
};

/* Instance Handle */ 
struct Rte_CDS_ComM
{
    struct Rte_PDS_ComM_ComM_CurrentMode_P UM_ComMUser_0;
    uint8 Instance_Id;
};
typedef struct Rte_CDS_ComM Rte_CDS_ComM; /* PRQA S 1310 */ /* VL_Rte_Standard */

#ifndef RTE_CORE    
typedef const Rte_CDS_ComM * Rte_Instance;
typedef const struct Rte_PDS_ComM_ComM_CurrentMode_P * Rte_PortHandle_ComM_CurrentMode_P;
#endif /* RTE_CORE */

/* PRQA S 0787, 0786 -- */
/*******************************************************************************
**                      Global Data Declaration                               **
*******************************************************************************/
extern const struct Rte_CDS_ComM Rte_Instance_ComM;

/* PRQA S 3449 ++ */ /* VL_Rte_Redeclaration */

/* PRQA S 3449 -- */

/* NvM RamBlockDataAddress */

/*******************************************************************************
**                      Global Functions                                      **
*******************************************************************************/
/* PRQA S 0787, 0786 ++ */ /* VL_Rte_SimilarIdentifier */
Std_ReturnType Rte_Switch_UM_ComMUser_0_currentMode_ComM(ComM_ModeType mode);





/* PRQA S 0787, 0786 -- */

/* RTE-Component Interface. */ 
#ifndef RTE_CORE
/* PRQA S 0793, 0791 ++ */ /* VL_Rte_SimilarIdentifier */
/* Client-Server API Mapping */

/*Mode API Mapping---Start*/
#define Rte_Switch_UM_ComMUser_0_currentMode   Rte_Switch_UM_ComMUser_0_currentMode_ComM






/*Mode API Mapping---End*/
/* PRQA S 0793, 0791 -- */

/* ExclusiveAreas API Mapping ---Start */

/* ExclusiveAreas API Mapping ---End */
#endif /* RTE_CORE */

/* Runnable Entity Prototype. */ 
/* PRQA S 3451, 3449, 0624, 4152 ++ */ /* VL_Rte_Redeclaration */
#define RTE_RUNNABLE_ComM_MainFunction_ComMChannel_0 ComM_MainFunction_ComMChannel_0   
#define RTE_RUNNABLE_ComM_GetCurrentComMode ComM_GetCurrentComMode   
#define RTE_RUNNABLE_ComM_GetCurrentPNCComMode ComM_GetCurrentPNCComMode   
#define RTE_RUNNABLE_ComM_GetMaxComMode ComM_GetMaxComMode   
#define RTE_RUNNABLE_ComM_GetRequestedComMode ComM_GetRequestedComMode   
#define RTE_RUNNABLE_ComM_RequestComMode ComM_RequestComMode   

/* PRQA S 1709, 1707 ++ */ /* VL_Rte_Redeclaration_Diff */
/* PRQA S 1512, 1513 ++ */ /* VL_QAC_MultiDeclaration */
void ComM_MainFunction_ComMChannel_0(void);
Std_ReturnType ComM_GetCurrentComMode(ComM_UserHandleType, ComM_ModeType*);
Std_ReturnType ComM_GetCurrentPNCComMode(ComM_UserHandleType, ComM_ModeType*);
Std_ReturnType ComM_GetMaxComMode(ComM_UserHandleType, ComM_ModeType*);
Std_ReturnType ComM_GetRequestedComMode(ComM_UserHandleType, ComM_ModeType*);
Std_ReturnType ComM_RequestComMode(ComM_UserHandleType, ComM_ModeType);
/* PRQA S 1512, 1513 -- */
/* PRQA S 1709, 1707 -- */
/* PRQA S 3451, 3449, 0624, 4152 -- */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
#endif /* RTE_COMM_H */
