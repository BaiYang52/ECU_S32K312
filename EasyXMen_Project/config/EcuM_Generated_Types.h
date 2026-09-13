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
 * @file        : EcuM_Generated_Types.h
 * @licence     : 
 * @date        : 2026-09-13 22:58:05
 * @customer    : iSoft
 * @description : configuration parameter of EcuM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/

#ifndef ECUM_GENERATED_TYPES_H
#define ECUM_GENERATED_TYPES_H

/* =================================================== inclusions =================================================== */
#include "Std_Types.h"
#ifdef __cplusplus
extern "C" {
#endif
/* ===================================================== macros ===================================================== */
#define ECUM_WKSOURCE(sourceId)   (uint32)((uint32)0x01uL << (sourceId))
/* EcuMWakeupSource */
#define EcuMWakeupSource   ECUM_WKSOURCE(6u)
#define EcuMConf_EcuMWakeupSource_EcuMWakeupSource  EcuMWakeupSource


/* ================================================ type definitions ================================================ */
/*********************Generated Configuration Types***************************/
typedef struct
{
    const void *bswMPbCfg;
    const void *schMPbCfg;
} EcuM_GenBSWPbCfgType;

/* ================================================ type definitions ================================================ */
 
/* ========================================== internal function definitions ========================================= */
 
/* =========================================== external data declarations =========================================== */
 
/* ========================================= external function declarations ========================================= */
#ifdef __cplusplus
}
#endif
#endif /* ECUM_GENERATED_TYPES_H */
