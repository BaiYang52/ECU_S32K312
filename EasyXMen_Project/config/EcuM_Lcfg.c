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
 * @file        : EcuM_Lcfg.c
 * @licence     : 
 * @date        : 2026-09-12 19:02:33
 * @customer    : iSoft
 * @description : Link-Time Configuration parameter of EcuM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/


/* =================================================== inclusions =================================================== */
#include "EcuM_Internal.h"

/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */

/* ========================================== internal function declarations ======================================== */

/* ============================================ internal data definitions =========================================== */

/* ============================================ external data definitions =========================================== */
#define ECUM_START_SEC_CONST_32
#include "EcuM_MemMap.h"
/*EcuMConfigConsistencyHash, a hash value generated across all pre-compile and
 *link-time parameters of all BSW modules. This hash value is compared against
 *a field in the EcuM_ConfigType and hence allows checking the consistency of
 *the entire configuration.*/
const uint32 EcuM_ConfigConsistencyHash = 1234u; /* PRQA S 1533 */ /* VL_QAC_OneRefSymbol */
#define ECUM_STOP_SEC_CONST_32
#include "EcuM_MemMap.h"

#define ECUM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "EcuM_MemMap.h"
ECUM_LOCAL EcuM_RunTimeLcType EcuM_LcRunData_Core0; /* PRQA S 3218 */ /* VL_EcuM_3218 */
#define ECUM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "EcuM_MemMap.h"

/* ========================================== external function definitions ========================================= */
#define ECUM_START_SEC_CODE
#include "EcuM_MemMap.h"
EcuM_RunTimeLcType * EcuM_GetLcRunDataPtr(void)
{
    return &EcuM_LcRunData_Core0;
}
#define ECUM_STOP_SEC_CODE
#include "EcuM_MemMap.h"



/* ========================================== internal function definitions ========================================= */
