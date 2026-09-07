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
 * @file        : EcuM_Callout_Stubs.c
 * @licence     : 
 * @date        : 2026-09-05 09:46:59
 * @customer    : iSoft
 * @description : Post-build configuration parameter of EcuM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/


/* =================================================== inclusions =================================================== */
#include "EcuM_Internal.h"
#include "EcuM_Cbk.h"
//#include "Can.h"
#include "CanIf.h"

/** DO NOT CHANGE THIS COMMENT!
* <USERBLOCK User Includes>
*/
/*User defined header file*/
/** DO NOT CHANGE THIS COMMENT!
* </USERBLOCK>
*/

/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */

/* ========================================== internal function declarations ======================================== */
/* ============================================ internal data definitions =========================================== */

/* ============================================ external data definitions =========================================== */

/* ========================================== external function definitions ========================================= */
#define ECUM_START_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"
/**
 * This function is an error hook that is called when an error occurs. It takes a reason code as a parameter to indicate the type of error.
 */
void EcuM_ErrorHook(uint16 reason)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_ErrorHook>
    */
    (void)reason;
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}

/**
 * This function sets the MCU mode to the specified mode.
 */
void EcuM_McuSetMode(Mcu_ModeType mode)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_McuSetMode>
    */
    Mcu_SetMode(mode);
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}

#if (ECUM_SET_PROGRAMMABLE_INTERRUPTS == STD_ON)
/**
 * This function is used to set programmable interrupts.
 */
void EcuM_AL_SetProgrammableInterrupts(void)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_AL_SetProgrammableInterrupts>
    */
    /* custom code.... */
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#endif /* ECUM_SET_PROGRAMMABLE_INTERRUPTS == STD_ON */

#if (ECUM_DRIVER_INIT_LIST_ZERO == STD_ON)
/**
 * This function initializes the driver with zero values.
 */
/* PRQA S 6070 ++ */ /* VL_MTR_EcuM_STCAL */
void EcuM_AL_DriverInitZero(void)
/* PRQA S 6070 -- */
{
}
#endif /* ECUM_DRIVER_INIT_LIST_ZERO == STD_ON */

/**
 * This function determines the power-by configuration and returns a pointer to the configuration type.
 */
const EcuM_ConfigType *EcuM_DeterminePbConfiguration(void)
{
    const EcuM_ConfigType *configPtr = NULL_PTR;
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_DeterminePbConfiguration>
    */
    /* custom code.... */
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
    configPtr = &EcuM_Config;
   
    return configPtr;
}

#if (ECUM_DRIVER_INIT_LIST_ONE == STD_ON)
/**
 * This function initializes the driver with one values.
 */
/* PRQA S 6070 ++ */ /* VL_MTR_EcuM_STCAL */
void EcuM_AL_DriverInitOne(void)
/* PRQA S 6070 -- */
{
    const EcuM_GenBSWPbCfgType * pbCfg = EcuM_ConfigPtr->modulePBCfg;
    /* PRQA S 0317 ++ */ /* VL_QAC_0317 */
    //Can_Init();
    /* PRQA S 0317 -- */
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_AL_DriverInitOne Other>
    */
    /* custom code.... */
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#endif /* ECUM_DRIVER_INIT_LIST_ONE == STD_ON */

/**
 * This function initializes the driver for BswM (Basic Software Module) using the provided initialization index.
 */
/* PRQA S 6070 ++ */ /* VL_MTR_EcuM_STCAL */
void EcuM_AL_DriverInitBswM(uint8 drvInitIdx)
/* PRQA S 6070 -- */
{
    const EcuM_GenBSWPbCfgType * pbCfg = EcuM_ConfigPtr->modulePBCfg;
    if (EcuMDriverInitListBswM_0 == drvInitIdx)
    {
        /* PRQA S 0317 ++ */ /* VL_QAC_0317 */
        //CanIf_Init();
        /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_AL_DriverInitBswM EcuMDriverInitListBswM_0>
    */
    /* custom code.... */
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
        /* PRQA S 0317 -- */
    }
    else
    {
        (void)drvInitIdx;
    }
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_AL_DriverInitBswM Other>
    */
    EcuM_GetLcRunDataPtr()->State = ECUM_STATE_RUN;
        BswM_EcuM_CurrentState(ECUM_STATE_RUN);
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}

#if (ECUM_RESET_LOOP_DETECTION == STD_ON)
/**
 * This function detects if a loop condition exists and returns a boolean value indicating the result.
 */
boolean EcuM_LoopDetection(void)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_LoopDetection>
    */
    return FALSE;
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#endif /* ECUM_RESET_LOOP_DETECTION == STD_ON */

/**
 * This function performs actions when transitioning to the off state with a value of one.
 */
void EcuM_OnGoOffOne(void)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_OnGoOffOne>
    */
    /* custom code.... */
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}

/**
 * This function performs actions when transitioning to the off state with a value of two.
 */
void EcuM_OnGoOffTwo(void)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_OnGoOffTwo>
    */
    /* custom code.... */
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}

/**
 * This function switches off the specified component or system.
 */
void EcuM_AL_SwitchOff(void)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_AL_SwitchOff>
    */
    /* custom code.... */
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}

/**
 * This function resets the specified component or system based on the provided reset type.
 */
void EcuM_AL_Reset(EcuM_ResetType reset)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_AL_Reset>
    */
    (void)reset;
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}

/**
 * This function enables the specified wakeup sources for the ECU.
 */
void EcuM_EnableWakeupSources(EcuM_WakeupSourceType wakeupSource)
{
    switch (wakeupSource)
    {
        case EcuMWakeupSource:
        {
            /** DO NOT CHANGE THIS COMMENT!
            * <USERBLOCK EcuM_EnableWakeupSources EcuMWakeupSource>
            */
            /* custom code.... */
            /** DO NOT CHANGE THIS COMMENT!
            * </USERBLOCK>
            */
            break;
        }
        default:
        {
            (void)wakeupSource;
            break;
        }
    }
}

/**
 * This function generates a hash of the RAM contents.
 */
void EcuM_GenerateRamHash(void)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_GenerateRamHash>
    */
    /* custom code.... */
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}

/**
 * This function handles the sleep activity for the ECU.
 */
void EcuM_SleepActivity(void)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_SleepActivity>
    */
    /* custom code.... */
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}

/**
 * This function starts checking the specified wakeup source for the ECU.
 */
void EcuM_StartCheckWakeup(EcuM_WakeupSourceType WakeupSource)
{
    switch (WakeupSource)
    {
        case EcuMWakeupSource:
        {
            /** DO NOT CHANGE THIS COMMENT!
            * <USERBLOCK EcuM_StartCheckWakeup EcuMWakeupSource>
            */
            /* custom code.... */
            /** DO NOT CHANGE THIS COMMENT!
            * </USERBLOCK>
            */
            break;
        }
        default:
        {
            (void)WakeupSource;
            break;
        }
    }
}


/**
 * This function checks the hash of the RAM contents and returns the result.
 */
uint8 EcuM_CheckRamHash(void)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_CheckRamHash>
    */
    return 1u;
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}

/**
 * This function disables the specified wakeup sources for the ECU.
 */
void EcuM_DisableWakeupSources(EcuM_WakeupSourceType wakeupSource)
{
    if ((wakeupSource & EcuMWakeupSource) == EcuMWakeupSource)
    {
        /** DO NOT CHANGE THIS COMMENT!
        * <USERBLOCK EcuM_DisableWakeupSources EcuMWakeupSource>
        */
        /* custom code.... */
        /** DO NOT CHANGE THIS COMMENT!
        * </USERBLOCK>
        */
    }
    else
    {
        (void)wakeupSource;
    }
}


#if (ECUM_DRIVER_RESTART_LIST == STD_ON)
/**
 * This function restarts the driver for the ECU.
 */
void EcuM_AL_DriverRestart(void)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_AL_DriverRestart>
    */
    /* custom code.... */
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}
#endif /* ECUM_DRIVER_RESTART_LIST == STD_ON */

/**
 * This function starts the specified wakeup sources for the ECU.
 */
void EcuM_StartWakeupSources(EcuM_WakeupSourceType wakeupSource)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_StartWakeupSources>
    */
    (void)wakeupSource;
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}

/**
 * This function checks the validation of the specified wakeup source for the ECU.
 */
void EcuM_CheckValidation(EcuM_WakeupSourceType wakeupSource)
{
    switch (wakeupSource)
    {
        case EcuMWakeupSource:
        {
            /** DO NOT CHANGE THIS COMMENT!
            * <USERBLOCK EcuM_CheckValidation EcuMWakeupSource>
            */
            (void)wakeupSource;
            /** DO NOT CHANGE THIS COMMENT!
            * </USERBLOCK>
            */
            break;
        }
        default:
        {
            (void)wakeupSource;
            break;
        }
    }
}

/**
 * This function stops the specified wakeup sources for the ECU.
 */
void EcuM_StopWakeupSources(EcuM_WakeupSourceType wakeupSource)
{
    /** DO NOT CHANGE THIS COMMENT!
    * <USERBLOCK EcuM_StopWakeupSources>
    */
    (void)wakeupSource;
    /** DO NOT CHANGE THIS COMMENT!
    * </USERBLOCK>
    */
}


#define ECUM_STOP_SEC_CALLOUT_CODE
#include "EcuM_MemMap.h"

#define ECUM_START_SEC_CODE_FAST
#include "EcuM_MemMap.h"
/**
 * This function checks the wakeup hook for the specified wakeup source.
 */
void EcuM_CheckWakeupHook(EcuM_WakeupSourceType wakeupSource)
{
    switch (wakeupSource)
    {
        case EcuMWakeupSource:
        {
            /** DO NOT CHANGE THIS COMMENT!
            * <USERBLOCK EcuM_CheckWakeup EcuMWakeupSource>
            */
            EcuM_StartCheckWakeup(EcuMWakeupSource);
            /** DO NOT CHANGE THIS COMMENT!
            * </USERBLOCK>
            */
            break;
        }
        default:
        {
            (void)wakeupSource;
            break;
        }
    }
}
#define ECUM_STOP_SEC_CODE_FAST
#include "EcuM_MemMap.h"

/* ========================================== internal function definitions ========================================= */
/** DO NOT CHANGE THIS COMMENT!
* <USERBLOCK EcuM Code Other>
*/
/* custom code.... */
/** DO NOT CHANGE THIS COMMENT!
* </USERBLOCK>
*/


