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
 * @file        : Rte_Type.h
 * @licence     : 
 * @date        : 2026-09-05 09:47:06
 * @customer    : iSoft
 * @description : Header file containing user defined AUTOSAR types
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/
#ifndef RTE_TYPE_H
#define RTE_TYPE_H
/* PRQA S 1336 EOF */ /* VL_Rte_NoFuncParaIdentifier */
/* PRQA S 0631, 1508, 1506 EOF */ /* VL_Rte_Mutitypedef */
/* PRQA S 1710, 4152 EOF */ /* VL_Rte_SimilarIdentifier */
/* PRQA S 0750 EOF */ /* VL_Rte_UnionDefined */
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Rte.h"

/*******************************************************************************
**                      Global Macros                                         **
*******************************************************************************/
#define RTE_MODE_ComMMode ((uint8)0U)
#define RTE_MODE_EcuM_Mode ((uint8)1U)

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
typedef struct
{
    uint16 clientId;
    uint16 sequenceCounter;
} Rte_Cs_TransactionHandleType;
typedef uint8 * uint8_ptr;
typedef uint8 uint8_Cs;
typedef uint16 uint16_Cs;

typedef uint16 uint16_Mode;

typedef boolean Boolean;
typedef sint8 SInt8;
typedef sint16 SInt16;
typedef sint32 SInt32;
typedef uint8 UInt8;
typedef uint16 UInt16;
typedef uint32 UInt32;
typedef uint64 UInt64;
typedef float32 Float32;
typedef float64 Float64;
typedef uint8 ComM_ModeType;
typedef uint8 ComM_InhibitionStatusType;
typedef uint16 ComM_UserHandleType;
typedef uint8 NetWorkHandleType;
typedef uint8 EcuM_UserType;
typedef uint32 EcuM_TimeType;
typedef uint8 EcuM_BootTargetType;
typedef uint16 EcuM_ShutdownModeType;
typedef uint8 EcuM_ShutdownTargetType;
typedef uint8 EcuM_ShutdownCauseType;

/* User defined Data Type */
#ifndef RTE_TRANSITION_ComMMode
#define RTE_TRANSITION_ComMMode 3U
#endif
    
#ifndef RTE_MODE_ComMMode_COMM_FULL_COMMUNICATION
#define RTE_MODE_ComMMode_COMM_FULL_COMMUNICATION 0U
#endif
#ifndef RTE_MODE_ComMMode_COMM_NO_COMMUNICATION
#define RTE_MODE_ComMMode_COMM_NO_COMMUNICATION 1U
#endif
#ifndef RTE_MODE_ComMMode_COMM_SILENT_COMMUNICATION
#define RTE_MODE_ComMMode_COMM_SILENT_COMMUNICATION 2U
#endif

#ifndef RTE_TRANSITION_EcuM_Mode
#define RTE_TRANSITION_EcuM_Mode 5U
#endif
    
#ifndef RTE_MODE_EcuM_Mode_POST_RUN
#define RTE_MODE_EcuM_Mode_POST_RUN 0U
#endif
#ifndef RTE_MODE_EcuM_Mode_RUN
#define RTE_MODE_EcuM_Mode_RUN 1U
#endif
#ifndef RTE_MODE_EcuM_Mode_SHUTDOWN
#define RTE_MODE_EcuM_Mode_SHUTDOWN 2U
#endif
#ifndef RTE_MODE_EcuM_Mode_SLEEP
#define RTE_MODE_EcuM_Mode_SLEEP 3U
#endif
#ifndef RTE_MODE_EcuM_Mode_STARTUP
#define RTE_MODE_EcuM_Mode_STARTUP 4U
#endif



typedef ComM_ModeType Rte_ModeType_ComMMode;
typedef UInt8 Rte_ModeType_EcuM_Mode;


typedef struct
{
    void* currentMode;
    void* nextMode;
    void* fromMode;
    uint8 qRear;
    uint8 qFront;
    uint8 inTransition;
    Std_ReturnType fbVar;
} Rte_ModeMachine_Type;

#define Rte_ModeConvert(type,var) *((type*)(var))




typedef enum
{
    RTE_STATE_RTE_UNINIT,
    RTE_STATE_SCHM_START,
    RTE_STATE_SCHM_INIT, 
    RTE_STATE_RTE_INIT   
} Rte_StateType;














/*******************************************************************************
**                      Global Data Declaration                               **
*******************************************************************************/

/*******************************************************************************
**                      Global Functions                                      **
*******************************************************************************/

#endif /*RTE_TYPE_H*/
