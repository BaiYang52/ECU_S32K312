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
 * @file        : SchM.c
 * @licence     : 
 * @date        : 2026-09-13 22:58:15
 * @customer    : iSoft
 * @description : SchM Source
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/
/* PRQA S 6510, 3132, 3120 EOF */ /* VL_MTR_Rte_CONF */
/* PRQA S 1532, 1504, 1505, 1514 EOF */ /* VL_QAC_MagicNum */
/*******************************************************************************
** Include Section **
*******************************************************************************/
#include "SchM_Internal.h"
#include "SchM.h"


#define RTE_START_SEC_VAR_INIT_GLOBAL_UNSPECIFIED
#include "Rte_MemMap.h" 
SchM_LockType SchM_ServiceBufferLock[1] = {0};/* PRQA S 3408 */ /* VL_Rte_UnLinked */

#define RTE_STOP_SEC_VAR_INIT_GLOBAL_UNSPECIFIED
#include "Rte_MemMap.h"


#define RTE_START_SEC_VAR_INIT_GLOBAL_UNSPECIFIED
#include "Rte_MemMap.h" 
SchM_LockType SchM_IdleBufferLock[1] = {0};/* PRQA S 3408 */ /* VL_Rte_UnLinked */

#define RTE_STOP_SEC_VAR_INIT_GLOBAL_UNSPECIFIED
#include "Rte_MemMap.h"


#define RTE_START_SEC_VAR_CLEARED_GLOBAL_UNSPECIFIED
#include "Rte_MemMap.h" 
static SchM_ServiceBufferType SchM_ServerBuffer_Core0[1];

#define RTE_STOP_SEC_VAR_CLEARED_GLOBAL_UNSPECIFIED
#include "Rte_MemMap.h"



#define RTE_START_SEC_VAR_INIT_GLOBAL_UNSPECIFIED
#include "Rte_MemMap.h" 
static SchM_ServiceBufferType * volatile SchM_ServerBuffer[1] = /* PRQA S 3218,3678,3232 */ /* VL_Rte_GlobalVarUsed */
{
    SchM_ServerBuffer_Core0,
};

#define RTE_STOP_SEC_VAR_INIT_GLOBAL_UNSPECIFIED
#include "Rte_MemMap.h"


#define RTE_START_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h" 
const SchM_QueueType SchM_ServiceQueueSize[1] = /* PRQA S 3408 */ /* VL_Rte_UnLinked */
{
    SCHM_SERVERBUFFER_LENGTH(0),/* PRQA S 4464 */ /* VL_Rte_DiffDataType */
};

#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h"


#define RTE_START_SEC_VAR_CLEARED_GLOBAL_UNSPECIFIED
#include "Rte_MemMap.h" 
SchM_ServiceBufferType * volatile SchM_ServiceIdleQueuePtr[1];/* PRQA S 3408 */ /* VL_Rte_UnLinked */

#define RTE_STOP_SEC_VAR_CLEARED_GLOBAL_UNSPECIFIED
#include "Rte_MemMap.h"


#define RTE_START_SEC_VAR_CLEARED_GLOBAL_UNSPECIFIED
#include "Rte_MemMap.h" 
SchM_ServiceBufferType * volatile SchM_ServiceProcessQueueHeadPtr[1];/* PRQA S 3408 */ /* VL_Rte_UnLinked */

#define RTE_STOP_SEC_VAR_CLEARED_GLOBAL_UNSPECIFIED
#include "Rte_MemMap.h"


#define RTE_START_SEC_VAR_CLEARED_GLOBAL_UNSPECIFIED
#include "Rte_MemMap.h" 
SchM_ServiceBufferType * volatile SchM_ServiceProcessQueueTailPtr[1];/* PRQA S 3408 */ /* VL_Rte_UnLinked */

#define RTE_STOP_SEC_VAR_CLEARED_GLOBAL_UNSPECIFIED
#include "Rte_MemMap.h"


/* SchM Lifecycle */

/* PRQA S 3408, 1840, 1290 ++ */ /* VL_Rte_UnLinked */
/* PRQA S 3442, 3345 ++ */ /* VL_Rte_VoidPtrtoObjPtr */
/* PRQA S 3200 ++ */ /* VL_Rte_ReturnValNoUsed */

#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h" 
void SchM_Service_Init(CoreIdType coreId)
{
    uint32 size = SchM_ServiceQueueSize[coreId];
    for (uint32 index = 0; index < (size - 1); index++ )
    {
        SchM_ServiceBufferType* tempPtr = &SchM_ServerBuffer[coreId][index + 1];
        SchM_ServerBuffer[coreId][index].next = tempPtr;
        
    }
    SchM_ServerBuffer[coreId][size - 1].next = NULL_PTR;
    SchM_ServiceIdleQueuePtr[coreId] = &SchM_ServerBuffer[coreId][0];
    SchM_ServiceProcessQueueTailPtr[coreId] = NULL_PTR;
}

#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"


#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h" 
void SchM_Init(const SchM_ConfigType * ConfigPtr)
{

    
    (void)ConfigPtr;
}
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
/* PRQA S 3200 -- */
/* PRQA S 3442, 3345 -- */
/* PRQA S 3408, 1840, 1290 -- */

/* PRQA S 3408 ++ */ /* VL_Rte_UnLinked */
#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h" 
void SchM_Start(void)
{
    uint32 coreId = GetCoreID();
}
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
/* PRQA S 3408 -- */

/* PRQA S 3408,0597,4436,3200,2016 ++ */ /* VL_Rte_SwitchEndNoJump */
#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h" 
void SchM_StartTiming(void)
{

}
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
/* PRQA S 3408,0597,4436,3200,2016 -- */

/* PRQA S 3408,3200,0597,2016 ++ */ /* VL_Rte_SwitchEndNoJump */
#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h" 
void SchM_Deinit(void)
{
}
#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"
/* PRQA S 3408,3200,0597,2016 -- */

/* PRQA S 3408,3209,4440,4404,1881 ++ */ /* VL_Rte_UnLinked */
/* PRQA S 3200,3442,3673,2872,3007 ++ */ /* VL_Rte_DiffDataType */
/* PRQA S 1290,0310,3432,3678 ++ */ /* VL_Rte_SwitchEndNoJump */
#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h" 
boolean SchM_Lock(SchM_LockType * addr)
{
    boolean result;
    do
    {
        result = SchM_CmpSwap(addr, FALSE, TRUE);
    } while(result != E_OK);
    return result;
}

#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"


#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h" 
boolean SchM_Unlock(SchM_LockType * addr)
{
    boolean result;
    do
    {
        result = SchM_CmpSwap(addr, TRUE, FALSE);

    } while(result != E_OK);
    return result;
}

#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"


#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h" 
SchM_ServiceBufferType * SchM_GetBuffer(CoreIdType coreId)
{
    SchM_ServiceBufferType * buffer = NULL_PTR;
    SchM_Lock(&SchM_IdleBufferLock[coreId]);
    buffer = SchM_ServiceIdleQueuePtr[coreId];
    if (NULL_PTR != buffer)
    {
        SchM_ServiceIdleQueuePtr[coreId] = buffer->next;
        buffer->next = NULL_PTR;
    }
    SchM_Unlock(&SchM_IdleBufferLock[coreId]);

    return buffer;
}

#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"


#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h" 
void SchM_AppendBuffer(CoreIdType coreId, SchM_ServiceBufferType * buffer)
{
    SchM_Lock(&SchM_ServiceBufferLock[coreId]);
    buffer->status = SCHM_SERVICE_REQUEST;
    if (NULL_PTR != SchM_ServiceProcessQueueTailPtr[coreId])
    {
        SchM_ServiceProcessQueueTailPtr[coreId]->next = buffer;
        SchM_ServiceProcessQueueTailPtr[coreId] = buffer;
    }
    else
    {
        SchM_ServiceProcessQueueHeadPtr[coreId] = buffer;
        SchM_ServiceProcessQueueTailPtr[coreId] = buffer;
    }
    SchM_Unlock(&SchM_ServiceBufferLock[coreId]);
}

#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"


#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h" 
SchM_ServiceBufferType * SchM_TakeBuffer(CoreIdType coreId)
{
    SchM_ServiceBufferType * buffer = NULL_PTR;

    SchM_Lock(&SchM_ServiceBufferLock[coreId]);
    buffer = SchM_ServiceProcessQueueHeadPtr[coreId];
    if (NULL_PTR != buffer)
    {
        SchM_ServiceProcessQueueHeadPtr[coreId] = buffer->next;
        if (NULL_PTR == buffer->next)
        {
            SchM_ServiceProcessQueueTailPtr[coreId] = NULL_PTR;
        }
        else
        {
            buffer->next = NULL_PTR;
        }
        buffer->status = SCHM_SERVICE_BUSY;
    }
    SchM_Unlock(&SchM_ServiceBufferLock[coreId]);
    return buffer;
}

#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"


#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h" 
void SchM_UpdateBuffer(SchM_ServiceBufferType * buffer)
{
    buffer->status = SCHM_SERVICE_FINISH;
}

#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"


#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h" 
void SchM_ReleaseBuffer(CoreIdType coreId, SchM_ServiceBufferType * buffer)
{
    SchM_Lock(&SchM_IdleBufferLock[coreId]);

    buffer->status = SCHM_SERVICE_IDLE;
    buffer->next = SchM_ServiceIdleQueuePtr[coreId];
    SchM_ServiceIdleQueuePtr[coreId] = buffer;
    SchM_Unlock(&SchM_IdleBufferLock[coreId]);
}

#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"


#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h" 
void SchM_ServiceProcessWait(CoreIdType coreId, SchM_ServiceBufferType * buffer)
{
    SchM_ServiceBufferType * localBuffer;
    while (SCHM_SERVICE_FINISH != buffer->status)
    {
            localBuffer = SchM_TakeBuffer(coreId);
            if (NULL_PTR != localBuffer)
            {
                localBuffer->servicePtr(localBuffer);
            }
    }
}

#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"


#define RTE_START_SEC_CODE_GLOBAL
#include "Rte_MemMap.h" 
void SchM_Service_Function_Core0()
{
    SchM_ServiceBufferType * buffer;
    do 
    {
        SuspendAllInterrupts();
        buffer = SchM_TakeBuffer(0);
        ResumeAllInterrupts();
        if (NULL_PTR != buffer)
        {
            buffer->servicePtr(buffer);
        }
    } while(NULL_PTR != buffer);
}

#define RTE_STOP_SEC_CODE_GLOBAL
#include "Rte_MemMap.h"




/* PRQA S 1290,0310,3432,3678 -- */
/* PRQA S 3200,3442,3673,2872,3007 -- */
/* PRQA S 3408,3209,4440,4404,1881 -- */
