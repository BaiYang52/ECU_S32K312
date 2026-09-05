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
//  * @date        : MemMap Header
//  * @customer    : 
//  * @description : MemMap.h
//  * @generator   : AUTOSAR classic Platform 2026-04-14 18:59:58
//  * @toolVersion : R23-11
//  **********************************************************************************************************************/
// /**
//   \page ISOFT_MISRA_Exceptions  MISRA-C:2012 Compliance Exceptions
//     ModeName:MemMap<br>
//   RuleSorce:puhua_rules-2024.12.rcf

//    \li VL_MemMap_0883
//     Reason:MemMap.h needs to be dynamically referenced multiple times based on pre compiled macros,
//             so that duplicate inclusion protection cannot be used.
//     Risk: Incorrect referencing can lead to functional abnormalities.
//     Prevention: Check reference validity through additional verification methods.

//     \li VL_MemMap_0791
//     Reason: According to the segment name definition rules of the autosar specification, segment names may be
//             very long and only a few characters may differ between segment names.
//     Risk: It depends on the user configuration, no risk.
//     Prevention: Check reference validity through additional verification methods.
//     \li VL_MemMap_0793
//     Reason: The segment name definition rules of the autosar specification require that the segment name
//             should be unique within the memory map.
//     Risk: It depends on the user configuration, no risk.
//     Prevention: Check reference validity through additional verification methods.

//     \li VL_MemMap_3116
//     Reason: This segment is unused in the current module.
//     Risk: It depends on the user configuration, no risk.
//     Prevention: Check reference validity through additional verification methods.

//     \li VL_MemMap_2053
//     Reason: The complexity of engineering integration makes it impossible to require external code to comply with the internal memmap fields.
//     Risk: The occurrence of memory segments prone to errors
//     Prevention: The internal modules are strictly checked according to the fields and integrated into the CI process.
//  */

// /* PRQA S 0883,0791,0793,3116 ++ */ /* VL_MemMap_0883,VL_MemMap_0791,VL_MemMap_0793,VL_MemMap_3116 */

// #define MEMMAP_H_ERROR

// #if defined(START_WITH_IF)
// #undef MEMMAP_H_ERROR

// /*Index:0  Section name : CALIB_64*/
// #elif defined START_SEC_CALIB_64
// #undef START_SEC_CALIB_64
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CALIB_64_NO_MATCH
// __attribute__((section("CALIB.GLOBAL.DEFAULT.64")))

// #elif defined STOP_SEC_CALIB_64
// #undef STOP_SEC_CALIB_64
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CALIB_64_NO_MATCH
// #undef START_SEC_CALIB_64_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:1  Section name : CALIB_UNSPECIFIED*/
// #elif defined START_SEC_CALIB_UNSPECIFIED
// #undef START_SEC_CALIB_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CALIB_UNSPECIFIED_NO_MATCH
// __attribute__((section("CALIB.GLOBAL.DEFAULT.UNSPECIFIED")))

// #elif defined STOP_SEC_CALIB_UNSPECIFIED
// #undef STOP_SEC_CALIB_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CALIB_UNSPECIFIED_NO_MATCH
// #undef START_SEC_CALIB_UNSPECIFIED_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:2  Section name : CALIB_PTR*/
// #elif defined START_SEC_CALIB_PTR
// #undef START_SEC_CALIB_PTR
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CALIB_PTR_NO_MATCH
// __attribute__((section("CALIB.GLOBAL.DEFAULT.PTR")))

// #elif defined STOP_SEC_CALIB_PTR
// #undef STOP_SEC_CALIB_PTR
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CALIB_PTR_NO_MATCH
// #undef START_SEC_CALIB_PTR_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:3  Section name : CALIB_32*/
// #elif defined START_SEC_CALIB_32
// #undef START_SEC_CALIB_32
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CALIB_32_NO_MATCH
// __attribute__((section("CALIB.GLOBAL.DEFAULT.32")))

// #elif defined STOP_SEC_CALIB_32
// #undef STOP_SEC_CALIB_32
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CALIB_32_NO_MATCH
// #undef START_SEC_CALIB_32_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:4  Section name : CALIB_16*/
// #elif defined START_SEC_CALIB_16
// #undef START_SEC_CALIB_16
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CALIB_16_NO_MATCH
// __attribute__((section("CALIB.GLOBAL.DEFAULT.16")))

// #elif defined STOP_SEC_CALIB_16
// #undef STOP_SEC_CALIB_16
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CALIB_16_NO_MATCH
// #undef START_SEC_CALIB_16_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:5  Section name : CALIB_8*/
// #elif defined START_SEC_CALIB_8
// #undef START_SEC_CALIB_8
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CALIB_8_NO_MATCH
// __attribute__((section("CALIB.GLOBAL.DEFAULT.8")))

// #elif defined STOP_SEC_CALIB_8
// #undef STOP_SEC_CALIB_8
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CALIB_8_NO_MATCH
// #undef START_SEC_CALIB_8_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:6  Section name : CALIB_BOOLEAN*/
// #elif defined START_SEC_CALIB_BOOLEAN
// #undef START_SEC_CALIB_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CALIB_BOOLEAN_NO_MATCH
// __attribute__((section("CALIB.GLOBAL.DEFAULT.BOOLEAN")))

// #elif defined STOP_SEC_CALIB_BOOLEAN
// #undef STOP_SEC_CALIB_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CALIB_BOOLEAN_NO_MATCH
// #undef START_SEC_CALIB_BOOLEAN_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:7  Section name : CALLOUT_CODE*/
// #elif defined START_SEC_CALLOUT_CODE
// #undef START_SEC_CALLOUT_CODE
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CALLOUT_CODE_NO_MATCH
// __attribute__((section("CALLOUT_CODE.GLOBAL.DEFAULT.64")))

// #elif defined STOP_SEC_CALLOUT_CODE
// #undef STOP_SEC_CALLOUT_CODE
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CALLOUT_CODE_NO_MATCH
// #undef START_SEC_CALLOUT_CODE_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:8  Section name : VAR_FAST_POWER_ON_CLEARED_64*/
// #elif defined START_SEC_VAR_FAST_POWER_ON_CLEARED_64
// #undef START_SEC_VAR_FAST_POWER_ON_CLEARED_64
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_FAST_POWER_ON_CLEARED_64_NO_MATCH
// __attribute__((section("VAR_FAST_POWER_ON_CLEARED.GLOBAL.DEFAULT.64")))

// #elif defined STOP_SEC_VAR_FAST_POWER_ON_CLEARED_64
// #undef STOP_SEC_VAR_FAST_POWER_ON_CLEARED_64
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_FAST_POWER_ON_CLEARED_64_NO_MATCH
// #undef START_SEC_VAR_FAST_POWER_ON_CLEARED_64_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:9  Section name : VAR_FAST_POWER_ON_CLEARED_UNSPECIFIED*/
// #elif defined START_SEC_VAR_FAST_POWER_ON_CLEARED_UNSPECIFIED
// #undef START_SEC_VAR_FAST_POWER_ON_CLEARED_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_FAST_POWER_ON_CLEARED_UNSPECIFIED_NO_MATCH
// __attribute__((section("VAR_FAST_POWER_ON_CLEARED.GLOBAL.DEFAULT.UNSPECIFIED")))

// #elif defined STOP_SEC_VAR_FAST_POWER_ON_CLEARED_UNSPECIFIED
// #undef STOP_SEC_VAR_FAST_POWER_ON_CLEARED_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_FAST_POWER_ON_CLEARED_UNSPECIFIED_NO_MATCH
// #undef START_SEC_VAR_FAST_POWER_ON_CLEARED_UNSPECIFIED_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:10  Section name : VAR_FAST_POWER_ON_CLEARED_PTR*/
// #elif defined START_SEC_VAR_FAST_POWER_ON_CLEARED_PTR
// #undef START_SEC_VAR_FAST_POWER_ON_CLEARED_PTR
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_FAST_POWER_ON_CLEARED_PTR_NO_MATCH
// __attribute__((section("VAR_FAST_POWER_ON_CLEARED.GLOBAL.DEFAULT.PTR")))

// #elif defined STOP_SEC_VAR_FAST_POWER_ON_CLEARED_PTR
// #undef STOP_SEC_VAR_FAST_POWER_ON_CLEARED_PTR
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_FAST_POWER_ON_CLEARED_PTR_NO_MATCH
// #undef START_SEC_VAR_FAST_POWER_ON_CLEARED_PTR_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:11  Section name : VAR_FAST_POWER_ON_CLEARED_32*/
// #elif defined START_SEC_VAR_FAST_POWER_ON_CLEARED_32
// #undef START_SEC_VAR_FAST_POWER_ON_CLEARED_32
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_FAST_POWER_ON_CLEARED_32_NO_MATCH
// __attribute__((section("VAR_FAST_POWER_ON_CLEARED.GLOBAL.DEFAULT.32")))

// #elif defined STOP_SEC_VAR_FAST_POWER_ON_CLEARED_32
// #undef STOP_SEC_VAR_FAST_POWER_ON_CLEARED_32
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_FAST_POWER_ON_CLEARED_32_NO_MATCH
// #undef START_SEC_VAR_FAST_POWER_ON_CLEARED_32_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:12  Section name : VAR_FAST_POWER_ON_CLEARED_16*/
// #elif defined START_SEC_VAR_FAST_POWER_ON_CLEARED_16
// #undef START_SEC_VAR_FAST_POWER_ON_CLEARED_16
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_FAST_POWER_ON_CLEARED_16_NO_MATCH
// __attribute__((section("VAR_FAST_POWER_ON_CLEARED.GLOBAL.DEFAULT.16")))

// #elif defined STOP_SEC_VAR_FAST_POWER_ON_CLEARED_16
// #undef STOP_SEC_VAR_FAST_POWER_ON_CLEARED_16
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_FAST_POWER_ON_CLEARED_16_NO_MATCH
// #undef START_SEC_VAR_FAST_POWER_ON_CLEARED_16_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:13  Section name : VAR_FAST_POWER_ON_CLEARED_8*/
// #elif defined START_SEC_VAR_FAST_POWER_ON_CLEARED_8
// #undef START_SEC_VAR_FAST_POWER_ON_CLEARED_8
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_FAST_POWER_ON_CLEARED_8_NO_MATCH
// __attribute__((section("VAR_FAST_POWER_ON_CLEARED.GLOBAL.DEFAULT.8")))

// #elif defined STOP_SEC_VAR_FAST_POWER_ON_CLEARED_8
// #undef STOP_SEC_VAR_FAST_POWER_ON_CLEARED_8
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_FAST_POWER_ON_CLEARED_8_NO_MATCH
// #undef START_SEC_VAR_FAST_POWER_ON_CLEARED_8_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:14  Section name : VAR_FAST_POWER_ON_CLEARED_BOOLEAN*/
// #elif defined START_SEC_VAR_FAST_POWER_ON_CLEARED_BOOLEAN
// #undef START_SEC_VAR_FAST_POWER_ON_CLEARED_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_FAST_POWER_ON_CLEARED_BOOLEAN_NO_MATCH
// __attribute__((section("VAR_FAST_POWER_ON_CLEARED.GLOBAL.DEFAULT.BOOLEAN")))

// #elif defined STOP_SEC_VAR_FAST_POWER_ON_CLEARED_BOOLEAN
// #undef STOP_SEC_VAR_FAST_POWER_ON_CLEARED_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_FAST_POWER_ON_CLEARED_BOOLEAN_NO_MATCH
// #undef START_SEC_VAR_FAST_POWER_ON_CLEARED_BOOLEAN_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:15  Section name : CONST_64*/
// #elif defined START_SEC_CONST_64
// #undef START_SEC_CONST_64
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CONST_64_NO_MATCH
// __attribute__((section("CONST.GLOBAL.DEFAULT.64")))

// #elif defined STOP_SEC_CONST_64
// #undef STOP_SEC_CONST_64
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CONST_64_NO_MATCH
// #undef START_SEC_CONST_64_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:16  Section name : CONST_UNSPECIFIED*/
// #elif defined START_SEC_CONST_UNSPECIFIED
// #undef START_SEC_CONST_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CONST_UNSPECIFIED_NO_MATCH
// __attribute__((section("CONST.GLOBAL.DEFAULT.UNSPECIFIED")))

// #elif defined STOP_SEC_CONST_UNSPECIFIED
// #undef STOP_SEC_CONST_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CONST_UNSPECIFIED_NO_MATCH
// #undef START_SEC_CONST_UNSPECIFIED_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:17  Section name : CONST_PTR*/
// #elif defined START_SEC_CONST_PTR
// #undef START_SEC_CONST_PTR
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CONST_PTR_NO_MATCH
// __attribute__((section("CONST.GLOBAL.DEFAULT.PTR")))

// #elif defined STOP_SEC_CONST_PTR
// #undef STOP_SEC_CONST_PTR
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CONST_PTR_NO_MATCH
// #undef START_SEC_CONST_PTR_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:18  Section name : CONST_32*/
// #elif defined START_SEC_CONST_32
// #undef START_SEC_CONST_32
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CONST_32_NO_MATCH
// __attribute__((section("CONST.GLOBAL.DEFAULT.32")))

// #elif defined STOP_SEC_CONST_32
// #undef STOP_SEC_CONST_32
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CONST_32_NO_MATCH
// #undef START_SEC_CONST_32_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:19  Section name : CONST_16*/
// #elif defined START_SEC_CONST_16
// #undef START_SEC_CONST_16
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CONST_16_NO_MATCH
// __attribute__((section("CONST.GLOBAL.DEFAULT.16")))

// #elif defined STOP_SEC_CONST_16
// #undef STOP_SEC_CONST_16
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CONST_16_NO_MATCH
// #undef START_SEC_CONST_16_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:20  Section name : CONST_8*/
// #elif defined START_SEC_CONST_8
// #undef START_SEC_CONST_8
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CONST_8_NO_MATCH
// __attribute__((section("CONST.GLOBAL.DEFAULT.8")))

// #elif defined STOP_SEC_CONST_8
// #undef STOP_SEC_CONST_8
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CONST_8_NO_MATCH
// #undef START_SEC_CONST_8_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:21  Section name : CONST_BOOLEAN*/
// #elif defined START_SEC_CONST_BOOLEAN
// #undef START_SEC_CONST_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CONST_BOOLEAN_NO_MATCH
// __attribute__((section("CONST.GLOBAL.DEFAULT.BOOLEAN")))

// #elif defined STOP_SEC_CONST_BOOLEAN
// #undef STOP_SEC_CONST_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CONST_BOOLEAN_NO_MATCH
// #undef START_SEC_CONST_BOOLEAN_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:22  Section name : CODE_FAST*/
// #elif defined START_SEC_CODE_FAST
// #undef START_SEC_CODE_FAST
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CODE_FAST_NO_MATCH
// __attribute__((section("CODE_FAST.GLOBAL.DEFAULT.64")))

// #elif defined STOP_SEC_CODE_FAST
// #undef STOP_SEC_CODE_FAST
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CODE_FAST_NO_MATCH
// #undef START_SEC_CODE_FAST_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:23  Section name : INTERNAL_VAR_CLEARED_64*/
// #elif defined START_SEC_INTERNAL_VAR_CLEARED_64
// #undef START_SEC_INTERNAL_VAR_CLEARED_64
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_INTERNAL_VAR_CLEARED_64_NO_MATCH
// __attribute__((section("INTERNAL_VAR_CLEARED.GLOBAL.DEFAULT.64")))

// #elif defined STOP_SEC_INTERNAL_VAR_CLEARED_64
// #undef STOP_SEC_INTERNAL_VAR_CLEARED_64
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_INTERNAL_VAR_CLEARED_64_NO_MATCH
// #undef START_SEC_INTERNAL_VAR_CLEARED_64_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:24  Section name : INTERNAL_VAR_CLEARED_UNSPECIFIED*/
// #elif defined START_SEC_INTERNAL_VAR_CLEARED_UNSPECIFIED
// #undef START_SEC_INTERNAL_VAR_CLEARED_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_INTERNAL_VAR_CLEARED_UNSPECIFIED_NO_MATCH
// __attribute__((section("INTERNAL_VAR_CLEARED.GLOBAL.DEFAULT.UNSPECIFIED")))

// #elif defined STOP_SEC_INTERNAL_VAR_CLEARED_UNSPECIFIED
// #undef STOP_SEC_INTERNAL_VAR_CLEARED_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_INTERNAL_VAR_CLEARED_UNSPECIFIED_NO_MATCH
// #undef START_SEC_INTERNAL_VAR_CLEARED_UNSPECIFIED_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:25  Section name : INTERNAL_VAR_CLEARED_PTR*/
// #elif defined START_SEC_INTERNAL_VAR_CLEARED_PTR
// #undef START_SEC_INTERNAL_VAR_CLEARED_PTR
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_INTERNAL_VAR_CLEARED_PTR_NO_MATCH
// __attribute__((section("INTERNAL_VAR_CLEARED.GLOBAL.DEFAULT.PTR")))

// #elif defined STOP_SEC_INTERNAL_VAR_CLEARED_PTR
// #undef STOP_SEC_INTERNAL_VAR_CLEARED_PTR
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_INTERNAL_VAR_CLEARED_PTR_NO_MATCH
// #undef START_SEC_INTERNAL_VAR_CLEARED_PTR_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:26  Section name : INTERNAL_VAR_CLEARED_32*/
// #elif defined START_SEC_INTERNAL_VAR_CLEARED_32
// #undef START_SEC_INTERNAL_VAR_CLEARED_32
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_INTERNAL_VAR_CLEARED_32_NO_MATCH
// __attribute__((section("INTERNAL_VAR_CLEARED.GLOBAL.DEFAULT.32")))

// #elif defined STOP_SEC_INTERNAL_VAR_CLEARED_32
// #undef STOP_SEC_INTERNAL_VAR_CLEARED_32
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_INTERNAL_VAR_CLEARED_32_NO_MATCH
// #undef START_SEC_INTERNAL_VAR_CLEARED_32_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:27  Section name : INTERNAL_VAR_CLEARED_16*/
// #elif defined START_SEC_INTERNAL_VAR_CLEARED_16
// #undef START_SEC_INTERNAL_VAR_CLEARED_16
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_INTERNAL_VAR_CLEARED_16_NO_MATCH
// __attribute__((section("INTERNAL_VAR_CLEARED.GLOBAL.DEFAULT.16")))

// #elif defined STOP_SEC_INTERNAL_VAR_CLEARED_16
// #undef STOP_SEC_INTERNAL_VAR_CLEARED_16
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_INTERNAL_VAR_CLEARED_16_NO_MATCH
// #undef START_SEC_INTERNAL_VAR_CLEARED_16_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:28  Section name : INTERNAL_VAR_CLEARED_8*/
// #elif defined START_SEC_INTERNAL_VAR_CLEARED_8
// #undef START_SEC_INTERNAL_VAR_CLEARED_8
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_INTERNAL_VAR_CLEARED_8_NO_MATCH
// __attribute__((section("INTERNAL_VAR_CLEARED.GLOBAL.DEFAULT.8")))

// #elif defined STOP_SEC_INTERNAL_VAR_CLEARED_8
// #undef STOP_SEC_INTERNAL_VAR_CLEARED_8
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_INTERNAL_VAR_CLEARED_8_NO_MATCH
// #undef START_SEC_INTERNAL_VAR_CLEARED_8_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:29  Section name : INTERNAL_VAR_CLEARED_BOOLEAN*/
// #elif defined START_SEC_INTERNAL_VAR_CLEARED_BOOLEAN
// #undef START_SEC_INTERNAL_VAR_CLEARED_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_INTERNAL_VAR_CLEARED_BOOLEAN_NO_MATCH
// __attribute__((section("INTERNAL_VAR_CLEARED.GLOBAL.DEFAULT.BOOLEAN")))

// #elif defined STOP_SEC_INTERNAL_VAR_CLEARED_BOOLEAN
// #undef STOP_SEC_INTERNAL_VAR_CLEARED_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_INTERNAL_VAR_CLEARED_BOOLEAN_NO_MATCH
// #undef START_SEC_INTERNAL_VAR_CLEARED_BOOLEAN_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:30  Section name : VAR_POWER_ON_CLEARED_64*/
// #elif defined START_SEC_VAR_POWER_ON_CLEARED_64
// #undef START_SEC_VAR_POWER_ON_CLEARED_64
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_POWER_ON_CLEARED_64_NO_MATCH
// __attribute__((section("VAR_POWER_ON_CLEARED.GLOBAL.DEFAULT.64")))

// #elif defined STOP_SEC_VAR_POWER_ON_CLEARED_64
// #undef STOP_SEC_VAR_POWER_ON_CLEARED_64
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_POWER_ON_CLEARED_64_NO_MATCH
// #undef START_SEC_VAR_POWER_ON_CLEARED_64_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:31  Section name : VAR_POWER_ON_CLEARED_UNSPECIFIED*/
// #elif defined START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED
// #undef START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED_NO_MATCH
// __attribute__((section("VAR_POWER_ON_CLEARED.GLOBAL.DEFAULT.UNSPECIFIED")))

// #elif defined STOP_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED
// #undef STOP_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED_NO_MATCH
// #undef START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:32  Section name : VAR_POWER_ON_CLEARED_PTR*/
// #elif defined START_SEC_VAR_POWER_ON_CLEARED_PTR
// #undef START_SEC_VAR_POWER_ON_CLEARED_PTR
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_POWER_ON_CLEARED_PTR_NO_MATCH
// __attribute__((section("VAR_POWER_ON_CLEARED.GLOBAL.DEFAULT.PTR")))

// #elif defined STOP_SEC_VAR_POWER_ON_CLEARED_PTR
// #undef STOP_SEC_VAR_POWER_ON_CLEARED_PTR
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_POWER_ON_CLEARED_PTR_NO_MATCH
// #undef START_SEC_VAR_POWER_ON_CLEARED_PTR_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:33  Section name : VAR_POWER_ON_CLEARED_32*/
// #elif defined START_SEC_VAR_POWER_ON_CLEARED_32
// #undef START_SEC_VAR_POWER_ON_CLEARED_32
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_POWER_ON_CLEARED_32_NO_MATCH
// __attribute__((section("VAR_POWER_ON_CLEARED.GLOBAL.DEFAULT.32")))

// #elif defined STOP_SEC_VAR_POWER_ON_CLEARED_32
// #undef STOP_SEC_VAR_POWER_ON_CLEARED_32
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_POWER_ON_CLEARED_32_NO_MATCH
// #undef START_SEC_VAR_POWER_ON_CLEARED_32_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:34  Section name : VAR_POWER_ON_CLEARED_16*/
// #elif defined START_SEC_VAR_POWER_ON_CLEARED_16
// #undef START_SEC_VAR_POWER_ON_CLEARED_16
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_POWER_ON_CLEARED_16_NO_MATCH
// __attribute__((section("VAR_POWER_ON_CLEARED.GLOBAL.DEFAULT.16")))

// #elif defined STOP_SEC_VAR_POWER_ON_CLEARED_16
// #undef STOP_SEC_VAR_POWER_ON_CLEARED_16
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_POWER_ON_CLEARED_16_NO_MATCH
// #undef START_SEC_VAR_POWER_ON_CLEARED_16_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:35  Section name : VAR_POWER_ON_CLEARED_8*/
// #elif defined START_SEC_VAR_POWER_ON_CLEARED_8
// #undef START_SEC_VAR_POWER_ON_CLEARED_8
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_POWER_ON_CLEARED_8_NO_MATCH
// __attribute__((section("VAR_POWER_ON_CLEARED.GLOBAL.DEFAULT.8")))

// #elif defined STOP_SEC_VAR_POWER_ON_CLEARED_8
// #undef STOP_SEC_VAR_POWER_ON_CLEARED_8
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_POWER_ON_CLEARED_8_NO_MATCH
// #undef START_SEC_VAR_POWER_ON_CLEARED_8_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:36  Section name : VAR_POWER_ON_CLEARED_BOOLEAN*/
// #elif defined START_SEC_VAR_POWER_ON_CLEARED_BOOLEAN
// #undef START_SEC_VAR_POWER_ON_CLEARED_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_POWER_ON_CLEARED_BOOLEAN_NO_MATCH
// __attribute__((section("VAR_POWER_ON_CLEARED.GLOBAL.DEFAULT.BOOLEAN")))

// #elif defined STOP_SEC_VAR_POWER_ON_CLEARED_BOOLEAN
// #undef STOP_SEC_VAR_POWER_ON_CLEARED_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_POWER_ON_CLEARED_BOOLEAN_NO_MATCH
// #undef START_SEC_VAR_POWER_ON_CLEARED_BOOLEAN_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:37  Section name : CONFIG_DATA_64*/
// #elif defined START_SEC_CONFIG_DATA_64
// #undef START_SEC_CONFIG_DATA_64
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CONFIG_DATA_64_NO_MATCH
// __attribute__((section("CONFIG_DATA.GLOBAL.DEFAULT.64")))

// #elif defined STOP_SEC_CONFIG_DATA_64
// #undef STOP_SEC_CONFIG_DATA_64
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CONFIG_DATA_64_NO_MATCH
// #undef START_SEC_CONFIG_DATA_64_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:38  Section name : CONFIG_DATA_UNSPECIFIED*/
// #elif defined START_SEC_CONFIG_DATA_UNSPECIFIED
// #undef START_SEC_CONFIG_DATA_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CONFIG_DATA_UNSPECIFIED_NO_MATCH
// __attribute__((section("CONFIG_DATA.GLOBAL.DEFAULT.UNSPECIFIED")))

// #elif defined STOP_SEC_CONFIG_DATA_UNSPECIFIED
// #undef STOP_SEC_CONFIG_DATA_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CONFIG_DATA_UNSPECIFIED_NO_MATCH
// #undef START_SEC_CONFIG_DATA_UNSPECIFIED_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:39  Section name : CONFIG_DATA_PTR*/
// #elif defined START_SEC_CONFIG_DATA_PTR
// #undef START_SEC_CONFIG_DATA_PTR
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CONFIG_DATA_PTR_NO_MATCH
// __attribute__((section("CONFIG_DATA.GLOBAL.DEFAULT.PTR")))

// #elif defined STOP_SEC_CONFIG_DATA_PTR
// #undef STOP_SEC_CONFIG_DATA_PTR
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CONFIG_DATA_PTR_NO_MATCH
// #undef START_SEC_CONFIG_DATA_PTR_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:40  Section name : CONFIG_DATA_32*/
// #elif defined START_SEC_CONFIG_DATA_32
// #undef START_SEC_CONFIG_DATA_32
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CONFIG_DATA_32_NO_MATCH
// __attribute__((section("CONFIG_DATA.GLOBAL.DEFAULT.32")))

// #elif defined STOP_SEC_CONFIG_DATA_32
// #undef STOP_SEC_CONFIG_DATA_32
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CONFIG_DATA_32_NO_MATCH
// #undef START_SEC_CONFIG_DATA_32_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:41  Section name : CONFIG_DATA_16*/
// #elif defined START_SEC_CONFIG_DATA_16
// #undef START_SEC_CONFIG_DATA_16
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CONFIG_DATA_16_NO_MATCH
// __attribute__((section("CONFIG_DATA.GLOBAL.DEFAULT.16")))

// #elif defined STOP_SEC_CONFIG_DATA_16
// #undef STOP_SEC_CONFIG_DATA_16
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CONFIG_DATA_16_NO_MATCH
// #undef START_SEC_CONFIG_DATA_16_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:42  Section name : CONFIG_DATA_8*/
// #elif defined START_SEC_CONFIG_DATA_8
// #undef START_SEC_CONFIG_DATA_8
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CONFIG_DATA_8_NO_MATCH
// __attribute__((section("CONFIG_DATA.GLOBAL.DEFAULT.8")))

// #elif defined STOP_SEC_CONFIG_DATA_8
// #undef STOP_SEC_CONFIG_DATA_8
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CONFIG_DATA_8_NO_MATCH
// #undef START_SEC_CONFIG_DATA_8_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:43  Section name : CONFIG_DATA_BOOLEAN*/
// #elif defined START_SEC_CONFIG_DATA_BOOLEAN
// #undef START_SEC_CONFIG_DATA_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CONFIG_DATA_BOOLEAN_NO_MATCH
// __attribute__((section("CONFIG_DATA.GLOBAL.DEFAULT.BOOLEAN")))

// #elif defined STOP_SEC_CONFIG_DATA_BOOLEAN
// #undef STOP_SEC_CONFIG_DATA_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CONFIG_DATA_BOOLEAN_NO_MATCH
// #undef START_SEC_CONFIG_DATA_BOOLEAN_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:44  Section name : INTERNAL_VAR_INIT_64*/
// #elif defined START_SEC_INTERNAL_VAR_INIT_64
// #undef START_SEC_INTERNAL_VAR_INIT_64
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_INTERNAL_VAR_INIT_64_NO_MATCH
// __attribute__((section("INTERNAL_VAR_INIT.GLOBAL.DEFAULT.64")))

// #elif defined STOP_SEC_INTERNAL_VAR_INIT_64
// #undef STOP_SEC_INTERNAL_VAR_INIT_64
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_INTERNAL_VAR_INIT_64_NO_MATCH
// #undef START_SEC_INTERNAL_VAR_INIT_64_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:45  Section name : INTERNAL_VAR_INIT_UNSPECIFIED*/
// #elif defined START_SEC_INTERNAL_VAR_INIT_UNSPECIFIED
// #undef START_SEC_INTERNAL_VAR_INIT_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_INTERNAL_VAR_INIT_UNSPECIFIED_NO_MATCH
// __attribute__((section("INTERNAL_VAR_INIT.GLOBAL.DEFAULT.UNSPECIFIED")))

// #elif defined STOP_SEC_INTERNAL_VAR_INIT_UNSPECIFIED
// #undef STOP_SEC_INTERNAL_VAR_INIT_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_INTERNAL_VAR_INIT_UNSPECIFIED_NO_MATCH
// #undef START_SEC_INTERNAL_VAR_INIT_UNSPECIFIED_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:46  Section name : INTERNAL_VAR_INIT_PTR*/
// #elif defined START_SEC_INTERNAL_VAR_INIT_PTR
// #undef START_SEC_INTERNAL_VAR_INIT_PTR
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_INTERNAL_VAR_INIT_PTR_NO_MATCH
// __attribute__((section("INTERNAL_VAR_INIT.GLOBAL.DEFAULT.PTR")))

// #elif defined STOP_SEC_INTERNAL_VAR_INIT_PTR
// #undef STOP_SEC_INTERNAL_VAR_INIT_PTR
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_INTERNAL_VAR_INIT_PTR_NO_MATCH
// #undef START_SEC_INTERNAL_VAR_INIT_PTR_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:47  Section name : INTERNAL_VAR_INIT_32*/
// #elif defined START_SEC_INTERNAL_VAR_INIT_32
// #undef START_SEC_INTERNAL_VAR_INIT_32
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_INTERNAL_VAR_INIT_32_NO_MATCH
// __attribute__((section("INTERNAL_VAR_INIT.GLOBAL.DEFAULT.32")))

// #elif defined STOP_SEC_INTERNAL_VAR_INIT_32
// #undef STOP_SEC_INTERNAL_VAR_INIT_32
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_INTERNAL_VAR_INIT_32_NO_MATCH
// #undef START_SEC_INTERNAL_VAR_INIT_32_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:48  Section name : INTERNAL_VAR_INIT_16*/
// #elif defined START_SEC_INTERNAL_VAR_INIT_16
// #undef START_SEC_INTERNAL_VAR_INIT_16
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_INTERNAL_VAR_INIT_16_NO_MATCH
// __attribute__((section("INTERNAL_VAR_INIT.GLOBAL.DEFAULT.16")))

// #elif defined STOP_SEC_INTERNAL_VAR_INIT_16
// #undef STOP_SEC_INTERNAL_VAR_INIT_16
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_INTERNAL_VAR_INIT_16_NO_MATCH
// #undef START_SEC_INTERNAL_VAR_INIT_16_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:49  Section name : INTERNAL_VAR_INIT_8*/
// #elif defined START_SEC_INTERNAL_VAR_INIT_8
// #undef START_SEC_INTERNAL_VAR_INIT_8
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_INTERNAL_VAR_INIT_8_NO_MATCH
// __attribute__((section("INTERNAL_VAR_INIT.GLOBAL.DEFAULT.8")))

// #elif defined STOP_SEC_INTERNAL_VAR_INIT_8
// #undef STOP_SEC_INTERNAL_VAR_INIT_8
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_INTERNAL_VAR_INIT_8_NO_MATCH
// #undef START_SEC_INTERNAL_VAR_INIT_8_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:50  Section name : INTERNAL_VAR_INIT_BOOLEAN*/
// #elif defined START_SEC_INTERNAL_VAR_INIT_BOOLEAN
// #undef START_SEC_INTERNAL_VAR_INIT_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_INTERNAL_VAR_INIT_BOOLEAN_NO_MATCH
// __attribute__((section("INTERNAL_VAR_INIT.GLOBAL.DEFAULT.BOOLEAN")))

// #elif defined STOP_SEC_INTERNAL_VAR_INIT_BOOLEAN
// #undef STOP_SEC_INTERNAL_VAR_INIT_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_INTERNAL_VAR_INIT_BOOLEAN_NO_MATCH
// #undef START_SEC_INTERNAL_VAR_INIT_BOOLEAN_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:51  Section name : INTERNAL_VAR_POWER_ON_CLEARED_64*/
// #elif defined START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_64
// #undef START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_64
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_64_NO_MATCH
// __attribute__((section("INTERNAL_VAR_POWER_ON_CLEARED.GLOBAL.DEFAULT.64")))

// #elif defined STOP_SEC_INTERNAL_VAR_POWER_ON_CLEARED_64
// #undef STOP_SEC_INTERNAL_VAR_POWER_ON_CLEARED_64
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_64_NO_MATCH
// #undef START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_64_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:52  Section name : INTERNAL_VAR_POWER_ON_CLEARED_UNSPECIFIED*/
// #elif defined START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_UNSPECIFIED
// #undef START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_UNSPECIFIED_NO_MATCH
// __attribute__((section("INTERNAL_VAR_POWER_ON_CLEARED.GLOBAL.DEFAULT.UNSPECIFIED")))

// #elif defined STOP_SEC_INTERNAL_VAR_POWER_ON_CLEARED_UNSPECIFIED
// #undef STOP_SEC_INTERNAL_VAR_POWER_ON_CLEARED_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_UNSPECIFIED_NO_MATCH
// #undef START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_UNSPECIFIED_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:53  Section name : INTERNAL_VAR_POWER_ON_CLEARED_PTR*/
// #elif defined START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_PTR
// #undef START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_PTR
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_PTR_NO_MATCH
// __attribute__((section("INTERNAL_VAR_POWER_ON_CLEARED.GLOBAL.DEFAULT.PTR")))

// #elif defined STOP_SEC_INTERNAL_VAR_POWER_ON_CLEARED_PTR
// #undef STOP_SEC_INTERNAL_VAR_POWER_ON_CLEARED_PTR
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_PTR_NO_MATCH
// #undef START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_PTR_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:54  Section name : INTERNAL_VAR_POWER_ON_CLEARED_32*/
// #elif defined START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_32
// #undef START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_32
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_32_NO_MATCH
// __attribute__((section("INTERNAL_VAR_POWER_ON_CLEARED.GLOBAL.DEFAULT.32")))

// #elif defined STOP_SEC_INTERNAL_VAR_POWER_ON_CLEARED_32
// #undef STOP_SEC_INTERNAL_VAR_POWER_ON_CLEARED_32
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_32_NO_MATCH
// #undef START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_32_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:55  Section name : INTERNAL_VAR_POWER_ON_CLEARED_16*/
// #elif defined START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_16
// #undef START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_16
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_16_NO_MATCH
// __attribute__((section("INTERNAL_VAR_POWER_ON_CLEARED.GLOBAL.DEFAULT.16")))

// #elif defined STOP_SEC_INTERNAL_VAR_POWER_ON_CLEARED_16
// #undef STOP_SEC_INTERNAL_VAR_POWER_ON_CLEARED_16
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_16_NO_MATCH
// #undef START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_16_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:56  Section name : INTERNAL_VAR_POWER_ON_CLEARED_8*/
// #elif defined START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_8
// #undef START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_8
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_8_NO_MATCH
// __attribute__((section("INTERNAL_VAR_POWER_ON_CLEARED.GLOBAL.DEFAULT.8")))

// #elif defined STOP_SEC_INTERNAL_VAR_POWER_ON_CLEARED_8
// #undef STOP_SEC_INTERNAL_VAR_POWER_ON_CLEARED_8
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_8_NO_MATCH
// #undef START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_8_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:57  Section name : INTERNAL_VAR_POWER_ON_CLEARED_BOOLEAN*/
// #elif defined START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_BOOLEAN
// #undef START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_BOOLEAN_NO_MATCH
// __attribute__((section("INTERNAL_VAR_POWER_ON_CLEARED.GLOBAL.DEFAULT.BOOLEAN")))

// #elif defined STOP_SEC_INTERNAL_VAR_POWER_ON_CLEARED_BOOLEAN
// #undef STOP_SEC_INTERNAL_VAR_POWER_ON_CLEARED_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_BOOLEAN_NO_MATCH
// #undef START_SEC_INTERNAL_VAR_POWER_ON_CLEARED_BOOLEAN_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:58  Section name : CODE*/
// #elif defined START_SEC_CODE
// #undef START_SEC_CODE
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_CODE_NO_MATCH
// __attribute__((section("CODE.GLOBAL.DEFAULT.64")))

// #elif defined STOP_SEC_CODE
// #undef STOP_SEC_CODE
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_CODE_NO_MATCH
// #undef START_SEC_CODE_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:59  Section name : VAR_CLEARED_64*/
// #elif defined START_SEC_VAR_CLEARED_64
// #undef START_SEC_VAR_CLEARED_64
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_CLEARED_64_NO_MATCH
// __attribute__((section("VAR_CLEARED.GLOBAL.DEFAULT.64")))

// #elif defined STOP_SEC_VAR_CLEARED_64
// #undef STOP_SEC_VAR_CLEARED_64
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_CLEARED_64_NO_MATCH
// #undef START_SEC_VAR_CLEARED_64_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:60  Section name : VAR_CLEARED_UNSPECIFIED*/
// #elif defined START_SEC_VAR_CLEARED_UNSPECIFIED
// #undef START_SEC_VAR_CLEARED_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_CLEARED_UNSPECIFIED_NO_MATCH
// __attribute__((section("VAR_CLEARED.GLOBAL.DEFAULT.UNSPECIFIED")))

// #elif defined STOP_SEC_VAR_CLEARED_UNSPECIFIED
// #undef STOP_SEC_VAR_CLEARED_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_CLEARED_UNSPECIFIED_NO_MATCH
// #undef START_SEC_VAR_CLEARED_UNSPECIFIED_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:61  Section name : VAR_CLEARED_PTR*/
// #elif defined START_SEC_VAR_CLEARED_PTR
// #undef START_SEC_VAR_CLEARED_PTR
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_CLEARED_PTR_NO_MATCH
// __attribute__((section("VAR_CLEARED.GLOBAL.DEFAULT.PTR")))

// #elif defined STOP_SEC_VAR_CLEARED_PTR
// #undef STOP_SEC_VAR_CLEARED_PTR
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_CLEARED_PTR_NO_MATCH
// #undef START_SEC_VAR_CLEARED_PTR_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:62  Section name : VAR_CLEARED_32*/
// #elif defined START_SEC_VAR_CLEARED_32
// #undef START_SEC_VAR_CLEARED_32
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_CLEARED_32_NO_MATCH
// __attribute__((section("VAR_CLEARED.GLOBAL.DEFAULT.32")))

// #elif defined STOP_SEC_VAR_CLEARED_32
// #undef STOP_SEC_VAR_CLEARED_32
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_CLEARED_32_NO_MATCH
// #undef START_SEC_VAR_CLEARED_32_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:63  Section name : VAR_CLEARED_16*/
// #elif defined START_SEC_VAR_CLEARED_16
// #undef START_SEC_VAR_CLEARED_16
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_CLEARED_16_NO_MATCH
// __attribute__((section("VAR_CLEARED.GLOBAL.DEFAULT.16")))

// #elif defined STOP_SEC_VAR_CLEARED_16
// #undef STOP_SEC_VAR_CLEARED_16
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_CLEARED_16_NO_MATCH
// #undef START_SEC_VAR_CLEARED_16_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:64  Section name : VAR_CLEARED_8*/
// #elif defined START_SEC_VAR_CLEARED_8
// #undef START_SEC_VAR_CLEARED_8
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_CLEARED_8_NO_MATCH
// __attribute__((section("VAR_CLEARED.GLOBAL.DEFAULT.8")))

// #elif defined STOP_SEC_VAR_CLEARED_8
// #undef STOP_SEC_VAR_CLEARED_8
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_CLEARED_8_NO_MATCH
// #undef START_SEC_VAR_CLEARED_8_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:65  Section name : VAR_CLEARED_BOOLEAN*/
// #elif defined START_SEC_VAR_CLEARED_BOOLEAN
// #undef START_SEC_VAR_CLEARED_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_CLEARED_BOOLEAN_NO_MATCH
// __attribute__((section("VAR_CLEARED.GLOBAL.DEFAULT.BOOLEAN")))

// #elif defined STOP_SEC_VAR_CLEARED_BOOLEAN
// #undef STOP_SEC_VAR_CLEARED_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_CLEARED_BOOLEAN_NO_MATCH
// #undef START_SEC_VAR_CLEARED_BOOLEAN_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:66  Section name : VAR_FAST_INIT_64*/
// #elif defined START_SEC_VAR_FAST_INIT_64
// #undef START_SEC_VAR_FAST_INIT_64
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_FAST_INIT_64_NO_MATCH
// __attribute__((section("VAR_FAST_INIT.GLOBAL.DEFAULT.64")))

// #elif defined STOP_SEC_VAR_FAST_INIT_64
// #undef STOP_SEC_VAR_FAST_INIT_64
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_FAST_INIT_64_NO_MATCH
// #undef START_SEC_VAR_FAST_INIT_64_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:67  Section name : VAR_FAST_INIT_UNSPECIFIED*/
// #elif defined START_SEC_VAR_FAST_INIT_UNSPECIFIED
// #undef START_SEC_VAR_FAST_INIT_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_FAST_INIT_UNSPECIFIED_NO_MATCH
// __attribute__((section("VAR_FAST_INIT.GLOBAL.DEFAULT.UNSPECIFIED")))

// #elif defined STOP_SEC_VAR_FAST_INIT_UNSPECIFIED
// #undef STOP_SEC_VAR_FAST_INIT_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_FAST_INIT_UNSPECIFIED_NO_MATCH
// #undef START_SEC_VAR_FAST_INIT_UNSPECIFIED_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:68  Section name : VAR_FAST_INIT_PTR*/
// #elif defined START_SEC_VAR_FAST_INIT_PTR
// #undef START_SEC_VAR_FAST_INIT_PTR
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_FAST_INIT_PTR_NO_MATCH
// __attribute__((section("VAR_FAST_INIT.GLOBAL.DEFAULT.PTR")))

// #elif defined STOP_SEC_VAR_FAST_INIT_PTR
// #undef STOP_SEC_VAR_FAST_INIT_PTR
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_FAST_INIT_PTR_NO_MATCH
// #undef START_SEC_VAR_FAST_INIT_PTR_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:69  Section name : VAR_FAST_INIT_32*/
// #elif defined START_SEC_VAR_FAST_INIT_32
// #undef START_SEC_VAR_FAST_INIT_32
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_FAST_INIT_32_NO_MATCH
// __attribute__((section("VAR_FAST_INIT.GLOBAL.DEFAULT.32")))

// #elif defined STOP_SEC_VAR_FAST_INIT_32
// #undef STOP_SEC_VAR_FAST_INIT_32
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_FAST_INIT_32_NO_MATCH
// #undef START_SEC_VAR_FAST_INIT_32_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:70  Section name : VAR_FAST_INIT_16*/
// #elif defined START_SEC_VAR_FAST_INIT_16
// #undef START_SEC_VAR_FAST_INIT_16
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_FAST_INIT_16_NO_MATCH
// __attribute__((section("VAR_FAST_INIT.GLOBAL.DEFAULT.16")))

// #elif defined STOP_SEC_VAR_FAST_INIT_16
// #undef STOP_SEC_VAR_FAST_INIT_16
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_FAST_INIT_16_NO_MATCH
// #undef START_SEC_VAR_FAST_INIT_16_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:71  Section name : VAR_FAST_INIT_8*/
// #elif defined START_SEC_VAR_FAST_INIT_8
// #undef START_SEC_VAR_FAST_INIT_8
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_FAST_INIT_8_NO_MATCH
// __attribute__((section("VAR_FAST_INIT.GLOBAL.DEFAULT.8")))

// #elif defined STOP_SEC_VAR_FAST_INIT_8
// #undef STOP_SEC_VAR_FAST_INIT_8
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_FAST_INIT_8_NO_MATCH
// #undef START_SEC_VAR_FAST_INIT_8_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:72  Section name : VAR_FAST_INIT_BOOLEAN*/
// #elif defined START_SEC_VAR_FAST_INIT_BOOLEAN
// #undef START_SEC_VAR_FAST_INIT_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_FAST_INIT_BOOLEAN_NO_MATCH
// __attribute__((section("VAR_FAST_INIT.GLOBAL.DEFAULT.BOOLEAN")))

// #elif defined STOP_SEC_VAR_FAST_INIT_BOOLEAN
// #undef STOP_SEC_VAR_FAST_INIT_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_FAST_INIT_BOOLEAN_NO_MATCH
// #undef START_SEC_VAR_FAST_INIT_BOOLEAN_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:73  Section name : VAR_FAST_CLEARED_64*/
// #elif defined START_SEC_VAR_FAST_CLEARED_64
// #undef START_SEC_VAR_FAST_CLEARED_64
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_FAST_CLEARED_64_NO_MATCH
// __attribute__((section("VAR_FAST_CLEARED.GLOBAL.DEFAULT.64")))

// #elif defined STOP_SEC_VAR_FAST_CLEARED_64
// #undef STOP_SEC_VAR_FAST_CLEARED_64
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_FAST_CLEARED_64_NO_MATCH
// #undef START_SEC_VAR_FAST_CLEARED_64_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:74  Section name : VAR_FAST_CLEARED_UNSPECIFIED*/
// #elif defined START_SEC_VAR_FAST_CLEARED_UNSPECIFIED
// #undef START_SEC_VAR_FAST_CLEARED_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_FAST_CLEARED_UNSPECIFIED_NO_MATCH
// __attribute__((section("VAR_FAST_CLEARED.GLOBAL.DEFAULT.UNSPECIFIED")))

// #elif defined STOP_SEC_VAR_FAST_CLEARED_UNSPECIFIED
// #undef STOP_SEC_VAR_FAST_CLEARED_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_FAST_CLEARED_UNSPECIFIED_NO_MATCH
// #undef START_SEC_VAR_FAST_CLEARED_UNSPECIFIED_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:75  Section name : VAR_FAST_CLEARED_PTR*/
// #elif defined START_SEC_VAR_FAST_CLEARED_PTR
// #undef START_SEC_VAR_FAST_CLEARED_PTR
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_FAST_CLEARED_PTR_NO_MATCH
// __attribute__((section("VAR_FAST_CLEARED.GLOBAL.DEFAULT.PTR")))

// #elif defined STOP_SEC_VAR_FAST_CLEARED_PTR
// #undef STOP_SEC_VAR_FAST_CLEARED_PTR
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_FAST_CLEARED_PTR_NO_MATCH
// #undef START_SEC_VAR_FAST_CLEARED_PTR_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:76  Section name : VAR_FAST_CLEARED_32*/
// #elif defined START_SEC_VAR_FAST_CLEARED_32
// #undef START_SEC_VAR_FAST_CLEARED_32
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_FAST_CLEARED_32_NO_MATCH
// __attribute__((section("VAR_FAST_CLEARED.GLOBAL.DEFAULT.32")))

// #elif defined STOP_SEC_VAR_FAST_CLEARED_32
// #undef STOP_SEC_VAR_FAST_CLEARED_32
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_FAST_CLEARED_32_NO_MATCH
// #undef START_SEC_VAR_FAST_CLEARED_32_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:77  Section name : VAR_FAST_CLEARED_16*/
// #elif defined START_SEC_VAR_FAST_CLEARED_16
// #undef START_SEC_VAR_FAST_CLEARED_16
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_FAST_CLEARED_16_NO_MATCH
// __attribute__((section("VAR_FAST_CLEARED.GLOBAL.DEFAULT.16")))

// #elif defined STOP_SEC_VAR_FAST_CLEARED_16
// #undef STOP_SEC_VAR_FAST_CLEARED_16
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_FAST_CLEARED_16_NO_MATCH
// #undef START_SEC_VAR_FAST_CLEARED_16_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:78  Section name : VAR_FAST_CLEARED_8*/
// #elif defined START_SEC_VAR_FAST_CLEARED_8
// #undef START_SEC_VAR_FAST_CLEARED_8
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_FAST_CLEARED_8_NO_MATCH
// __attribute__((section("VAR_FAST_CLEARED.GLOBAL.DEFAULT.8")))

// #elif defined STOP_SEC_VAR_FAST_CLEARED_8
// #undef STOP_SEC_VAR_FAST_CLEARED_8
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_FAST_CLEARED_8_NO_MATCH
// #undef START_SEC_VAR_FAST_CLEARED_8_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:79  Section name : VAR_FAST_CLEARED_BOOLEAN*/
// #elif defined START_SEC_VAR_FAST_CLEARED_BOOLEAN
// #undef START_SEC_VAR_FAST_CLEARED_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_FAST_CLEARED_BOOLEAN_NO_MATCH
// __attribute__((section("VAR_FAST_CLEARED.GLOBAL.DEFAULT.BOOLEAN")))

// #elif defined STOP_SEC_VAR_FAST_CLEARED_BOOLEAN
// #undef STOP_SEC_VAR_FAST_CLEARED_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_FAST_CLEARED_BOOLEAN_NO_MATCH
// #undef START_SEC_VAR_FAST_CLEARED_BOOLEAN_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:80  Section name : VAR_INIT_64*/
// #elif defined START_SEC_VAR_INIT_64
// #undef START_SEC_VAR_INIT_64
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_INIT_64_NO_MATCH
// __attribute__((section("VAR_INIT.GLOBAL.DEFAULT.64")))

// #elif defined STOP_SEC_VAR_INIT_64
// #undef STOP_SEC_VAR_INIT_64
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_INIT_64_NO_MATCH
// #undef START_SEC_VAR_INIT_64_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:81  Section name : VAR_INIT_UNSPECIFIED*/
// #elif defined START_SEC_VAR_INIT_UNSPECIFIED
// #undef START_SEC_VAR_INIT_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_INIT_UNSPECIFIED_NO_MATCH
// __attribute__((section("VAR_INIT.GLOBAL.DEFAULT.UNSPECIFIED")))

// #elif defined STOP_SEC_VAR_INIT_UNSPECIFIED
// #undef STOP_SEC_VAR_INIT_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_INIT_UNSPECIFIED_NO_MATCH
// #undef START_SEC_VAR_INIT_UNSPECIFIED_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:82  Section name : VAR_INIT_PTR*/
// #elif defined START_SEC_VAR_INIT_PTR
// #undef START_SEC_VAR_INIT_PTR
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_INIT_PTR_NO_MATCH
// __attribute__((section("VAR_INIT.GLOBAL.DEFAULT.PTR")))

// #elif defined STOP_SEC_VAR_INIT_PTR
// #undef STOP_SEC_VAR_INIT_PTR
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_INIT_PTR_NO_MATCH
// #undef START_SEC_VAR_INIT_PTR_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:83  Section name : VAR_INIT_32*/
// #elif defined START_SEC_VAR_INIT_32
// #undef START_SEC_VAR_INIT_32
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_INIT_32_NO_MATCH
// __attribute__((section("VAR_INIT.GLOBAL.DEFAULT.32")))

// #elif defined STOP_SEC_VAR_INIT_32
// #undef STOP_SEC_VAR_INIT_32
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_INIT_32_NO_MATCH
// #undef START_SEC_VAR_INIT_32_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:84  Section name : VAR_INIT_16*/
// #elif defined START_SEC_VAR_INIT_16
// #undef START_SEC_VAR_INIT_16
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_INIT_16_NO_MATCH
// __attribute__((section("VAR_INIT.GLOBAL.DEFAULT.16")))

// #elif defined STOP_SEC_VAR_INIT_16
// #undef STOP_SEC_VAR_INIT_16
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_INIT_16_NO_MATCH
// #undef START_SEC_VAR_INIT_16_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:85  Section name : VAR_INIT_8*/
// #elif defined START_SEC_VAR_INIT_8
// #undef START_SEC_VAR_INIT_8
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_INIT_8_NO_MATCH
// __attribute__((section("VAR_INIT.GLOBAL.DEFAULT.8")))

// #elif defined STOP_SEC_VAR_INIT_8
// #undef STOP_SEC_VAR_INIT_8
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_INIT_8_NO_MATCH
// #undef START_SEC_VAR_INIT_8_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:86  Section name : VAR_INIT_BOOLEAN*/
// #elif defined START_SEC_VAR_INIT_BOOLEAN
// #undef START_SEC_VAR_INIT_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_INIT_BOOLEAN_NO_MATCH
// __attribute__((section("VAR_INIT.GLOBAL.DEFAULT.BOOLEAN")))

// #elif defined STOP_SEC_VAR_INIT_BOOLEAN
// #undef STOP_SEC_VAR_INIT_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_INIT_BOOLEAN_NO_MATCH
// #undef START_SEC_VAR_INIT_BOOLEAN_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:87  Section name : VAR_SAVED_ZONE_64*/
// #elif defined START_SEC_VAR_SAVED_ZONE_64
// #undef START_SEC_VAR_SAVED_ZONE_64
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_SAVED_ZONE_64_NO_MATCH
// __attribute__((section("VAR_SAVED_ZONE.GLOBAL.DEFAULT.64")))

// #elif defined STOP_SEC_VAR_SAVED_ZONE_64
// #undef STOP_SEC_VAR_SAVED_ZONE_64
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_SAVED_ZONE_64_NO_MATCH
// #undef START_SEC_VAR_SAVED_ZONE_64_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:88  Section name : VAR_SAVED_ZONE_UNSPECIFIED*/
// #elif defined START_SEC_VAR_SAVED_ZONE_UNSPECIFIED
// #undef START_SEC_VAR_SAVED_ZONE_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_SAVED_ZONE_UNSPECIFIED_NO_MATCH
// __attribute__((section("VAR_SAVED_ZONE.GLOBAL.DEFAULT.UNSPECIFIED")))

// #elif defined STOP_SEC_VAR_SAVED_ZONE_UNSPECIFIED
// #undef STOP_SEC_VAR_SAVED_ZONE_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_SAVED_ZONE_UNSPECIFIED_NO_MATCH
// #undef START_SEC_VAR_SAVED_ZONE_UNSPECIFIED_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:89  Section name : VAR_SAVED_ZONE_PTR*/
// #elif defined START_SEC_VAR_SAVED_ZONE_PTR
// #undef START_SEC_VAR_SAVED_ZONE_PTR
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_SAVED_ZONE_PTR_NO_MATCH
// __attribute__((section("VAR_SAVED_ZONE.GLOBAL.DEFAULT.PTR")))

// #elif defined STOP_SEC_VAR_SAVED_ZONE_PTR
// #undef STOP_SEC_VAR_SAVED_ZONE_PTR
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_SAVED_ZONE_PTR_NO_MATCH
// #undef START_SEC_VAR_SAVED_ZONE_PTR_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:90  Section name : VAR_SAVED_ZONE_32*/
// #elif defined START_SEC_VAR_SAVED_ZONE_32
// #undef START_SEC_VAR_SAVED_ZONE_32
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_SAVED_ZONE_32_NO_MATCH
// __attribute__((section("VAR_SAVED_ZONE.GLOBAL.DEFAULT.32")))

// #elif defined STOP_SEC_VAR_SAVED_ZONE_32
// #undef STOP_SEC_VAR_SAVED_ZONE_32
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_SAVED_ZONE_32_NO_MATCH
// #undef START_SEC_VAR_SAVED_ZONE_32_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:91  Section name : VAR_SAVED_ZONE_16*/
// #elif defined START_SEC_VAR_SAVED_ZONE_16
// #undef START_SEC_VAR_SAVED_ZONE_16
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_SAVED_ZONE_16_NO_MATCH
// __attribute__((section("VAR_SAVED_ZONE.GLOBAL.DEFAULT.16")))

// #elif defined STOP_SEC_VAR_SAVED_ZONE_16
// #undef STOP_SEC_VAR_SAVED_ZONE_16
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_SAVED_ZONE_16_NO_MATCH
// #undef START_SEC_VAR_SAVED_ZONE_16_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:92  Section name : VAR_SAVED_ZONE_8*/
// #elif defined START_SEC_VAR_SAVED_ZONE_8
// #undef START_SEC_VAR_SAVED_ZONE_8
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_SAVED_ZONE_8_NO_MATCH
// __attribute__((section("VAR_SAVED_ZONE.GLOBAL.DEFAULT.8")))

// #elif defined STOP_SEC_VAR_SAVED_ZONE_8
// #undef STOP_SEC_VAR_SAVED_ZONE_8
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_SAVED_ZONE_8_NO_MATCH
// #undef START_SEC_VAR_SAVED_ZONE_8_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:93  Section name : VAR_SAVED_ZONE_BOOLEAN*/
// #elif defined START_SEC_VAR_SAVED_ZONE_BOOLEAN
// #undef START_SEC_VAR_SAVED_ZONE_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_SAVED_ZONE_BOOLEAN_NO_MATCH
// __attribute__((section("VAR_SAVED_ZONE.GLOBAL.DEFAULT.BOOLEAN")))

// #elif defined STOP_SEC_VAR_SAVED_ZONE_BOOLEAN
// #undef STOP_SEC_VAR_SAVED_ZONE_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_SAVED_ZONE_BOOLEAN_NO_MATCH
// #undef START_SEC_VAR_SAVED_ZONE_BOOLEAN_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:94  Section name : VAR_CLONE_64*/
// #elif defined START_SEC_VAR_CLONE_64
// #undef START_SEC_VAR_CLONE_64
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_CLONE_64_NO_MATCH
// __attribute__((section("VAR_CLONE.GLOBAL.DEFAULT.64")))

// #elif defined STOP_SEC_VAR_CLONE_64
// #undef STOP_SEC_VAR_CLONE_64
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_CLONE_64_NO_MATCH
// #undef START_SEC_VAR_CLONE_64_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:95  Section name : VAR_CLONE_UNSPECIFIED*/
// #elif defined START_SEC_VAR_CLONE_UNSPECIFIED
// #undef START_SEC_VAR_CLONE_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_CLONE_UNSPECIFIED_NO_MATCH
// __attribute__((section("VAR_CLONE.GLOBAL.DEFAULT.UNSPECIFIED")))

// #elif defined STOP_SEC_VAR_CLONE_UNSPECIFIED
// #undef STOP_SEC_VAR_CLONE_UNSPECIFIED
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_CLONE_UNSPECIFIED_NO_MATCH
// #undef START_SEC_VAR_CLONE_UNSPECIFIED_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:96  Section name : VAR_CLONE_PTR*/
// #elif defined START_SEC_VAR_CLONE_PTR
// #undef START_SEC_VAR_CLONE_PTR
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_CLONE_PTR_NO_MATCH
// __attribute__((section("VAR_CLONE.GLOBAL.DEFAULT.PTR")))

// #elif defined STOP_SEC_VAR_CLONE_PTR
// #undef STOP_SEC_VAR_CLONE_PTR
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_CLONE_PTR_NO_MATCH
// #undef START_SEC_VAR_CLONE_PTR_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:97  Section name : VAR_CLONE_32*/
// #elif defined START_SEC_VAR_CLONE_32
// #undef START_SEC_VAR_CLONE_32
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_CLONE_32_NO_MATCH
// __attribute__((section("VAR_CLONE.GLOBAL.DEFAULT.32")))

// #elif defined STOP_SEC_VAR_CLONE_32
// #undef STOP_SEC_VAR_CLONE_32
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_CLONE_32_NO_MATCH
// #undef START_SEC_VAR_CLONE_32_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:98  Section name : VAR_CLONE_16*/
// #elif defined START_SEC_VAR_CLONE_16
// #undef START_SEC_VAR_CLONE_16
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_CLONE_16_NO_MATCH
// __attribute__((section("VAR_CLONE.GLOBAL.DEFAULT.16")))

// #elif defined STOP_SEC_VAR_CLONE_16
// #undef STOP_SEC_VAR_CLONE_16
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_CLONE_16_NO_MATCH
// #undef START_SEC_VAR_CLONE_16_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:99  Section name : VAR_CLONE_8*/
// #elif defined START_SEC_VAR_CLONE_8
// #undef START_SEC_VAR_CLONE_8
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_CLONE_8_NO_MATCH
// __attribute__((section("VAR_CLONE.GLOBAL.DEFAULT.8")))

// #elif defined STOP_SEC_VAR_CLONE_8
// #undef STOP_SEC_VAR_CLONE_8
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_CLONE_8_NO_MATCH
// #undef START_SEC_VAR_CLONE_8_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// /*Index:100  Section name : VAR_CLONE_BOOLEAN*/
// #elif defined START_SEC_VAR_CLONE_BOOLEAN
// #undef START_SEC_VAR_CLONE_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifndef MEMMAP_H_ERROR_SEC_NO_MATCH
// #define MEMMAP_H_ERROR_SEC_NO_MATCH
// #else
// #error "MemMap.h, section is used consecutively many times."
// #endif
// #define START_SEC_VAR_CLONE_BOOLEAN_NO_MATCH
// __attribute__((section("VAR_CLONE.GLOBAL.DEFAULT.BOOLEAN")))

// #elif defined STOP_SEC_VAR_CLONE_BOOLEAN
// #undef STOP_SEC_VAR_CLONE_BOOLEAN
// #undef MEMMAP_H_ERROR
// #ifdef START_SEC_VAR_CLONE_BOOLEAN_NO_MATCH
// #undef START_SEC_VAR_CLONE_BOOLEAN_NO_MATCH
// #else
// #error "MemMap.h, no matching section was used."
// #endif
// #ifdef MEMMAP_H_ERROR_SEC_NO_MATCH
// #undef MEMMAP_H_ERROR_SEC_NO_MATCH
// #endif
// /* No Mapping */
// #endif

// #if defined MEMMAP_H_ERROR
// /* #error "MemMap.h, wrong pragma command" */ /* PRQA S 2053 */ /* VL_MemMap_2053 */
// #endif

// /* PRQA S 0883,0791,0793,3116 -- */
