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
 * @file        : SchM_Type.h
 * @licence     : 
 * @date        : 2026-07-20 00:29:33
 * @customer    : iSoft
 * @description : SchM Type Header
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/
#ifndef SCHM_TYPE_H
#define SCHM_TYPE_H
/* PRQA S 3412, 3410, 0602, 1336  EOF */ /* VL_Rte_Standard */
/*******************************************************************************
** Include Section **
*******************************************************************************/
#include "Os.h"
#include "ComStack_Types.h"

/* Common SchM Errors */
#define SCHM_SERVICE_IDLE (0U)
#define SCHM_SERVICE_WRITING (1U)
#define SCHM_SERVICE_REQUEST (2U)
#define SCHM_SERVICE_BUSY (3U)
#define SCHM_SERVICE_FINISH (4U)

/*******************************************************************************
** Global Macros **
*******************************************************************************/
#define SCHM_SERVICE_PARAMETER_LENGTH_MAX 10u

#define SchM_GetCoreID() GetCoreID()

#define SCHM_QUEUE_FULL_WAIT(buffer, coreId) \
    while (NULL_PTR == buffer)               \
    {                                        \
        buffer = SchM_GetBuffer(coreId);     \
    }

#define SCHM_QUEUE_FULL_RETURN(buffer, coreId)  \
    if (NULL_PTR == buffer)                     \
    {                                           \
        return E_NOT_OK;                        \
    }

#define SCHM_PARAMETER_LENGTH_CHECK(type) \
    while (sizeof(type) >= (SCHM_SERVICE_PARAMETER_LENGTH_MAX * sizeof(uint32)))

#define SCHM_PARA2SERVICESTRUCT(type, buffer) \
    ((type *)&(buffer->serviceParameter[0]))

#define SCHM_SERVER_PROCESS_WAIT(buffer)          \
    while (SCHM_SERVICE_FINISH != buffer->status) \
        ;

#define SCHM_GET_RETURN_VALUE(parameter) (parameter->ret)

#define SCHM_SERVERBUFFER_LENGTH(CoreId)    ((sizeof(SchM_ServerBuffer_Core##CoreId)/sizeof(SchM_ServiceBufferType)))/* PRQA S 0342 */ /* VL_Rte_Standard */


/*******************************************************************************
** Global Data Types **
*******************************************************************************/

typedef uint8 SchM_QueueType;

typedef uint32 SchM_LockType;

typedef struct _SchM_ServiceBufferType
{
    void (*servicePtr)(struct _SchM_ServiceBufferType *);
    uint32 serviceParameter[SCHM_SERVICE_PARAMETER_LENGTH_MAX];
    uint8 status;
    struct _SchM_ServiceBufferType * next;
} SchM_ServiceBufferType;

/* SyncServiceEntrys */

/* AsynServiceEntrys */
#endif /*SCHM_TYPE_H*/
