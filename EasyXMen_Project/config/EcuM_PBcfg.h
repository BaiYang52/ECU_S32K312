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
 * @file        : EcuM_PBcfg.h
 * @licence     : 
 * @date        : 2026-09-05 20:35:47
 * @customer    : iSoft
 * @description : Post-Build Configuration parameter of EcuM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/


#ifndef ECUM_PBCFG_H
#define ECUM_PBCFG_H
/* =================================================== inclusions =================================================== */
#include "EcuM_Types.h"
#include "Os.h"
#include "Mcu.h"
#include "ComStack_Types.h"

#ifdef __cplusplus
extern "C" {
#endif
/* ===================================================== macros ===================================================== */

#define ECUM_PBCFG_VARIANT__ID 0

 /* ================================================ type definitions ================================================ */
/** 
 * @brief Pre-bulid configuration type definition of ECUM wake up source.
 * 
 */
typedef struct 
{
    uint32 checkWkupTimeout;         /**> Time of the EcuM to delay shut down of the
                                       ECU if the check of the Wake up Source is done
                                       asynchronously,time uint of tool is sec, and
                                       generate in c file is ms. @range 0~0xFFFFFFFF */
    uint32 validationTimeout;        /**> the timeout is zero, there is no validation
                                        routine and the ECU Manager shall not validate
                                        the wake up source,time uint of tool is sec, and
                                       generate in c file is ms. @range 0~0xFFFFFFFF */
    uint32 wkSource;  /**> wake up source id bit representation*/
    boolean               isPolling; /**> describes if the wake up source needs polling. @range 0~1 */
    uint8 commChnNum; /**> channel number . @range 0~0xFF */
    const NetworkHandleType* comMChnl; /**> reference to a Network in COMM, INVALID value indicates wake up source not a communication channel. @range None */
 
    uint32               resetResasonNum; /**> number of reset reasons. @range 0~0xFFFFFFFF */
    const Mcu_ResetType* resetResasonPtr; /**> describes the mapping of reset reasons detected
                            by the MCU driver into wake up sources. @range None */
} EcuM_WakeupSourceCfgType;

/**
 * @brief Post build configuration root type definition
 * 
 */
typedef struct 
{
    uint32 configConsistencyHash;                      /**> Configuration consistency hash code for
                                                       pre-compile and link time configure. @range 0~0xFFFFFFFF */
    boolean                 IgnoreWakeupEvValOffPreOS; /**> EcuMIgnoreWakeupEvValOffPreOS. @range 0~1 */
    AppModeType             defaultAppMode;            /**> EcuMDefaultAppMode. @range 0~0xFFFFFFFF */
    EcuM_ShutdownTargetType defaultShutdownTgt;        /**> EcuMDefaultState. @range 0~0xFFFFFFFF */
    EcuM_ShutdownModeType   defaultShutdownMode;       /**> EcuMDefaultResetMode or
                                                         EcuMDefaultSleepMode. @range 0~0xFFFFFFFF */
    uint8 wkSourceNum; /* number of wake up sources. @range 0~0xFF */
    const EcuM_WakeupSourceCfgType* wkSourceCfgPtr;    /**> describes structure of wake up source. @range None */
    uint32 allWkSource; /**> bit representation of all wake up sources. @range 0~0xFFFFFFFF */
    const EcuM_GenBSWPbCfgType* modulePBCfg;           /**> PB CFG data pointer for modules. @range None */
} EcuM_PBConfigType;
/* ========================================== internal function definitions ========================================= */
 
/* =========================================== external data declarations =========================================== */

extern const EcuM_PBConfigType EcuM_Config;

 /* ========================================= external function declarations ========================================= */

#ifdef __cplusplus
}
#endif
#endif /* ECUM_PBCFG_H */
