
// /**
//  * COPYRIGHT
//  * ---------------------------------------------------------------------------------------------------------------------
//  * Copyright (c) iSOFT INFRASTRUCTURE SOFTWARE CO., LTD. This software is proprietary to
//  * iSOFT INFRASTRUCTURE SOFTWARE CO., LTD., and all rights are reserved by iSOFT INFRASTRUCTURE SOFTWARE CO., LTD.
//  * Without the express written permission of the company, no organization or individual may copy, install, trial,
//  * distribute, or reverse engineer this software. For terms of use and further details, please refer to the End User
//  * License Agreement (EULA) or contact us business@i-soft.com.cn for more assistance.
//  *
//  * This file contains code from , which is licensed under the LGPL-2.1. However, due to a special exception,
//  * you are not required to comply with the provisions of section 6a of LGPL-2.1. Specifically, you may distribute
//  * your software, including this file, under terms of your choice, including proprietary licenses, without needing to
//  * provide the source code or object code as specified in section 6a. For more details, please refer to the project's
//  * LICENSE and EXCEPTION files and the specific exception statement.
//  * ---------------------------------------------------------------------------------------------------------------------
//  * FILE DESCRIPTION
//  * ---------------------------------------------------------------------------------------------------------------------
//  * @MCU         : 
//  * @file        : 3.0.0
//  * @licence     : 
//  * @date        : CanIf MemMap Header
//  * @customer    : 
//  * @description : CanIf_MemMap.h
//  * @generator   : AUTOSAR classic Platform 2026-04-14 18:59:58
//  * @toolVersion : R23-11
//  **********************************************************************************************************************/

// /* PRQA S 0883,0791,0793,3116 ++ */ /* VL_MemMap_0883,VL_MemMap_0791,VL_MemMap_0793,VL_MemMap_3116 */

// #define MEMMAP_ERROR

// /* Total section items: 7 */
// #if defined(START_WITH_IF)
// #undef MEMMAP_ERROR

// /*Index:0  Section name : CONFIG_DATA_8*/
// #elif defined CANIF_START_SEC_CONFIG_DATA_8
// #undef CANIF_START_SEC_CONFIG_DATA_8
// #undef MEMMAP_ERROR
// #ifndef MEMMAP_ERROR_SEC_NO_MATCH
// #define MEMMAP_ERROR_SEC_NO_MATCH
// #else
// #error "CanIf_MemMap.h, section is used consecutively many times."
// #endif
// #define CANIF_START_SEC_CONFIG_DATA_8_NO_MATCH
// __attribute__((section("CONFIG_DATA.GLOBAL.CANIF.8")))

// #elif defined CANIF_STOP_SEC_CONFIG_DATA_8
// #undef CANIF_STOP_SEC_CONFIG_DATA_8
// #undef MEMMAP_ERROR
// #ifdef CANIF_START_SEC_CONFIG_DATA_8_NO_MATCH
// #undef CANIF_START_SEC_CONFIG_DATA_8_NO_MATCH
// #else
// #error "CanIf_MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_ERROR_SEC_NO_MATCH
// #undef MEMMAP_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */

// /*Index:1  Section name : CONFIG_DATA_16*/
// #elif defined CANIF_START_SEC_CONFIG_DATA_16
// #undef CANIF_START_SEC_CONFIG_DATA_16
// #undef MEMMAP_ERROR
// #ifndef MEMMAP_ERROR_SEC_NO_MATCH
// #define MEMMAP_ERROR_SEC_NO_MATCH
// #else
// #error "CanIf_MemMap.h, section is used consecutively many times."
// #endif
// #define CANIF_START_SEC_CONFIG_DATA_16_NO_MATCH
// __attribute__((section("CONFIG_DATA.GLOBAL.CANIF.16")))

// #elif defined CANIF_STOP_SEC_CONFIG_DATA_16
// #undef CANIF_STOP_SEC_CONFIG_DATA_16
// #undef MEMMAP_ERROR
// #ifdef CANIF_START_SEC_CONFIG_DATA_16_NO_MATCH
// #undef CANIF_START_SEC_CONFIG_DATA_16_NO_MATCH
// #else
// #error "CanIf_MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_ERROR_SEC_NO_MATCH
// #undef MEMMAP_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */

// /*Index:2  Section name : CONFIG_DATA_UNSPECIFIED*/
// #elif defined CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
// #undef CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED
// #undef MEMMAP_ERROR
// #ifndef MEMMAP_ERROR_SEC_NO_MATCH
// #define MEMMAP_ERROR_SEC_NO_MATCH
// #else
// #error "CanIf_MemMap.h, section is used consecutively many times."
// #endif
// #define CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED_NO_MATCH
// __attribute__((section("CONFIG_DATA.GLOBAL.CANIF.UNSPECIFIED")))

// #elif defined CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
// #undef CANIF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
// #undef MEMMAP_ERROR
// #ifdef CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED_NO_MATCH
// #undef CANIF_START_SEC_CONFIG_DATA_UNSPECIFIED_NO_MATCH
// #else
// #error "CanIf_MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_ERROR_SEC_NO_MATCH
// #undef MEMMAP_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */

// /*Index:3  Section name : VAR_CLEARED_PTR*/
// #elif defined CANIF_START_SEC_VAR_CLEARED_PTR
// #undef CANIF_START_SEC_VAR_CLEARED_PTR
// #undef MEMMAP_ERROR
// #ifndef MEMMAP_ERROR_SEC_NO_MATCH
// #define MEMMAP_ERROR_SEC_NO_MATCH
// #else
// #error "CanIf_MemMap.h, section is used consecutively many times."
// #endif
// #define CANIF_START_SEC_VAR_CLEARED_PTR_NO_MATCH
// __attribute__((section("VAR_CLEARED.GLOBAL.CANIF.PTR")))

// #elif defined CANIF_STOP_SEC_VAR_CLEARED_PTR
// #undef CANIF_STOP_SEC_VAR_CLEARED_PTR
// #undef MEMMAP_ERROR
// #ifdef CANIF_START_SEC_VAR_CLEARED_PTR_NO_MATCH
// #undef CANIF_START_SEC_VAR_CLEARED_PTR_NO_MATCH
// #else
// #error "CanIf_MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_ERROR_SEC_NO_MATCH
// #undef MEMMAP_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */

// /*Index:4  Section name : VAR_CLEARED_UNSPECIFIED*/
// #elif defined CANIF_START_SEC_VAR_CLEARED_UNSPECIFIED
// #undef CANIF_START_SEC_VAR_CLEARED_UNSPECIFIED
// #undef MEMMAP_ERROR
// #ifndef MEMMAP_ERROR_SEC_NO_MATCH
// #define MEMMAP_ERROR_SEC_NO_MATCH
// #else
// #error "CanIf_MemMap.h, section is used consecutively many times."
// #endif
// #define CANIF_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_MATCH
// __attribute__((section("VAR_CLEARED.GLOBAL.CANIF.UNSPECIFIED")))

// #elif defined CANIF_STOP_SEC_VAR_CLEARED_UNSPECIFIED
// #undef CANIF_STOP_SEC_VAR_CLEARED_UNSPECIFIED
// #undef MEMMAP_ERROR
// #ifdef CANIF_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_MATCH
// #undef CANIF_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_MATCH
// #else
// #error "CanIf_MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_ERROR_SEC_NO_MATCH
// #undef MEMMAP_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */

// /*Index:5  Section name : VAR_CLEARED_8*/
// #elif defined CANIF_START_SEC_VAR_CLEARED_8
// #undef CANIF_START_SEC_VAR_CLEARED_8
// #undef MEMMAP_ERROR
// #ifndef MEMMAP_ERROR_SEC_NO_MATCH
// #define MEMMAP_ERROR_SEC_NO_MATCH
// #else
// #error "CanIf_MemMap.h, section is used consecutively many times."
// #endif
// #define CANIF_START_SEC_VAR_CLEARED_8_NO_MATCH
// __attribute__((section("VAR_CLEARED.GLOBAL.CANIF.8")))

// #elif defined CANIF_STOP_SEC_VAR_CLEARED_8
// #undef CANIF_STOP_SEC_VAR_CLEARED_8
// #undef MEMMAP_ERROR
// #ifdef CANIF_START_SEC_VAR_CLEARED_8_NO_MATCH
// #undef CANIF_START_SEC_VAR_CLEARED_8_NO_MATCH
// #else
// #error "CanIf_MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_ERROR_SEC_NO_MATCH
// #undef MEMMAP_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */

// /*Index:6  Section name : CODE*/
// #elif defined CANIF_START_SEC_CODE
// #undef CANIF_START_SEC_CODE
// #undef MEMMAP_ERROR
// #ifndef MEMMAP_ERROR_SEC_NO_MATCH
// #define MEMMAP_ERROR_SEC_NO_MATCH
// #else
// #error "CanIf_MemMap.h, section is used consecutively many times."
// #endif
// #define CANIF_START_SEC_CODE_NO_MATCH
// __attribute__((section("CODE.GLOBAL.CANIF.UNSPECIFIED")))

// #elif defined CANIF_STOP_SEC_CODE
// #undef CANIF_STOP_SEC_CODE
// #undef MEMMAP_ERROR
// #ifdef CANIF_START_SEC_CODE_NO_MATCH
// #undef CANIF_START_SEC_CODE_NO_MATCH
// #else
// #error "CanIf_MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_ERROR_SEC_NO_MATCH
// #undef MEMMAP_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */


// #endif /* START_WITH_IF */


// #if defined MEMMAP_ERROR
// #error "CanIf_MemMap.h, wrong pragma command"
// #endif

// /* PRQA S 0883,0791,0793,3116 -- */
