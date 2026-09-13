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
 * @file        : ComM_PBcfg.c
 * @licence     : 
 * @date        : 2026-09-13 17:06:53
 * @customer    : iSoft
 * @description : Post-Build configuration parameter of ComM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/
/* PRQA S 1531 EOF */ /* VL_QAC_OneRefSymbol */
/* =================================================== inclusions =================================================== */
#include "ComM_Cfg.h"
#include "ComM.h"
#include "ComM_Channel.h"
#include "ComM_User.h"

#include "CanSM.h"


/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */

/* ========================================== internal function declarations ======================================== */

/* PRQA S 3120, 3132 ++ */ /* VL_QAC_MagicNum */
/* ============================================ internal data definitions =========================================== */
#define COMM_START_SEC_CONFIG_DATA_16
#include "ComM_MemMap.h"
static const ComM_UserHandleType ComM_ChannelComMChannel_0Users[] =
{
    ComMConf_ComMUser_ComMUser_0,
};
#define COMM_STOP_SEC_CONFIG_DATA_16
#include "ComM_MemMap.h"


/* ============================================ external data definitions =========================================== */
#define COMM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "ComM_MemMap.h"
static const ComM_ChannelConfigType ComM_ChannelConfigs[COMM_CHANNEL_NUMBER] =
{
    {
        CanSM_RequestComMode,                                                      /* BusSMRequestComMode */
        0u,  /* NmLightTimeout */
        COMM_NM_VARIANT_NONE,                                    /* NmVariant */
        COMM_NOT_USED_CHANNEL_ID,                                                                  /* ManagingChannel */
        ComM_ChannelComMChannel_0Users,                                                       /* Users */
        1u,                                                        /* NumberOfUsers */
    },
};
#define COMM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "ComM_MemMap.h"


#define COMM_START_SEC_CONFIG_DATA_8
#include "ComM_MemMap.h"
static const NetworkHandleType ComM_UserComMUser_0Channels[] =
{
    ComMConf_ComMChannel_ComMChannel_0,
};
#define COMM_STOP_SEC_CONFIG_DATA_8
#include "ComM_MemMap.h"

#define COMM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "ComM_MemMap.h"
static const ComM_UserConfigType ComM_UserConfigs[COMM_USER_NUMBER] =
{
    {
        ComM_UserComMUser_0Channels,                    /* Channels */
        1u,                              /* NumberOfChannels */
    },
};
#define COMM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "ComM_MemMap.h"

#define COMM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "ComM_MemMap.h"
const ComM_ConfigType ComM_Config =
{
    ComM_ChannelConfigs,
    ComM_UserConfigs,
};
#define COMM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "ComM_MemMap.h"

/* PRQA S 3120, 3132 -- */ /* VL_QAC_MagicNum */

/* ========================================== external function definitions ========================================= */

/* ========================================== internal function definitions ========================================= */
