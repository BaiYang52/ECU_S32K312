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
 * @file        : Com_Cfg.h
 * @licence     : 
 * @date        : 2026-09-21 00:36:22
 * @customer    : iSoft
 * @description : Pre-compile configuration parameter of Com
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/
#ifndef  COM_CFG_H_
#define  COM_CFG_H_
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Com_PBcfg.h"

/*******************************************************************************
**                      Macros                                                **
*******************************************************************************/
#define COM_CANCELLATION_SUPPORT                STD_ON

#define COM_DEV_ERROR_DETECT                    STD_OFF

#define COM_ENABLE_SIGNAL_GROUP_ARRAY_API       STD_OFF

#define COM_VERSION_INFO_API                    STD_OFF

#define COM_ENABLE_MDT_FOR_CYCLIC_TRANSMISSION  STD_ON

#define COM_METADATA_SUPPORT                    STD_OFF

#define COM_RETRY_FAILED_TRANSMIT_REQUESTS      STD_OFF

#define COM_MULTIPLE_PARTITION_USED             STD_OFF

#define COM_SIGNAL_INITVALUE_SUPPORT            STD_ON

#define COM_SIGNAL_INVALID_VALUE_SUPPORT        STD_ON

#define COM_SIGNAL_SUBSTITUE_VALUE_SUPPORT      STD_OFF

#define COM_TXMODE_AND_FILTER_SUPPORT           STD_ON

#define COM_SIGNAL_TIMEOUT_SUPPORT              STD_OFF

#define COM_MAX_PARTITION_NUMBER                1u

#define COM_MULITIVARIANT_SUPPORT               STD_OFF

#define COM_MAX_IPDU_NUMBER                      17u

#define COM_MAX_RXIPDUGROUP_NUMBER                 7u
#define COM_MAX_TXIPDUGROUP_NUMBER                 10u
#define COM_MAX_IPDUGROUP_NUMBER                   2u

#define COM_MAX_RXIPDU_CALLOUT_NUMBER   1u

#define COM_MAX_RXIPDU_NUMBER                          7u
#define COM_MAX_TXIPDU_NUMBER                          10u

#define COM_MAX_SIGNALGROUPARRY_NUMBER  0u



#define COM_MAX_RX_SIGNAL_8BIT_INVALIDVALUE_NUMBER   0u

#define COM_MAX_TX_SIGNAL_8BIT_INVALIDVALUE_NUMBER   0u

#define COM_MAX_RXSIGNAL_INVALID_NUMBER        7u

#define COM_MAX_TXSIGNAL_INVALID_NUMBER        11u

#define COM_MAX_RXGRPSIG_INVALID_NUMBER        0u

#define COM_MAX_TXGRPSIG_INVALID_NUMBER        0u

#define COM_MAX_RXSIGNAL_FILTERTYPE_MAX_NUMBER  0u
#define COM_MAX_TXSIGNAL_FILTERTYPE_MAX_NUMBER  0u
#define COM_MAX_RXGRPSIG_FILTERTYPE_MAX_NUMBER  0u
#define COM_MAX_TXGRPSIG_FILTERTYPE_MAX_NUMBER  0u
#define COM_MAX_DESTSIG_FILTERTYPE_MAX_NUMBER    0u

/* Maximum value of the sum of mumber of TxSignal,TxGroupSignal and DestDescription which configure filter. */
#define COM_MAX_TMC_TX_ALL_TYPE_SIGNAL_NUMBER               0u

 #define COM_MAX_TXSIG_ERROR_AND_NOTIFY_NUMBER  0u
 #define COM_MAX_TXSIGGRP_ERROR_AND_NOTIFY_NUMBER  0u

#define COM_MAX_ONEEVERYNFILTERSIGNAL_NUMBER    0u
#define COM_MAX_RXMASKNEWDIFFERMASKOLD_NUMBER   0u
#define COM_MAX_RXMASKNEWDIFFERX_NUMBER   0u
#define COM_MAX_RXMASKNEWEQUALSX_NUMBER   0u
#define COM_MAX_RXNEWISOUTSIDE_NUMBER   0u
#define COM_MAX_RXNEWISWITHIN_NUMBER   0u

#define COM_MAX_TXMASKNEWDIFFERMASKOLD_NUMBER   0u
#define COM_MAX_TXMASKNEWDIFFERX_NUMBER   0u
#define COM_MAX_TXMASKNEWEQUALSX_NUMBER   0u
#define COM_MAX_TXNEWISOUTSIDE_NUMBER   0u
#define COM_MAX_TXNEWISWITHIN_NUMBER   0u

#define COM_MAX_TXSIGNAL_TIMEOUT_NUMBER    0u
#define COM_MAX_TXSIGGRP_TIMEOUT_NUMBER 0u

#define COM_MAX_SIGANDGRPSIG_NUMBER                  32u
#define COM_MAX_RXSIGNAL_NUMBER                        14u
#define COM_MAX_TXSIGNAL_NUMBER                        18u

#define COM_MAX_TXGROUPSIGNAL_NUMBER                   0u
#define COM_MAX_RXGROUPSIGNAL_NUMBER                   0u

#define COM_MAX_SIGGROUP_NUMBER         0u
#define COM_MAX_RXSIGNALGROUP_NUMBER    0u
#define COM_MAX_TXSIGNALGROUP_NUMBER    0u

#define COM_MAX_RXGRPSIG_SUBSTITUTE_NUMBER     0u

#define COM_MAX_GWMAPPING_NUMBER                       6u
#define COM_MAX_GW_DESTINATION_NUM                     6u
#define COM_MAX_GW_SOURCE_DESCRIPTION_NUMBER           0u
#define COM_MAX_GW_DESTINATION_DESCRIPTION_NUMBER      0u

/* Maximum number of Destination signals of GwMappings for all variants */
#define COM_MAX_GW_DESTINATION_SIGNAL_NUMBER      6u

/* Maximum number of Destination GroupSignals of GwMappings for all variants */
#define COM_MAX_GW_DESTINATION_GROUP_SIGNAL_NUMBER      0u

/* Maximum number of GW Source Signals with Type of UNIT8_N or UNIN8_DYN for all variants */
#define COM_MAX_GW_SOURCE_NDYN_SIGNAL_NUMBER      0u

/* Maximum number of GW Source GroupSignals with Type of UNIT8_N or UNIN8_DYN for all variants */
#define COM_MAX_GW_SOURCE_NDYN_GROUP_SIGNAL_NUMBER      0u

/* Maximum number of GW Source Descriptions with Type of UNIT8_N or UNIN8_DYN for all variants */
#define COM_MAX_GW_SOURCE_NDYN_DESCRIPTION_NUMBER      0u

/* Maximum number of GW Destination Signals with Type of UNIT8_N or UNIN8_DYN for all variants */
#define COM_MAX_GW_DESTINATION_NDYN_SIGNAL_NUMBER      0u

/* Maximum number of GW Destination GroupSignals with Type of UNIT8_N or UNIN8_DYN for all variants */
#define COM_MAX_GW_DESTINATION_NDYN_GROUP_SIGNAL_NUMBER      0u

/* Maximum number of GW Destination Descriptions with Type of UNIT8_N or UNIN8_DYN for all variants */
#define COM_MAX_GW_DESTINATION_NDYN_DESCRIPTION_NUMBER      0u

#define COM_MAX_NUMBER_OF_MAIN_FUNCTION_ROUTE_SIGNALS 1u
#define COM_MAX_NUMBER_OF_MAIN_FUNCTION_RX            1u
#define COM_MAX_NUMBER_OF_MAIN_FUNCTION_TX            1u

#define COM_MAX_TX_MODE_TRUE_PERIOD_NUMBER   8u

#define COM_MAX_TX_MODE_FALSE_PERIOD_NUMBER    0u

#define COM_MAX_TX_MODE_TRUE_DIRECT_NUMBER   0u

#define COM_MAX_TX_MODE_FALSE_DIRECT_NUMBER   0u

#define COM_MAX_TX_MODE_TRUE_MIXED_NUMBER    1u

#define COM_MAX_TX_MODE_FALSE_MIXED_NUMBER    0u

#define COM_MAX_TX_MODE_TRUE_DIRECT_NOREPETITION_NUMBER   1u

#define COM_MAX_TX_MODE_FALSE_DIRECT_NOREPETITION_NUMBER   0u

#define COM_MAX_TX_MODE_TRUE_MIXED_NOREPETITION_NUMBER    0u

#define COM_MAX_TX_MODE_FALSE_MIXED_NOREPETITION_NUMBER    0u

/* PRQA S 0791 ++ */ /* VL_Com_0791 */
#define ComConf_ComIPduGroup_ComIPduGroup_Tx        ComIPduGroup_Tx
#define ComConf_ComIPduGroup_ComIPduGroup_Rx        ComIPduGroup_Rx

#define ComConf_ComIPdu_ComIPdu_0x110_Tx        ComIPdu_0x110_Tx
#define ComConf_ComIPdu_ComIPdu_0x12a_Rx        ComIPdu_0x12a_Rx
#define ComConf_ComIPdu_ComIPdu_0x114_Rx        ComIPdu_0x114_Rx
#define ComConf_ComIPdu_ComIPdu_0x114_Tx        ComIPdu_0x114_Tx
#define ComConf_ComIPdu_ComIPdu_0x115_Tx        ComIPdu_0x115_Tx
#define ComConf_ComIPdu_CAN0_Tx_0x300_Cyclic_CONTROLLER_0_S32K312_Tx        CAN0_Tx_0x300_Cyclic_CONTROLLER_0_S32K312_Tx
#define ComConf_ComIPdu_CAN0_Tx_0x301_Event_CONTROLLER_0_S32K312_Tx        CAN0_Tx_0x301_Event_CONTROLLER_0_S32K312_Tx
#define ComConf_ComIPdu_CAN0_Tx_0x302_Mixed_CONTROLLER_0_S32K312_Tx        CAN0_Tx_0x302_Mixed_CONTROLLER_0_S32K312_Tx
#define ComConf_ComIPdu_CAN0_Tx_0x303_Cyclic_Counter_CONTROLLER_0_S32K312_Tx        CAN0_Tx_0x303_Cyclic_Counter_CONTROLLER_0_S32K312_Tx
#define ComConf_ComIPdu_CAN0_Tx_0x350_Cyclic_PN17_CONTROLLER_0_S32K312_Tx        CAN0_Tx_0x350_Cyclic_PN17_CONTROLLER_0_S32K312_Tx
#define ComConf_ComIPdu_CAN0_Tx_0x351_Cyclic_PN29_CONTROLLER_0_S32K312_Tx        CAN0_Tx_0x351_Cyclic_PN29_CONTROLLER_0_S32K312_Tx
#define ComConf_ComIPdu_CAN0_Tx_0x360_E2E_P01_CONTROLLER_0_S32K312_Tx        CAN0_Tx_0x360_E2E_P01_CONTROLLER_0_S32K312_Tx
#define ComConf_ComIPdu_CAN0_Rx_0x200_Cyclic_CONTROLLER_0_S32K312_Rx        CAN0_Rx_0x200_Cyclic_CONTROLLER_0_S32K312_Rx
#define ComConf_ComIPdu_CAN0_Rx_0x203_Cyclic_Counter_CONTROLLER_0_S32K312_Rx        CAN0_Rx_0x203_Cyclic_Counter_CONTROLLER_0_S32K312_Rx
#define ComConf_ComIPdu_CAN0_Rx_0x201_Event_CONTROLLER_0_S32K312_Rx        CAN0_Rx_0x201_Event_CONTROLLER_0_S32K312_Rx
#define ComConf_ComIPdu_CAN0_Rx_0x250_Cyclic_PN17_CONTROLLER_0_S32K312_Rx        CAN0_Rx_0x250_Cyclic_PN17_CONTROLLER_0_S32K312_Rx
#define ComConf_ComIPdu_CAN0_Rx_0x202_Mixed_CONTROLLER_0_S32K312_Rx        CAN0_Rx_0x202_Mixed_CONTROLLER_0_S32K312_Rx

#define ComConf_ComSignal_ComSignal_0_Tx   ComSignal_0_Tx
#define ComConf_ComSignal_ComSignal_1_Rx   ComSignal_1_Rx
#define ComConf_ComSignal_ComSignal_Signal_1_Led_Sts_Rx   ComSignal_Signal_1_Led_Sts_Rx
#define ComConf_ComSignal_ComSignal_Signal_2_Led_LiangDu_Rx   ComSignal_Signal_2_Led_LiangDu_Rx
#define ComConf_ComSignal_ComSignal_Signal_3_Led_Red_Rx   ComSignal_Signal_3_Led_Red_Rx
#define ComConf_ComSignal_ComSignal_Signal_4_Led_Sts_Rx   ComSignal_Signal_4_Led_Sts_Rx
#define ComConf_ComSignal_ComSignal_Signal_5_Led_LiangDu_Rx   ComSignal_Signal_5_Led_LiangDu_Rx
#define ComConf_ComSignal_ComSignal_Signal_6_Led_Red_Rx   ComSignal_Signal_6_Led_Red_Rx
#define ComConf_ComSignal_ComSignal_Signal_1_Led_Sts_Tx   ComSignal_Signal_1_Led_Sts_Tx
#define ComConf_ComSignal_ComSignal_Signal_2_Led_LiangDu_Tx   ComSignal_Signal_2_Led_LiangDu_Tx
#define ComConf_ComSignal_ComSignal_Signal_3_Led_Red_Tx   ComSignal_Signal_3_Led_Red_Tx
#define ComConf_ComSignal_ComSignal_Signal_4_Led_Sts_Tx   ComSignal_Signal_4_Led_Sts_Tx
#define ComConf_ComSignal_ComSignal_Signal_5_Led_LiangDu_Tx   ComSignal_Signal_5_Led_LiangDu_Tx
#define ComConf_ComSignal_ComSignal_Signal_6_Led_Red_Tx   ComSignal_Signal_6_Led_Red_Tx
#define ComConf_ComSignal_Sig_Tx_UB_CAN0_Tx_0x300_Cyclic_CONTROLLER_0_S32K312_Tx   Sig_Tx_UB_CAN0_Tx_0x300_Cyclic_CONTROLLER_0_S32K312_Tx
#define ComConf_ComSignal_Sig_Tx_Data_CAN0_Tx_0x300_Cyclic_CONTROLLER_0_S32K312_Tx   Sig_Tx_Data_CAN0_Tx_0x300_Cyclic_CONTROLLER_0_S32K312_Tx
#define ComConf_ComSignal_Sig_Tx_EventStatus_CAN0_Tx_0x301_Event_CONTROLLER_0_S32K312_Tx   Sig_Tx_EventStatus_CAN0_Tx_0x301_Event_CONTROLLER_0_S32K312_Tx
#define ComConf_ComSignal_Sig_Tx_MixedData_CAN0_Tx_0x302_Mixed_CONTROLLER_0_S32K312_Tx   Sig_Tx_MixedData_CAN0_Tx_0x302_Mixed_CONTROLLER_0_S32K312_Tx
#define ComConf_ComSignal_Sig_Tx_RollingCounter_CAN0_Tx_0x303_Cyclic_Counter_CONTROLLER_0_S32K312_Tx   Sig_Tx_RollingCounter_CAN0_Tx_0x303_Cyclic_Counter_CONTROLLER_0_S32K312_Tx
#define ComConf_ComSignal_Sig_Tx_CounterData_CAN0_Tx_0x303_Cyclic_Counter_CONTROLLER_0_S32K312_Tx   Sig_Tx_CounterData_CAN0_Tx_0x303_Cyclic_Counter_CONTROLLER_0_S32K312_Tx
#define ComConf_ComSignal_Sig_Tx_PN17_Data_CAN0_Tx_0x350_Cyclic_PN17_CONTROLLER_0_S32K312_Tx   Sig_Tx_PN17_Data_CAN0_Tx_0x350_Cyclic_PN17_CONTROLLER_0_S32K312_Tx
#define ComConf_ComSignal_Sig_Tx_PN29_Data_CAN0_Tx_0x351_Cyclic_PN29_CONTROLLER_0_S32K312_Tx   Sig_Tx_PN29_Data_CAN0_Tx_0x351_Cyclic_PN29_CONTROLLER_0_S32K312_Tx
#define ComConf_ComSignal_Sig_Tx_E2E_CRC_CAN0_Tx_0x360_E2E_P01_CONTROLLER_0_S32K312_Tx   Sig_Tx_E2E_CRC_CAN0_Tx_0x360_E2E_P01_CONTROLLER_0_S32K312_Tx
#define ComConf_ComSignal_Sig_Tx_E2E_Counter_CAN0_Tx_0x360_E2E_P01_CONTROLLER_0_S32K312_Tx   Sig_Tx_E2E_Counter_CAN0_Tx_0x360_E2E_P01_CONTROLLER_0_S32K312_Tx
#define ComConf_ComSignal_Sig_Tx_E2E_Data_CAN0_Tx_0x360_E2E_P01_CONTROLLER_0_S32K312_Tx   Sig_Tx_E2E_Data_CAN0_Tx_0x360_E2E_P01_CONTROLLER_0_S32K312_Tx
#define ComConf_ComSignal_Sig_Rx_UB_CAN0_Rx_0x200_Cyclic_CONTROLLER_0_S32K312_Rx   Sig_Rx_UB_CAN0_Rx_0x200_Cyclic_CONTROLLER_0_S32K312_Rx
#define ComConf_ComSignal_Sig_Rx_Data_CAN0_Rx_0x200_Cyclic_CONTROLLER_0_S32K312_Rx   Sig_Rx_Data_CAN0_Rx_0x200_Cyclic_CONTROLLER_0_S32K312_Rx
#define ComConf_ComSignal_Sig_Rx_RollingCounter_CAN0_Rx_0x203_Cyclic_Counter_CONTROLLER_0_S32K312_Rx   Sig_Rx_RollingCounter_CAN0_Rx_0x203_Cyclic_Counter_CONTROLLER_0_S32K312_Rx
#define ComConf_ComSignal_Sig_Rx_CounterData_CAN0_Rx_0x203_Cyclic_Counter_CONTROLLER_0_S32K312_Rx   Sig_Rx_CounterData_CAN0_Rx_0x203_Cyclic_Counter_CONTROLLER_0_S32K312_Rx
#define ComConf_ComSignal_Sig_Rx_EventStatus_CAN0_Rx_0x201_Event_CONTROLLER_0_S32K312_Rx   Sig_Rx_EventStatus_CAN0_Rx_0x201_Event_CONTROLLER_0_S32K312_Rx
#define ComConf_ComSignal_Sig_Rx_PN17_Data_CAN0_Rx_0x250_Cyclic_PN17_CONTROLLER_0_S32K312_Rx   Sig_Rx_PN17_Data_CAN0_Rx_0x250_Cyclic_PN17_CONTROLLER_0_S32K312_Rx
#define ComConf_ComSignal_Sig_Rx_MixedData_CAN0_Rx_0x202_Mixed_CONTROLLER_0_S32K312_Rx   Sig_Rx_MixedData_CAN0_Rx_0x202_Mixed_CONTROLLER_0_S32K312_Rx

/* PRQA S 0791 -- */

#endif
/***********************************************************************************************************************
**                                      End of file                                                                   **
***********************************************************************************************************************/
