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
 * @file        : Rte.c
 * @licence     : 
 * @date        : 2026-09-13 22:58:15
 * @customer    : iSoft
 * @description : RTE implementation file
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/

/* PRQA S 0791, 0779, 0787, 0789, 1710, 1712, 0793 EOF */ /* VL_Rte_SimilarIdentifier */
/* PRQA S 1505, 1503, 3219, 1514 EOF */ /* VL_QAC_NoUsedApi */
/* PRQA S 3218, 2962, 2972 EOF */ /* VL_Rte_GlobalVarUsed */
/* PRQA S 2992, 2996 EOF */ /* VL_Rte_AlwaysFalse */
/* PRQA S 2872 EOF */ /* VL_Rte_DeadLoop */
/* PRQA S 1294, 4304 EOF */ /* VL_Rte_VarInitTypeDiff */
/* PRQA S 3451, 3449, 1510, 1526, 1707 EOF */ /* VL_Rte_Redeclaration */
/* PRQA S 0759 EOF */ /* VL_Rte_UnionDefined */
/* PRQA S 4447, 3101, 3102, 3103, 2850, 1291, 1265 EOF */ /* VL_Rte_NumericSuffix */
/* PRQA S 1758, 1756 EOF */ /* VL_Rte_UniqueDefinition */
/* PRQA S 1504 EOF */ /* VL_QAC_OneRefSymbol */ 
/* PRQA S 1502 EOF */ /* VL_Rte_VariableNoUse */ 
/* PRQA S 3408 EOF */ /* VL_Rte_UnLinked */
/* PRQA S 2784, 1860 EOF */ /* VL_Rte_PtrArithmetic */
/* PRQA S 3335 EOF */ /* VL_Rte_NoDefination */
/* PRQA S 3200 EOF */ /* VL_Rte_ReturnValNoUsed */
/* PRQA S 4532, 4542, 1822, 2897, 4393, 0431 EOF */ /* VL_Rte_DataTypeImplicitConvert */
/* PRQA S 2986 EOF */ /* VL_Rte_RedundantCode */
/* PRQA S 6010, 6020, 6030, 6040, 6050, 6080, 6620, 6610, 6530, 6520 EOF */ /* VL_MTR_Rte_STCYC, VL_MTR_Rte_STLIN, VL_MTR_Rte_STMIF, VL_MTR_Rte_STPAR , VL_MTR_Rte_STST3, VL_MTR_Rte_STPTH, VL_MTR_Rte_STSCT, VL_MTR_Rte_STCDN, VL_MTR_Rte_STECT, VL_MTR_Rte_STVAR */
/* PRQA S 6510 EOF */ /* VL_MTR_Rte_CONF */ 
/* PRQA S 6540 EOF */ /* VL_MTR_Rte_STTPP */ 
/* PRQA S 3132, 3120 EOF */ /* VL_QAC_MagicNum */
/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

#define RTE_CORE

#include "Rte_Main.h"
#include "SchM.h"
#include "Os.h"
#include "Ioc.h"


#include "Rte_BswM.h"
#include "Rte_ComM.h"
#include "Rte_EcuM.h"

#include "Rte_Cbk.h"
#include "EcuM.h"



#include "SchM_Com.h"

/*******************************************************************************
**                      Private Macro Definitions                             **
*******************************************************************************/
#define RTE_UINT8_NO_DATA   0xFFU
#define RTE_UINT16_NO_DATA  0xFFFFU
#define RTE_UINT32_NO_DATA  0xFFFFFFFFU


#define RTE_ENTER_INTERNAL_INTRACORE SuspendAllInterrupts()
#define RTE_EXIT_INTERNAL_INTRACORE ResumeAllInterrupts()
/*******************************************************************************
**                      Private Data Types                                    **
*******************************************************************************/
/* Sender-Receive */


/* Client-Server */



/*******************************************************************************
**                      Private Function Declarations                         **
*******************************************************************************/




/* Client-Server */
/* SR */



/*******************************************************************************
**                      External Variable                                     **
*******************************************************************************/

extern void EcuM_StartupTwo(void);  

/*******************************************************************************
**                      Private Variable Definitions                          **
*******************************************************************************/
/* PBS */


/* Sender-Receive */
/* PRQA S 3218, 1294, 1504 ++ */ /* VL_Rte_GlobalVarUsed */ /* VL_Rte_VarInitTypeDiff */


/* PRQA S 3218, 1294, 1504 -- */





/* ExclusiveAreas */


/*******************************************************************************
**                      Global Function Definitions                          **
*******************************************************************************/
/* RTE-Component Interface */
/* Client-Server */
/* PRQA S 4152, 3678, 2743, 1290, 3138, 2481, 3344, 1258, 3200, 1503, 1504 ++ */ /* VL_Rte_SimilarIdentifier */
/* PRQA S 1505, 1532, 3673, 2996, 4461, 4436, 2998, 1840, 0597 ++ */ /* VL_Rte_DiffDataType*/
/* PRQA S 2016, 3315, 3396, 1842, 1862, 2961, 2972, 1860, 4393 ++ */ /* VL_Rte_MaCroDefExpression */
/* PRQA S 2016, 3315, 3396, 1842, 1862, 2961, 2972, 1860, 4393 -- */
/* PRQA S 1505, 1532, 3673, 2996, 4461, 4436, 2998, 1840, 0597 -- */
/* PRQA S 4152, 3678, 2743, 1290, 3138, 2481, 3344, 1258, 3200, 1503, 1504 -- */

/* Mode-Switch */
/* PRQA S 0316, 3432, 1840 ++ */ /* VL_Rte_VoidPtrtoObjPtr */ 
/* PRQA S 1258, 1505 ++ */ /* VL_Rte_MaCroDefExpression */ 
#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h" 
Std_ReturnType Rte_Switch_UM_ComMUser_0_currentMode_ComM(ComM_ModeType mode)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK Rte_Switch_UM_ComMUser_0_currentMode_ComM>
    */
    Std_ReturnType rtn = RTE_E_OK;
        (void)(mode);
        return rtn;

    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h" 
Std_ReturnType Rte_Switch_currentMode_currentMode_EcuM(UInt8 mode)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK Rte_Switch_currentMode_currentMode_EcuM>
    */
    Std_ReturnType rtn = RTE_E_OK;
        (void)(mode);
        return rtn;

    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h" 
Std_ReturnType Rte_SwitchAck_currentMode_currentMode_EcuM(void)
{    
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK Rte_SwitchAck_currentMode_currentMode_EcuM>
    */
        Std_ReturnType rtn = RTE_E_OK;
        return rtn;

    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"


/* PRQA S 1258, 1505 -- */
/* PRQA S 0316, 3432, 1840 -- */

/* Exclusive-area */
/*RTE Call-backs */
/* PRQA S 2481, 2743, 3344, 1290 ++ */ /* VL_Rte_GlobalVarUsed */
/* PRQA S 2743, 3203, 2983, 0787, 0786, 3200 ++ */ /* VL_Rte_DiffDataType */
/* PRQA S 2996, 6070, 1532 ++ */ /* VL_Rte_ReturnValNoUsed */




/* PRQA S 2996, 6070, 1532 -- */
/* PRQA S 2743, 3203, 2983, 0787, 0786, 3200 -- */
/* PRQA S 2481, 2743, 3344, 1290 -- */

/* Os Task */
/* PRQA S 2740,2870,3200,1258 ++ */ /* VL_Rte_AlwaysTrue */
/* PRQA S 1843,3209,3335,1532  ++ */ /* VL_Rte_DiffDataType */



#define OS_START_SEC_CODE
#include "Os_MemMap.h"
TASK(iSoft_Auto_DEFAULT_OsTask_Init)
{
    EcuM_StartupTwo();
    if (E_OK != TerminateTask())
    {
        while(1)
        {
            /* dead loop */
        }
    }
}
#define OS_STOP_SEC_CODE
#include "Os_MemMap.h"
/* PRQA S 1843,3209,3335,1532  -- */
/* PRQA S 2740,2870,3200,1258 -- */
/* NvRE */
/* PRQA S 3200, 1505 ++ */ /* VL_Rte_ReturnValNoUsed */

/* PRQA S 3200, 1505  -- */
/*******************************************************************************
**                      Private Function Definitions                          **
*******************************************************************************/
/* Rte Common Function */



/* Rte SR Function */
/* PRQA S 2996, 1290, 2991 ++ */ /* VL_Rte_AlwaysFalse */
/* PRQA S 3200, 3209, 3224, 2743 ++ */ /* VL_Rte_AlwaysTrue */
/* PRQA S 2481, 3344, 1505 ++ */ /* VL_Rte_DiffDataType */


/* PRQA S 2481, 3344, 1505 -- */
/* PRQA S 3200, 3209, 3224, 2743 -- */
/* PRQA S 2996, 1290, 2991 -- */

/* Rte SR Function */
/* PRQA S 3200,1258,4152,0316 ++ */ /* VL_Rte_VoidPtrtoObjPtr */
/* PRQA S 0311,2488,2481,2872 ++ */ /* VL_Rte_VoidPtrtoObjPtr */
/* PRQA S 3140,1505,1532 ++ */ /* VL_Rte_DiffDataType */




/* PRQA S 3140,1505,1532 -- */
/* PRQA S 0311,2488,2481,2872 -- */
/* PRQA S 3200,1258,4152,0316 -- */
/*******************************************************************************
**                      Transformer logic Definitions                         **
*******************************************************************************/
/* PRQA S 2743, 2991, 2995 ++ */ /* VL_Rte_AlwaysFalse */
/* PRQA S 3473, 0311 ++ */ /* VL_Rte_UnLinked */
/* PRQA S 2488,2481,3140 ++ */ /* VL_Rte_DiffDataType */

/* PRQA S 2488,2481,3140 -- */
/* PRQA S 3473, 0311 -- */
/* PRQA S 2743, 2991, 2995 -- */
/*******************************************************************************
**                      Global Variable Definitions                          **
*******************************************************************************/
#define RTE_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Rte_MemMap.h" 
/* PRQA S 1502, 1514 ++ */ /* VL_Rte_UnLinked */
/*Rte Instance:BswM*/
const struct Rte_CDS_BswM Rte_Instance_BswM = /* PRQA S 1533 */ /* VL_QAC_OneRefSymbol */
{    
    .Instance_Id = 0U,
};
/* PRQA S 1502, 1514 -- */
#define RTE_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Rte_MemMap.h"

#define RTE_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Rte_MemMap.h" 
/* PRQA S 1502, 1514 ++ */ /* VL_Rte_UnLinked */
/*Rte Instance:ComM*/
const struct Rte_CDS_ComM Rte_Instance_ComM = /* PRQA S 1533 */ /* VL_QAC_OneRefSymbol */
{    
    .UM_ComMUser_0 =
    {
        .Switch_currentMode = Rte_Switch_UM_ComMUser_0_currentMode_ComM,
    },
    .Instance_Id = 0U,
};
/* PRQA S 1502, 1514 -- */
#define RTE_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Rte_MemMap.h"

#define RTE_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Rte_MemMap.h" 
/* PRQA S 1502, 1514 ++ */ /* VL_Rte_UnLinked */
/*Rte Instance:EcuM*/
const struct Rte_CDS_EcuM Rte_Instance_EcuM = /* PRQA S 1533 */ /* VL_QAC_OneRefSymbol */
{    
    .currentMode =
    {
        .Switch_currentMode = Rte_Switch_currentMode_currentMode_EcuM,
        .SwitchAck_currentMode = Rte_SwitchAck_currentMode_currentMode_EcuM,
    },
    .Instance_Id = 0U,
};
/* PRQA S 1502, 1514 -- */
#define RTE_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Rte_MemMap.h"


