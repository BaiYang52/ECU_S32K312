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
 * @file        : Rte_EcuM.h
 * @licence     : 
 * @date        : 2026-09-05 20:35:57
 * @customer    : iSoft
 * @description : Application Header File for 
SWC-EcuM
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
#ifndef RTE_ECUM_H
#define RTE_ECUM_H

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
#include "Rte_EcuM_Type.h"
#include "Rte_DataHandleType.h"

/*******************************************************************************
**                      Global Macros                                         **
*******************************************************************************/



/* Application Errors */
#define RTE_E_EcuM_StateRequest_E_OK 0U
#define RTE_E_EcuM_StateRequest_E_NOT_OK 1U
#define RTE_E_EcuM_ShutdownTarget_E_OK 0U
#define RTE_E_EcuM_ShutdownTarget_E_NOT_OK 1U
#define RTE_E_EcuM_BootTarget_E_OK 0U
#define RTE_E_EcuM_BootTarget_E_NOT_OK 1U
#define RTE_E_EcuM_Time_E_OK 0U
#define RTE_E_EcuM_Time_E_NOT_OK 1U

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
/* PRQA S 0787, 0786 ++ */ /* VL_Rte_SimilarIdentifier */
struct Rte_PDS_EcuM_EcuM_CurrentMode_P
{
    Std_ReturnType (*Switch_currentMode)(UInt8);
    Std_ReturnType (*SwitchAck_currentMode)(void);
};

/* Instance Handle */ 
struct Rte_CDS_EcuM
{
    struct Rte_PDS_EcuM_EcuM_CurrentMode_P currentMode;
    uint8 Instance_Id;
};
typedef struct Rte_CDS_EcuM Rte_CDS_EcuM; /* PRQA S 1310 */ /* VL_Rte_Standard */

#ifndef RTE_CORE    
typedef const Rte_CDS_EcuM * Rte_Instance;
typedef const struct Rte_PDS_EcuM_EcuM_CurrentMode_P * Rte_PortHandle_EcuM_CurrentMode_P;
#endif /* RTE_CORE */

/* PRQA S 0787, 0786 -- */
/*******************************************************************************
**                      Global Data Declaration                               **
*******************************************************************************/
extern const struct Rte_CDS_EcuM Rte_Instance_EcuM;

/* PRQA S 3449 ++ */ /* VL_Rte_Redeclaration */

/* PRQA S 3449 -- */

/* NvM RamBlockDataAddress */

/*******************************************************************************
**                      Global Functions                                      **
*******************************************************************************/
/* PRQA S 0787, 0786 ++ */ /* VL_Rte_SimilarIdentifier */
Std_ReturnType Rte_Switch_currentMode_currentMode_EcuM(UInt8 mode);

Std_ReturnType Rte_SwitchAck_currentMode_currentMode_EcuM(void);




/* PRQA S 0787, 0786 -- */

/* RTE-Component Interface. */ 
#ifndef RTE_CORE
/* PRQA S 0793, 0791 ++ */ /* VL_Rte_SimilarIdentifier */
/* Client-Server API Mapping */

/*Mode API Mapping---Start*/
#define Rte_Switch_currentMode_currentMode   Rte_Switch_currentMode_currentMode_EcuM


#define Rte_SwitchAck_currentMode_currentMode  Rte_SwitchAck_currentMode_currentMode_EcuM



/*Mode API Mapping---End*/
/* PRQA S 0793, 0791 -- */

/* ExclusiveAreas API Mapping ---Start */

/* ExclusiveAreas API Mapping ---End */
#endif /* RTE_CORE */

/* Runnable Entity Prototype. */ 
/* PRQA S 3451, 3449, 0624, 4152 ++ */ /* VL_Rte_Redeclaration */
#define RTE_RUNNABLE_EcuM_StateRequest_ReleasePOSTRUN EcuM_ReleasePOST_RUN   
#define RTE_RUNNABLE_EcuM_StateRequest_ReleaseRUN EcuM_ReleaseRUN   
#define RTE_RUNNABLE_EcuM_StateRequest_RequestPOSTRUN EcuM_RequestPOST_RUN   
#define RTE_RUNNABLE_EcuM_StateRequest_RequestRUN EcuM_RequestRUN   
#define RTE_RUNNABLE_EcuM_ShutdownTarget_GetLastShutdownTarget EcuM_GetLastShutdownTarget   
#define RTE_RUNNABLE_EcuM_ShutdownTarget_GetShutdownCause EcuM_GetShutdownCause   
#define RTE_RUNNABLE_EcuM_ShutdownTarget_GetShutdownTarget EcuM_GetShutdownTarget   
#define RTE_RUNNABLE_EcuM_ShutdownTarget_SelectShutdownCause EcuM_SelectShutdownCause   
#define RTE_RUNNABLE_EcuM_ShutdownTarget_SelectShutdownTarget EcuM_SelectShutdownTarget   
#define RTE_RUNNABLE_EcuM_MainFunction EcuM_MainFunction   
#define RTE_RUNNABLE_EcuM_BootTarget_GetBootTarget EcuM_GetBootTarget   
#define RTE_RUNNABLE_EcuM_BootTarget_SelectBootTarget EcuM_SelectBootTarget   
#define RTE_RUNNABLE_EcuM_Time_GetCurrentTime EcuM_GetCurrentTime   
#define RTE_RUNNABLE_EcuM_Time_GetWakeupTime EcuM_GetWakeupTime   

/* PRQA S 1709, 1707 ++ */ /* VL_Rte_Redeclaration_Diff */
/* PRQA S 1512, 1513 ++ */ /* VL_QAC_MultiDeclaration */
Std_ReturnType EcuM_ReleasePOST_RUN(EcuM_UserType);
Std_ReturnType EcuM_ReleaseRUN(EcuM_UserType);
Std_ReturnType EcuM_RequestPOST_RUN(EcuM_UserType);
Std_ReturnType EcuM_RequestRUN(EcuM_UserType);
Std_ReturnType EcuM_GetLastShutdownTarget(EcuM_ShutdownTargetType*, EcuM_ShutdownModeType*);
Std_ReturnType EcuM_GetShutdownCause(EcuM_ShutdownCauseType*);
Std_ReturnType EcuM_GetShutdownTarget(EcuM_ShutdownTargetType*, EcuM_ShutdownModeType*);
Std_ReturnType EcuM_SelectShutdownCause(EcuM_ShutdownCauseType);
Std_ReturnType EcuM_SelectShutdownTarget(EcuM_ShutdownTargetType, EcuM_ShutdownModeType);
void EcuM_MainFunction(void);
Std_ReturnType EcuM_GetBootTarget(EcuM_BootTargetType*);
Std_ReturnType EcuM_SelectBootTarget(EcuM_BootTargetType);
Std_ReturnType EcuM_GetCurrentTime(EcuM_TimeType*);
Std_ReturnType EcuM_GetWakeupTime(EcuM_TimeType*);
/* PRQA S 1512, 1513 -- */
/* PRQA S 1709, 1707 -- */
/* PRQA S 3451, 3449, 0624, 4152 -- */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
#endif /* RTE_ECUM_H */
