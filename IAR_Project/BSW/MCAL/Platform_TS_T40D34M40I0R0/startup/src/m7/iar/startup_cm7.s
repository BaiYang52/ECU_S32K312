/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : 
*   Dependencies         : none
*
*   Autosar Version      : 4.7.0
*   Autosar Revision     : ASR_REL_4_7_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 4.0.0
*   Build Version        : S32K3_RTD_4_0_0_P24_D2405_ASR_REL_4_7_REV_0000_20240515
*
*   Copyright 2020 - 2024 NXP
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
*/
/*==================================================================================================
*   @file    startup_cm7.s
*   @version 4.0.0
*
*   @brief   AUTOSAR Platform - Startup file for ARM.
*   @details Startup file for ARM.
*            This file contains sample code only. It is not part of the production code deliverables
*   @addtogroup BUILD_ENV
*   @{
*
==================================================================================================*/

#ifdef MULTIPLE_IMAGE
    #define RAM_DATA_INIT_ON_ALL_CORES
    /* If this is a secodary core, it shall wait for the MSCM clock to be initialized */
    #if defined(CORE1)||defined(CORE2)||defined(CORE3)
        #define NO_MSCM_CLOCK_INIT
    #endif
#endif

#define MAIN_CORE 0
#define CORE_M7_0 0
#define CORE_M7_1 1
#define CORE_M7_2 2
#define CORE_M7_3 3

#define MCME_CTL_KEY                0x402DC000
#define MCME_PRTN1_PUPD             0x402DC304
#define MCME_PRTN1_STAT             0x402DC308
#define MCME_PRTN1_COFB0_CLKEN      0x402DC330
#define MCME_PRTN1_COFB0_STAT       0x402DC310
#define MCRGM_DES                   0x4028C000

#define MCME_MSCM_REQ               (1 << 24)
#define MCRGM_DES_F_POR             (1)
#define MCME_KEY                    0x5AF0
#define MCME_INV_KEY                0xA50F
#define VTOR_REG                    0xE000ED08
#define CM7_ITCMCR                  0xE000EF90
#define CM7_DTCMCR                  0xE000EF94

    MODULE  ?cstartup

    ;; Forward declaration of sections.
    SECTION CSTACK:DATA:NOROOT(3)

    EXTERN  main
    EXTERN  SystemInit
    EXTERN  Enable_FPU
    EXTERN  init_data_bss
    EXTERN  init_data_bss_core2
    EXTERN  RESET_CATCH_CORE
    EXTERN  VTABLE
    EXTERN __Stack_dtcm_start
    EXTERN __RAM_INIT
    EXTERN __INT_SRAM_START
    EXTERN __INT_SRAM_END
    EXTERN __ITCM_INIT
    EXTERN __INT_ITCM_START
    EXTERN __INT_ITCM_END
    EXTERN __DTCM_INIT
    EXTERN __INT_DTCM_START
    EXTERN __INT_DTCM_END
    EXTERN rwBlock$$Base
    EXTERN rwBlock$$Limit
    EXTERN rwMcalDataBlock$$Base
    EXTERN rwMcalDataBlock$$Limit
    EXTERN ramCodeBlock$$Base
    EXTERN ramCodeBlock$$Limit
    EXTERN dataShBlock$$Base
    EXTERN dataShBlock$$Limit
    EXTERN dataNcBlock$$Base
    EXTERN dataNcBlock$$Limit
    EXTERN constNcBlock$$Base
    EXTERN constNcBlock$$Limit
    EXTERN cacheable_data_init$$Base
    EXTERN cacheable_data_init$$Limit
    EXTERN cacheable_mcal_data_init$$Base
    EXTERN cacheable_mcal_data_init$$Limit
    EXTERN cacheable_code_init$$Base
    EXTERN cacheable_code_init$$Limit
    EXTERN non_cacheable_data_init$$Base
    EXTERN non_cacheable_data_init$$Limit
    EXTERN non_cacheable_const_init$$Base
    EXTERN non_cacheable_const_init$$Limit
    EXTERN intcVectorBlock$$Base
    EXTERN interrupt_vector_init$$Base
    EXTERN interrupt_vector_init$$Limit
    EXTERN shareable_data_init$$Base
    EXTERN shareable_data_init$$Limit
    EXTERN dataDtcmBlock$$Base
    EXTERN dtcmDataBlock_init$$Base
    EXTERN dtcmDataBlock_init$$Limit
    EXTERN textItcmBlock$$Base
    EXTERN itcmCodeBlock_init$$Base
    EXTERN itcmCodeBlock_init$$Limit
    EXTERN .bss$$Base
    EXTERN .bss$$Limit
    EXTERN .mcal_bss$$Base
    EXTERN .mcal_bss$$Limit
    EXTERN .mcal_bss_no_cacheable$$Base
    EXTERN .mcal_bss_no_cacheable$$Limit
    EXTERN .mcal_shared_bss$$Base
    EXTERN .mcal_shared_bss$$Limit
    EXTERN startup_go_to_user_mode
    EXTERN __CORE0_VTOR
    EXTERN __CORE1_VTOR
    EXTERN __CORE2_VTOR
    PUBLIC  __INIT_TABLE
    PUBLIC  __ZERO_TABLE
    PUBLIC  _core_loop
    PUBLIC  _start

SBAF_BOOT_MARKER   EQU (0x5AA55AA5)
CM7_0_ENABLE_SHIFT EQU (0)
CM7_1_ENABLE_SHIFT EQU (1)
CM7_2_ENABLE_SHIFT EQU (2)
CM7_0_ENABLE       EQU (1)
#ifndef CM7_1_ENABLE
CM7_1_ENABLE EQU (0)
#endif
#ifndef CM7_2_ENABLE
CM7_2_ENABLE EQU (0)
#endif
CM7_0_VTOR_ADDR    EQU (__CORE0_VTOR)
CM7_1_VTOR_ADDR    EQU (__CORE1_VTOR)
CM7_2_VTOR_ADDR    EQU (__CORE2_VTOR)
XRDC_CONFIG_ADDR   EQU (0)
LF_CONFIG_ADDR     EQU (0)

/* Table for copying and zeroing */
/* Copy table:
  - Table entries count
    - entry one ram start
    - entry one rom start
    - entry one rom end
    ...
    - entry n ram start
    - entry n rom start
    - entry n rom end
  Zero Table:
    - Table entries count
      - entry one ram start
      - entry one ram end
*/
    SECTION .init_table:CONST(4)
__INIT_TABLE
    DCD 9
    DCD rwBlock$$Base
    DCD cacheable_data_init$$Base
    DCD cacheable_data_init$$Limit
    DCD rwMcalDataBlock$$Base
    DCD cacheable_mcal_data_init$$Base
    DCD cacheable_mcal_data_init$$Limit
    DCD ramCodeBlock$$Base
    DCD cacheable_code_init$$Base
    DCD cacheable_code_init$$Limit
    DCD dataNcBlock$$Base
    DCD non_cacheable_data_init$$Base
    DCD non_cacheable_data_init$$Limit
    DCD constNcBlock$$Base
    DCD non_cacheable_const_init$$Base
    DCD non_cacheable_const_init$$Limit
    DCD dataShBlock$$Base
#if (!defined(CORE0) && defined(MULTIPLE_IMAGE))
    DCD 0
    DCD 0
#else
    DCD shareable_data_init$$Base
    DCD shareable_data_init$$Limit
#endif
    DCD intcVectorBlock$$Base
    DCD interrupt_vector_init$$Base
    DCD interrupt_vector_init$$Limit
    DCD dataDtcmBlock$$Base
    DCD dtcmDataBlock_init$$Base
    DCD dtcmDataBlock_init$$Limit
    DCD textItcmBlock$$Base
    DCD itcmCodeBlock_init$$Base
    DCD itcmCodeBlock_init$$Limit
__INIT_TABLE_END
    SECTION .zero_table:CONST(4)
__ZERO_TABLE
    DCD 4
    DCD .bss$$Base
    DCD .bss$$Limit
    DCD .mcal_bss$$Base
    DCD .mcal_bss$$Limit
    DCD .mcal_bss_no_cacheable$$Base
    DCD .mcal_bss_no_cacheable$$Limit
#if (!defined(CORE0) && defined(MULTIPLE_IMAGE))
    DCD 0
    DCD 0
#else
    DCD .mcal_shared_bss$$Base
    DCD .mcal_shared_bss$$Limit
#endif
__ZERO_TABLE_END

    THUMB
    SECTION .core_loop:CODE
_core_loop
    NOP
    NOP
    NOP
    NOP
    B _core_loop

    SECTION .boot_header:CONST(4)
    DCD SBAF_BOOT_MARKER /* IVT marker */
    DCD (CM7_0_ENABLE << CM7_0_ENABLE_SHIFT) | (CM7_1_ENABLE << CM7_1_ENABLE_SHIFT) | (CM7_2_ENABLE << CM7_2_ENABLE_SHIFT) /* Boot configuration word */
    DCD 0 /* Reserved */
    DCD CM7_0_VTOR_ADDR /* CM7_0 Start address */
    DCD 0 /* Reserved */
    DCD CM7_1_VTOR_ADDR /* CM7_1 Start address */
    DCD 0 /* Reserved */
    DCD CM7_2_VTOR_ADDR /* CM7_2 Start address */
    DCD 0 /* Reserved */
    DCD XRDC_CONFIG_ADDR /* XRDC configuration pointer */
    DCD LF_CONFIG_ADDR /* Lifecycle configuration pointer */
    DCD 0 /* Reserved */


/************************************************************************/
/* Autosar startup code (See MCU Specification):                        */
/*                                                                      */
/*   Before the MCU driver can be initialized, a basic initialization   */
/*   of the MCU has to be executed. This MCU specific initialization is */
/*   typically executed in a start-up code. The start-up code of the    */
/*   MCU shall be executed after power up and any kind of micro-        */
/*   controller reset. It shall perform very basic and microcontroller  */
/*   specific start-up initialization and shall be kept short, because  */
/*   the MCU clock and PLL is not yet initialized. The start-up code    */
/*   shall cover MCU specific initialization, which is not part of      */
/*   other MCU services or other MCAL drivers. The following steps      */
/*   summarizes basic functionality which shall be included in the      */
/*   start-up code. They are listed for guidance, because some          */
/*   functionality might not be supported. No code will be found in     */
/*   case.                                                              */
/************************************************************************/

    THUMB
    PUBWEAK Reset_Handler
    SECTION .startup:CODE:REORDER:NOROOT(2)
_start:
Reset_Handler:
/*****************************************************/
/* Skip normal entry point as nothing is initialized */
/*****************************************************/
    CPSID   I               ; Mask interrupts
    ;; Init the rest of the registers
    LDR     R1,=0
    LDR     R2,=0
    LDR     R3,=0
    LDR     R4,=0
    LDR     R5,=0
    LDR     R6,=0
    LDR     R7,=0
    MOV     R8,R7
    MOV     R9,R7
    MOV     R10,R7
    MOV     R11,R7
    MOV     R12,R7


/************************************************************************/
/* Delay trap for debugger attachs before touching any peripherals      */
/* This is workaround for debugger cannot handle halt process properly, */
/* User can safely disable this delay trap using -DDISABLE_DEBUGGER_TRAP*/
/************************************************************************/
#ifndef DISABLE_DEBUGGER_TRAP
    MOV R0, #100
DELAY_LOOP:
    SUBS R0, #1
    CMP R0,#0
    BGT DELAY_LOOP
#endif

/******************************************************************************/
/*                      MSCM initialization process                           */
/* Only Master core can initialize clock for MSCM module in multicore testing */
/******************************************************************************/
#ifndef NO_MSCM_CLOCK_INIT
InitMSCMClock:
    /* If the MSCM clock is enabled, skip this sequence */
    LDR R0, =MCME_PRTN1_COFB0_STAT
    LDR R1, [R0]
    LDR R2, =MCME_MSCM_REQ
    AND R1, R1, R2
    CMP R1, #0
    BNE EndInitMSCMClock

    /* Step1: Enable clock in PRTN1 */
    LDR R0, =MCME_PRTN1_COFB0_CLKEN
    LDR R1, [R0]
    LDR R2, =MCME_MSCM_REQ
    ORR R1, R2
    STR R1, [R0]

    /* Step2: Set PUPD field */
    LDR R0, =MCME_PRTN1_PUPD
    LDR R1, [R0]
    LDR R2, =1
    ORR R1, R2 
    STR R1, [R0]

    /* Step3: Trigger update by writing valid key */
    LDR R0, =MCME_CTL_KEY
    LDR R1, =MCME_KEY
    STR R1, [R0]
    LDR R1, =MCME_INV_KEY
    STR R1, [R0]

    /* Step4: Wait for process to complete */
    WaitForInitProcess:
    LDR R0, =MCME_PRTN1_PUPD
    LDR R1, [R0]
    LDR R2, =1
    AND R1, R1, R2
    CMP R1, #1
    BEQ WaitForInitProcess
#endif
    /* Step5: Check if the MSCM clock is enabled */
#ifndef SIM_TYPE_VDK
WaitForClock:
    LDR R0, =MCME_PRTN1_COFB0_STAT
    LDR R1, [R0]
    LDR R2, =MCME_MSCM_REQ
    AND R1, R1, R2
    CMP R1, #0
    BEQ WaitForClock
#endif
#ifndef NO_MSCM_CLOCK_INIT
EndInitMSCMClock:
#endif
/*******************************************************************/
/* NXP Guidance  - Init registers to avoid lock-step issues        */
/* N/A                                                             */
/*******************************************************************/

/*******************************************************************/
/* NXP Guidance   - MMU Initialization for CPU                     */
/*  TLB0 - PbridgeB                                                */
/*  TLB1 - Internal Flash                                          */
/*  TLB2 - External SRAM                                           */
/*  TLB3 - Internal SRAM                                           */
/*  TLB4 - PbridgeA                                                */
/*******************************************************************/
/******************************************************************/
/* Autosar Guidance   - The start-up code shall ensure that the   */
/* MCU internal watchdog shall not be serviced until the watchdog */
/* is initialized from the MCAL watchdog driver. This can be      */
/* done for example by increasing the watchdog service time.      */
/*                                                                */
/******************************************************************/

#ifdef MULTIPLE_CORE
    /*GetCoreID*/
    LDR  R0, =0x40260004
    LDR  R1,[R0]

    LDR  R0, =MAIN_CORE
    CMP  R1,R0
    BNE  SetVTOR
#endif

    /* Disable wdg0 */
    LDR  R0, =0x40270010
    LDR  R1, =0xC520
    STR  R1, [R0]
    LDR  R1, =0xD928
    STR  R1, [R0]
    LDR  R0, =0x40270000
    LDR  R1, =0xFF000040
    STR  R1, [R0]

/******************************************************************/
/* Autosar Guidance - The start-up code shall initialize the      */
/* base addresses for interrupt and trap vector tables. These base*/
/* addresses are provided as configuration parameters or          */
/* linker/locator setting.                                        */
/******************************************************************/
SetVTOR:
    /* Set VTOR to default vector table */
    LDR R0, =VTOR_REG
    LDR R1, =interrupt_vector_init$$Base
    STR R1,[R0]

/******************************************************************/
/* Autosar Guidance  - The start-up code shall initialize the     */
/* interrupt stack pointer, if an interrupt stack is              */
/* supported by the MCU. The interrupt stack pointer base address */
/* and the stack size are provided as configuration parameter or  */
/* linker/locator setting.                                        */
/*                                                                */
/******************************************************************/
    /* Enable DTCM and Disable RETEN bit */
    LDR R1, =CM7_DTCMCR
    LDR R0, [R1]
    BIC R0, R0, #0x4
    ORR R0, R0, #0x1
    STR R0, [R1]
    /* Enable ITCM and Disable RETEN bit */
    LDR R1, =CM7_ITCMCR
    LDR R0, [R1]
    BIC R0, R0, #0x4
    ORR R0, R0, #0x1
    STR R0, [R1]

#if defined(MULTIPLE_CORE) && !defined(MULTIPLE_IMAGE)
    /*GetCoreID*/
    LDR R0, =0x40260004
    LDR R1,[R0]

    LDR R0, =MAIN_CORE
    CMP R1,R0
    BNE DTCM_Init
#endif

/******************************************************************/
/* Autosar Guidance   - If the MCU supports context save          */
/* operation, the start-up code shall initialize the memory which */
/* is used for context save operation. The maximum amount of      */
/* consecutive context save operations is provided as             */
/* configuration parameter or linker/locator setting.             */
/*                                                                */
/******************************************************************/

/******************************************************************/
/* Autosar Guidance    - The start-up code shall initialize a     */
/* minimum amount of RAM in order to allow proper execution of    */
/* the MCU driver services and the caller of these services.      */
/******************************************************************/
RamInit:
    /* Initialize SRAM ECC */
    LDR  R0, =__RAM_INIT
    CMP  R0, #0
    /* Skip if __SRAM_INIT is not set */
    BEQ SRAM_LOOP_END

    LDR R0, =MCRGM_DES
    LDR R1, [R0]
    LDR R2, =MCRGM_DES_F_POR
    AND R1, R1, R2
    CMP R1, #0
    BEQ NO_INIT_STANDBY_REGION

    ldr R2, =__INT_SRAM_START
    ldr R3, =__INT_SRAM_END
    b   ZERO_64B_RAM

NO_INIT_STANDBY_REGION:
#ifdef EXTEND_LOWRAM_DERIVATIVES
    #if defined(S32K310)||defined(S32K311)||defined(S32M276)||defined(S32M274)
    LDR R2, =.mcal_bss_no_cacheable$$Base
    #else
    LDR R2, =.bss$$Base
    #endif
#else
    LDR R2, =.bss$$Base
#endif
    LDR R3, =__INT_SRAM_END

ZERO_64B_RAM:
    CMP R2, R3
    BGE SRAM_LOOP_END

    MOVS    R0, #0
    MOVS    R1, #0
SRAM_LOOP:
    STRD    R0, R1, [R2], #8
    CMP     R2, R3
    BLT     SRAM_LOOP
SRAM_LOOP_END:

DTCM_Init:
    /* Initialize DTCM ECC */
    LDR     R0, =__DTCM_INIT
    CMP     R0, #0
    /* Skip if __DTCM_INIT is not set */
    BEQ     DTCM_LOOP_END

    LDR     R2, =__INT_DTCM_START
    LDR     R3, =__INT_DTCM_END
    
    CMP     R2, R3
    BGE     DTCM_LOOP_END

    MOVS    R0, #0
    MOVS    R1, #0
DTCM_LOOP:
    strd    R0, R1, [R2], #8
    CMP     R2, R3
    blt     DTCM_LOOP
DTCM_LOOP_END:

ITCM_Init:
    /* Initialize ITCM ECC */
    LDR     R0, =__ITCM_INIT
    CMP     R0, #0
    /* Skip if __TCM_INIT is not set */
    BEQ     ITCM_LOOP_END

    LDR     R2, =__INT_ITCM_START
    LDR     R3, =__INT_ITCM_END
    
    CMP     R2, R3
    BGE     ITCM_LOOP_END

    MOVS    R0, #0
    MOVS    R1, #0
ITCM_LOOP:
    STRD    R0, R1, [R2], #8
    CMP     R2, R3
    BLT     ITCM_LOOP
ITCM_LOOP_END:

DebuggerHeldCoreLoop:
    LDR     R0, =RESET_CATCH_CORE
    LDR     R0, [R0]
    LDR     R1, =0x5A5A5A5A
    CMP     R0, R1
    BEQ     DebuggerHeldCoreLoop

/******************************************************************/
/* Autosar Guidance   - The start-up code shall initialize the    */
/* user stack pointer. The user stack pointer base address and    */
/* the stack size are provided as configuration parameter or      */
/* linker/locator setting.                                        */
/******************************************************************/
/* set up stack; r13 SP*/
    LDR  R0, =__Stack_dtcm_start
    MSR MSP, R0

#if defined(MULTIPLE_CORE) && !defined(MULTIPLE_IMAGE)
    LDR  R0, =0x40260004
    LDR  R1,[R0]
    LDR  R0, =MAIN_CORE
    CMP  R1,R0
    BNE  _DATA_INIT

#if (CM7_1_ENABLE == 0)
EnableCore1:
    LDR  R0, =0x402DC168
    LDR  R1, [R0]
    LDR  R2, =1
    AND  R1, R1, R2
    CMP  R1, #0
    BNE  EndEnableCore1

    LDR  R0, =0x402DC16C     /* MC_ME.PRTN0_CORE1_ADDR */
    LDR  R1, =interrupt_vector_init$$Base
    STR  R1, [R0]

    LDR  R0, =0x402DC160     /* MC_ME.PRTN0_CORE1_PCONF */
    LDR  R1, =1
    STR  R1, [R0]

    LDR  R0, =0x402DC164     /* MC_ME.PRTN0_CORE1_PUPD */
    STR  R1, [R0]

    LDR  R0, =0x402DC000     /* MC_ME.MC_ME_CTL_KEY */
    LDR  R1, =MCME_KEY
    STR  R1, [R0]

    LDR  R1, =MCME_INV_KEY
    STR  R1, [R0]

WaitForCore1Clock:
    LDR  R0, =0x402DC168
    LDR  R1, [R0]
    LDR  R2, =1
    AND  R1, R1, R2
    CMP  R1, #0
    BEQ  WaitForCore1Clock
EndEnableCore1:
#endif

#if (CM7_2_ENABLE == 0)
EnableCore2:
    LDR  R0, =0x402DC1C8
    LDR  R1, [R0]
    LDR  R2, =1
    AND  R1, R1, R2
    CMP  R1, #0
    BNE  EndEnableCore2

    LDR  R0, =0x402DC1CC     /* MC_ME.PRTN0_CORE2_ADDR */
    LDR  R1, =interrupt_vector_init$$Base
    STR  R1, [R0]

    LDR  R0, =0x402DC1C0     /* MC_ME.PRTN0_CORE2_PCONF */
    LDR  R1, =1
    STR  R1, [R0]

    LDR  R0, =0x402DC1C4     /* MC_ME.PRTN0_CORE2_PUPD */
    STR  R1, [R0]

    LDR  R0, =0x402DC000     /* MC_ME.MC_ME_CTL_KEY */
    LDR  R1, =MCME_KEY
    STR  R1, [R0]

    LDR  R1, =MCME_INV_KEY
    STR  R1, [R0]

WaitForCore2Clock:
    LDR  R0, =0x402DC188
    LDR  R1, [R0]
    LDR  R2, =1
    AND  R1, R1, R2
    CMP  R1, #0
    BEQ  WaitForCore2Clock
EndEnableCore2:
#endif
#endif
/************************/
/* Erase ".bss Section" */
/************************/
_DATA_INIT:
#ifndef RAM_DATA_INIT_ON_ALL_CORES
    /* If this is the primary core, initialize data and bss */
    LDR  R0, =0x40260004
    LDR  R1,[R0]

    LDR  R0, =MAIN_CORE
    CMP  R1,R0
    BEQ  _INIT_DATA_BSS
    BL   init_data_bss_core2
    B    SET_VTOR_TCM
#endif

_INIT_DATA_BSS:
    BL init_data_bss

SET_VTOR_TCM:
/* Set VTOR to default vector table */
    LDR  R0, =VTOR_REG
    LDR  R1, =intcVectorBlock$$Base
    STR  R1,[R0]

/***************************************************************/
/* FPU need to enable prior to data-initialization process,in  */
/* case optimization level set to O3 compiler can utilize SIMD */
/* instruction which required involvement of FPU co-processor  */
/***************************************************************/
    BL   Enable_FPU

/******************************************************************/
/* Autosar Guidance   - If the MCU supports cache memory for data */
/* and/or code, it shall be initialized and enabled in the        */
/* start-up code.                                                 */
/*                                                                */
/******************************************************************/

/******************************************************************/
/* Autosar Guidance   - The start-up code shall initialize MCU    */
/* specific features of internal memory like memory protection.   */
/*                                                                */
/******************************************************************/

/******************************************************************/
/* Autosar Guidance   - If external memory is used, the memory    */
/* shall be initialized in the start-up code. The start-up code   */
/* shall be prepared to support different memory configurations   */
/* depending on code location. Different configuration options    */
/* shall be taken into account for code execution from            */
/* external/internal memory.                                      */
/* N/A - external memory is not used                              */
/******************************************************************/

/******************************************************************/
/* Autosar Guidance   - The settings of the different memories    */
/* shall be provided to the start-up code as configuration        */
/* parameters.                                                    */
/* N/A - all memories are already configured                      */
/******************************************************************/

/******************************************************************/
/* Autosar Guidance    - In the start-up code a default           */
/* initialization of the MCU clock system shall be performed      */
/* including global clock prescalers.                             */
/******************************************************************/
__SYSTEM_INIT:
    bl SystemInit

/******************************************************************/
/* Autosar Guidance   - The start-up code shall ensure that the   */
/* MCU internal watchdog shall not be serviced until the watchdog */
/* is initialized from the MCAL watchdog driver. This can be      */
/* done for example by increasing the watchdog service time.      */
/*                                                                */
/******************************************************************/

/******************************************************************/
/* Autosar Guidance    - The start-up code shall enable           */
/* protection mechanisms for special function registers(SFRs),   */
/* if supported by the MCU.                                       */
/* N/A - will be handled by Autosar OS                            */
/******************************************************************/

/******************************************************************/
/* Autosar Guidance    - The start-up code shall initialize all   */
/* necessary write once registers or registers common to several  */
/* drivers where one write, rather than repeated writes, to the   */
/* register is required or highly desirable.                      */
/******************************************************************/

/*********************************/
/* Set the small ro data pointer */
/*********************************/


/*********************************/
/* Set the small rw data pointer */
/*********************************/

/******************************************************************/
/* Call Main Routine                                              */
/******************************************************************/
_MAIN:
    CPSIE i
    BL startup_go_to_user_mode
    BL main

/******************************************************************/
/* Init runtime check data space                                  */
/******************************************************************/
    PUBLIC MCAL_LTB_TRACE_OFF
MCAL_LTB_TRACE_OFF:
    nop

#ifdef CCOV_ENABLE
    /* code coverage is requested */
    bl ccov_main
#endif

    /*BKPT #1 - removed to avoid debug fault being escalated to hardfault when debugger is not attached or on VDK*/ /* last instruction for the debugger to dump results data */
    PUBLIC _end_of_eunit_test
_end_of_eunit_test:
    b .

#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
    PUBLIC startup_getControlRegisterValue
startup_getControlRegisterValue:
    mrs R0, CONTROL
    bx R14

    PUBLIC startup_getAipsRegisterValue
startup_getAipsRegisterValue:
    mrs R0, IPSR
    bx R14
#endif

    END