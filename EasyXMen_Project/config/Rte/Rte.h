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
 * @file        : Rte.h
 * @licence     : 
 * @date        : 2026-09-12 18:25:45
 * @customer    : iSoft
 * @description : Header file containing RTE types
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/
#ifndef RTE_H
#define RTE_H
/* ================================================ misar justifications ============================================ */
/**
  \page ISOFT_MISRA_Exceptions  MISRA-C:2012 Compliance Exceptions
    ModeName:Rte
  RuleSorce:puhua_rules-2024.12.rcf
      
    \li VL_Rte_SimilarIdentifier
      Reason: The name is determined by the configuration.If the configuration contains a large number of similar strings, the concatenated names generated from them will also be similar.
      Risk: Older compilers may interpret it as the same identifier.Most scenarios carry no risk.
      Prevention: To the extent that it does not affect other components, maximize the differentiation in element naming.

    \li VL_Rte_DeadLoop
      Reason: The loop exits only after the Callback function has finished executing.
      Risk: It may cause blocking.
      Prevention: Code inspection and test of the different configurations in the component test.

    \li VL_Rte_Redeclaration
      Reason: It is declared in two places to facilitate the design of header file inclusion relationships.
      Risk: No risk.
      Prevention: None.
    
    \li VL_Rte_Redeclaration_Diff
      Reason: Two function declarations exist: one includes parameter names, while the other specifies only the parameter types. This design is allowed.
      Risk: No risk.
      Prevention: None.

    \li VL_Rte_AlwaysTrue
      Reason: Generation because of the configurations.
      Risk: Code redundancy and may difficult to maintain
      Prevention: Code inspection and test of the different configurations in the component test.

    \li VL_Rte_DiffDataType
      Reason: DataType is determined by the configuration.
      Risk: Code redundancy and may difficult to maintain
      Prevention: Code inspection and test of the different configurations in the component test.

    \li VL_Rte_SignedToUnsigned
      Reason: The value of the integer constant or constant expression is non-negative and within the representable range of the target unsigned type.Although it is essentially signed, the conversion is safe, well-defined, and does not introduce unintended behavior.
      Risk: No risk.
      Prevention: None.

    \li VL_Rte_SignedToBool
      Reason: The conversion from an essentially signed integer constant to _Bool is intentional and safe, since the assigned value represents a valid Boolean state.This does not affect the correctness or safety of the program.
      Risk: No risk.
      Prevention: None.

    \li VL_Rte_UnrecognizedCode
      Reason: Code is correct.
      Risk: Code redundancy and may difficult to maintain
      Prevention: Code inspection and test of the different configurations in the component test.

    \li VL_Rte_GlobalVarUsed
      Reason: The number of times GlobalVar is used depends on the configuration.
      Risk: Code redundancy and may difficult to maintain
      Prevention: Code inspection and test of the different configurations in the component test.

    \li VL_Rte_VarInitTypeDiff
      Reason: The Initvalue of Var is depends on the configuration.
      Risk: Code redundancy and may difficult to maintain
      Prevention: Configuration should be right.

    \li VL_Rte_MaCroDefExpression
      Reason: Macro definitions such as error reporting and offset calculation are multi-line definitions.
      Risk: The macro defines format requirements, no risk.
      Prevention: Correctness and reliability have been guaranteed through unit and functional testing.

    \li VL_Rte_UnLinked
      Reason: The usage of this file depends on the config
      Risk: No risk.
      Prevention: Functional reliability guaranteed by design.

    \li VL_Rte_RedundantCode
      Reason: The code is generated by the tool,The architecture needs to be revised, which will have a significant impact.
      Risk: Code redundancy and may difficult to maintain
      Prevention: Code inspection and test of the different configurations in the component test.

    \li VL_Rte_StaticGlobalVariable
      Reason: File scoped variables only used in one function are necessary for functional usage
      Risk: Code redundancy and may difficult to maintain.
      Prevention: Code inspection and test of the different configurations in the component test.

    \li VL_Rte_StaticVariable
      Reason: The architecture needs to be revised, which will have a significant impact.
      Risk: Code redundancy and may difficult to maintain
      Prevention: Code inspection and test of the different configurations in the component test.

    \li VL_Rte_VoidPtrtoObjPtr
      Reason: The cast between void* and objectptr type is flagged because it bypasses type safety and may indicate poor design. In this case, the void* parameter is cast to objptr at runtime for practical handling of generic data.
      Risk: No risk.
      Prevention: None.

    \li VL_Rte_SwitchEndNoJump
      Reason: The SwitchCase code is depends on the configuration.
      Risk: Code redundancy and may difficult to maintain
      Prevention: Code inspection and test of the different configurations in the component test.

    \li VL_Rte_ReturnValNoUsed
      Reason: Return value may be used.
      Risk: Code redundancy and may difficult to maintain
      Prevention: Code inspection and test of the different configurations in the component test.

    \li VL_Rte_NoFuncParaIdentifier
      Reason: Based on the code prescribed by AUTOSAR.Moreover, doing so is safe in the C language.
      Risk: No risk.
      Prevention: None.
     
    \li VL_Rte_MacroUse
      Reason: The parameter's usage within the macro definition is not parenthesised
      Risk: May produce unexpected behaviour if the text of the argument were to change in future
      Prevention: Enclose the parameters in the macro definition in parentheses.

    \li VL_Rte_Mutitypedef
      Reason: The typedef declarations are generated based on configuration. Duplicate declarations may occur when the same configuration items are defined multiple times. These declarations are identical and therefore do not affect the correctness of the program.
      Risk: Multiple declarations of the same identifier may reduce code readability and could cause maintenance issues if the declarations become inconsistent.
      Prevention: Ensure that configuration items are unique to avoid generating duplicate declarations where possible.

    \li VL_Rte_NoDefination
      Reason: It is implemented by other modules, and its definition is located in files related to those modules.
      Risk: No risk.
      Prevention: None.

    \li VL_Rte_DoWhile
      Reason: the do-while statement is used to enclose macro definition
      Risk: Performance reduction and code redundancy.
      Prevention: Code inspection and test of the different configurations in the component test.

    \li VL_Rte_DataTypeImplicitConvert
      Reason: Generation because of the configurations.
      Risk: If the symbol number is negative, the value will be unexpected.
      Prevention: The number with a sign is definitely a positive number.

    \li VL_Rte_NumericSuffix
      Reason: The Suffixes were generated by configuration
      Risk: may cause compilation errors or runtime errors.
      Prevention: Modify the configuration

    \li VL_Rte_NoModifyVariable
      Reason: The variables will be modified in dataflow followed
      Risk: No risk.
      Prevention: None.
    
    \li VL_Rte_VariableNoUse
      Reason: Allow the definition of some unused variables,which defined by configuration
      Risk: Performance reduction and code redundancy.
      Prevention: Code inspection and test of the different configurations in the component test.

    \li VL_Rte_UnionDefined
      Reason: The union object is defined by configuration
      Risk: Performance reduction and code redundancy.
      Prevention: Code inspection and test of the different configurations in the component test.

    \li VL_Rte_ArrayQualifier
      Reason: DataType is determined by the configuration.
      Risk: Performance reduction and code redundancy.
      Prevention: C23 support

    \li VL_Rte_UniqueDefinition
      Reason: The objects are in different namespaces
      Risk: Performance reduction and code redundancy.
      Prevention: Ensure through compilation

    \li VL_Rte_AlwaysFalse
      Reason: Generation because of the configurations.
      Risk: Code redundancy and may difficult to maintain
      Prevention: Code inspection and test of the different configurations in the component test.

    \li VL_Rte_FuncNoUsed
      Reason: Func may be used.
      Risk: Code redundancy and may difficult to maintain
      Prevention: Code inspection and test of the different configurations in the component test.
    
    \li VL_Rte_Standard
      Reason: The AUTOSAR standard specifies this.
      Risk: No risk.
      Prevention: None.
    
    \li VL_Rte_PtrArithmetic
      Reason: For calculating the address.
      Risk: Out of bounds.
      Prevention: To make sure not be out of bounds by other variables.
    
    \li VL_Rte_MacroArgumentNotParenthesized
      Reason: The macro argument is only used in a simple context where operator precedence does not affect the result. Therefore, the absence of parentheses does not lead to unexpected behavior.
      Risk: May produce unexpected behaviour if the text of the argument were to change in future
      Prevention: Enclose the parameters in the macro definition in parentheses.

    \li VL_MTR_Rte_STPAR
      Reason: The API is defined by the AUTOSAR standard. The standard compliance vote is higher than the measurement threshold.
      Risk: For the target uC, the stack usage and runtime are too high.
      Prevention: When testing the result code on the target uC, the user must check the stack usage in the project context.

    \li VL_MTR_Rte_STCYC
      Reason: The functions were not separated into sub-functions because there were higher requirements for minimizing the stack and applying them to the runtime usage of the code
      Risk: Understandability and testability may become overly complex.
      Prevention: Design and code review + clear structure and annotated code.
    
    \li VL_MTR_Rte_STLIN
      Reason: Some function logics are overly complex. Splitting and implementing them will lead to reduced performance.
      Risk: The code is difficult to maintain.
      Prevention: Design and code review, clear structure and annotated code.

    \li VL_MTR_Rte_STMIF
      Reason: Tasks must handle different scenarios based on local conditions, which leads to deep control nesting. Since shared code outweighs the variants, deeper nesting is acceptable to keep the code size small.
      Risk: The code is difficult to maintain.
      Prevention: Design and code review, clear structure and annotated code.
    
    \li VL_MTR_Rte_STST3
      Reason: Some functions logic is too complex; splitting them would degrade performance.
      Risk: The code is difficult to maintain.
      Prevention: Design and code review, clear structure and annotated code.

    \li VL_MTR_Rte_STPTH
      Reason: Functionality wasn't split into subroutines because there are stricter demands on minimizing stack usage and runtime footprint.
      Risk: The code is difficult to maintain.
      Prevention: Design and code review, clear structure and annotated code.

    \li VL_MTR_Rte_STSCT
      Reason: RTE operation requires many static variables.
      Risk: Static variables have global lifetimes; an excess of them can create implicit inter-module dependencies and increase code coupling.
      Prevention: Design and code review, clear structure and annotated code.

    \li VL_MTR_Rte_STCDN
      Reason: Comments adhere to PH standards.
      Risk: A high comment-to-code ratio may indicate that the code is overly complex or verbose.
      Prevention: Reduce reliance on comments by optimizing code logic.

    \li VL_MTR_Rte_STECT
      Reason: The total variable count is tied to user configuration; dynamic code may exceed this under extreme conditions.
      Risk: The code is difficult to maintain, and the data flow is complex.
      Prevention: Design and code review, clear structure and annotated code.

    \li VL_MTR_Rte_STVAR
      Reason: Variable count is tied to user configuration, and dynamic code may exceed it under extreme conditions.
      Risk: The code is difficult to maintain.
      Prevention: Design and code review, clear structure and annotated code.

    \li VL_MTR_Rte_CONF
      Reason: Configuration files do not need particularly many useless comments.
      Risk: No risk.
      Prevention: Functional reliability guaranteed by design.

    \li VL_MTR_Rte_STTPP
      Reason: The number of code lines is related to configuration.
      Risk: The code becomes less readable.
      Prevention: Design and code review, clear structure and annotated code.

    \li VL_MTR_Rte_STCAL
      Reason: The software structure is defined according to the AUTOSAR standard..
      Risk: Understandability and testability may become overly complex.
      Prevention: Design and code review + clear structure and annotated code.

 */
/*******************************************************************************
**                        RTE Version                                         **
*******************************************************************************/
#define RTE_VENDOR_ID (62U)
#define RTE_MODULE_ID (2U)

#define RTE_AR_RELEASE_MAJOR_VERSION     (4U)
#define RTE_AR_RELEASE_MINOR_VERSION     (5U)
#define RTE_AR_RELEASE_REVISION_VERSION  (0U)

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Std_Types.h"
#include "ComStack_Types.h"
#include "IStdLib.h"
#include "Rte_PBcfg.h"
#define Rte_MemCpy IStdLib_MemCpy
/*******************************************************************************
**                      Global Macros                                        **
*******************************************************************************/
/* Common Errors */
#define RTE_E_OK               (0U)
#define RTE_E_INVALID          (1U)

/* Overlayed Errors */
#define RTE_E_LOST_DATA        (64U)
#define RTE_E_MAX_AGE_EXCEEDED (64U)

/* Immediate Infrastructure Errors */
#define RTE_E_COM_STOPPED      (128U)
#define RTE_E_TIMEOUT          (129U)
#define RTE_E_LIMIT            (130U)
#define RTE_E_NO_DATA          (131U)
#define RTE_E_TRANSMIT_ACK     (132U)
#define RTE_E_NEVER_RECEIVED   (133U)
#define RTE_E_UNCONNECTED            (134U)
#define RTE_E_IN_EXCLUSIVE_AREA      (135U)
#define RTE_E_SEG_FAULT              (136U)
#define RTE_E_OUT_OF_RANGE           (137U)
#define RTE_E_SERIALIZATION_ERROR    (138U)
#define RTE_E_HARD_TRANSFORMER_ERROR (138U)
#define RTE_E_SERIALIZATION_LIMIT    (139U)
#define RTE_E_TRANSFORMER_LIMIT      (139U)
#define RTE_E_SOFT_TRANSFORMER_ERROR (140U)
#define RTE_E_COM_BUSY               (141U)

/* SchM Related */
#define SCHM_E_OK                    (0U)
/* Common SchM Errors */
#define SCHM_E_TIMEOUT               (129U)
#define SCHM_E_LIMIT                 (130U)
#define SCHM_E_NO_DATA               (131U)
#define SCHM_E_TRANSMIT_ACK          (132U)
#define SCHM_E_IN_EXCLUSIVE_AREA     (135U)
#define SCHM_E_DEV_DEFECT            (191U)
#define SCHM_INVALID_COREID          (255U)

/* Macro Error Check */
#define Rte_HasOverlayedError(status) (((status) & 64U) != 0U)
#define Rte_IsInfrastructureError(status) (((status) & 128U) != 0U)
#define Rte_IsHardTransformerError Rte_IsInfrastructureError
#define Rte_ApplicationError(status) ((status) & 63U)

#endif /*RTE_H*/
