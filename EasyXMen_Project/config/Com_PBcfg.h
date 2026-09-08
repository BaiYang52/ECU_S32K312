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
 * @file        : Com_PBcfg.h
 * @licence     : 
 * @date        : 2026-07-20 01:19:27
 * @customer    : iSoft
 * @description : Post-Build configuration parameter of Com
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/
#ifndef  COM_PBCFG_H_
#define  COM_PBCFG_H_
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/*******************************************************************************
**                      Macros                                                **
*******************************************************************************/
#define COM_MAX_RXIPDUBUFF_SIZE  8u
#define COM_MAX_TXIPDUBUFF_SIZE  8u

#define COM_MAX_SIGNAL_BOOLBUFF_SIZE            0u
#define COM_MAX_RXGROUPSIGNAL_BOOLBUFF_SIZE     0u
#define COM_MAX_SIGNAL_BOOL_INVALID_SIZE        0u
#define COM_MAX_SIGNAL_BOOL_SUBSTITUTE_SIZE     0u

#define COM_MAX_SIGNAL_8BITBUFF_SIZE            2u
#define COM_MAX_RXGROUPSIGNAL_8BITBUFF_SIZE     0u
#define COM_MAX_SIGNAL_8BIT_INVALID_SIZE        0u
#define COM_MAX_SIGNAL_8BIT_SUBSTITUTE_SIZE     0u

#define COM_MAX_SIGNAL_16BITBUFF_SIZE           0u
#define COM_MAX_RXGROUPSIGNAL_16BITBUFF_SIZE    0u
#define COM_MAX_SIGNAL_16BIT_INVALID_SIZE       0u
#define COM_MAX_SIGNAL_16BIT_SUBSTITUTE_SIZE    0u

#define COM_MAX_SIGNAL_32BITBUFF_SIZE           0u
#define COM_MAX_RXGROUPSIGNAL_32BITBUFF_SIZE    0u
#define COM_MAX_SIGNAL_32BIT_INVALID_SIZE       0u
#define COM_MAX_SIGNAL_32BIT_SUBSTITUTE_SIZE    0u

#define COM_MAX_SIGNAL_64BITBUFF_SIZE           0u
#define COM_MAX_RXGROUPSIGNAL_64BITBUFF_SIZE    0u
#define COM_MAX_SIGNAL_64BIT_INVALID_SIZE       0u
#define COM_MAX_SIGNAL_64BIT_SUBSTITUTE_SIZE    0u

#define COM_MAX_GWSIGNAL_BOOLBUFF_SIZE                 0u
#define COM_MAX_GWSIGNAL_8BITBUFF_SIZE                 0u
#define COM_MAX_GWSIGNAL_16BITBUFF_SIZE                0u
#define COM_MAX_GWSIGNAL_32BITBUFF_SIZE                0u
#define COM_MAX_GWSIGNAL_64BITBUFF_SIZE                0u

#define COM_TXTPPDU_SUPPORT                        STD_OFF

#define COM_RXTPPDU_SUPPORT                        STD_OFF

#define COM_TMS_ENABLE    STD_OFF

#define COM_MDT_ENABLE  STD_OFF

#define COM_TX_SIGNAL_NOTIFICATION_ENABLE   STD_OFF

#define COM_RX_SIGNAL_NOTIFICATION_ENABLE   STD_OFF

#define COM_RX_SIGNAL_TIMEOUT_ENABLE    STD_OFF

#define COM_TX_SIGNAL_TIMEOUT_ENABLE    STD_OFF

#define COM_RX_SIGNAL_TIMEOUT_NOTIFICATION_ENABLE STD_OFF

#define COM_TX_SIGNAL_TIMEOUT_NOTIFICATION_ENABLE STD_OFF

#define COM_RX_SIGNAL_UPDATE_BIT_ENABLE     STD_OFF

#define COM_TX_SIGNAL_UPDATE_BIT_ENABLE     STD_OFF

#define COM_RX_SIGNAL_INVALID_DATA_ENABLE   STD_OFF

#define COM_TX_SIGNAL_INVALID_DATA_ENABLE   STD_OFF

#define COM_RX_SIGNAL_INVALID_DATA_ACTION_NOTIFY_ENABLE     STD_OFF

#define COM_TX_SIG_PROP_TRIGGERED_ENABLE    STD_OFF

#define COM_TX_SIG_PROP_TRIGGERED_ON_CHANGE_ENABLE  STD_OFF

#define COM_TX_SIG_PROP_TRIG_ON_CH_NO_REPETITION_ENABLE     STD_OFF

#define COM_TX_SIG_PROP_TRIG_NO_REPETITION_ENABLE   STD_OFF

#define COM_TX_SIGNAL_ERROR_NOTIFICATION_ENABLE     STD_OFF

#define COM_TX_SIGNAL_TYPE_UINT8_DYN_ENABLE     STD_OFF

#define COM_TX_SIGNAL_TYPE_UINT8_N_ENABLE     STD_OFF

#define COM_RX_SIGNAL_TYPE_UINT8_DYN_ENABLE     STD_OFF

#define COM_RX_SIGNAL_TYPE_UINT8_N_ENABLE   STD_OFF

#define COM_TX_SIG_GROUP_NOTIFICATION_ENABLE    STD_OFF

#define COM_RX_SIG_GROUP_NOTIFICATION_ENABLE    STD_OFF

#define COM_RX_SIG_GROUP_TIMEOUT_ENABLE     STD_OFF

#define COM_TX_SIG_GROUP_TIMEOUT_ENABLE     STD_OFF

#define COM_RX_SIG_GROUP_TIMEOUT_NOTIFICATION_ENABLE     STD_OFF

#define COM_TX_SIG_GROUP_TIMEOUT_NOTIFICATION_ENABLE    STD_OFF

#define COM_RX_SIG_GROUP_UPDATE_BIT_ENABLE  STD_OFF

#define COM_TX_SIG_GROUP_UPDATE_BIT_ENABLE  STD_OFF

#define COM_TX_SIG_GROUP_PROP_TRIGGERED_ENABLE  STD_OFF

#define COM_TX_SIG_GROUP_PROP_TRIGGERED_ON_CHANGE_ENABLE    STD_OFF

#define COM_TX_SIG_GROUP_PROP_TRIG_ON_CH_NO_REPETITION_ENABLE   STD_OFF

#define COM_TX_SIG_GROUP_PROP_TRIG_NO_REPETITION_ENABLE     STD_OFF

#define COM_TX_SIG_GROUP_ERROR_NOTIFICATION_ENABLE  STD_OFF

#define COM_TX_SIG_GROUP_INITIAL_VALUE_ONLY_ENABLE  STD_OFF

#define COM_RX_SIG_GROUP_INVALID_DATA_ACTION_NOTIFY_ENABLE  STD_OFF

#define COM_TX_GRP_SIGNAL_TYPE_UINT8_DYN_ENABLE     STD_OFF

#define COM_TX_GRP_SIGNAL_TYPE_UINT8_N_ENABLE     STD_OFF

#define COM_RX_GRP_SIGNAL_TYPE_UINT8_DYN_ENABLE      STD_OFF

#define COM_RX_GRP_SIGNAL_TYPE_UINT8_N_ENABLE   STD_OFF

#define COM_RX_GRP_SIGNAL_INVALID_DATA_ENABLE   STD_OFF

#define COM_TX_GRP_SIGNAL_INVALID_DATA_ENABLE   STD_OFF

#define COM_GW_DEST_SIG_UPDATE_BIT_ENABLE   STD_OFF

#define COM_GW_SRC_SIG_UPDATE_BIT_ENABLE    STD_OFF

#define COM_TX_IPDU_CALLOUT_ENABLE     STD_ON

#define COM_RX_IPDU_CALLOUT_ENABLE     STD_ON

#define COM_TX_SIG_INITIAL_VALUE_ONLY_ENABLE  STD_OFF

#define COM_RX_IPDU_SIGNAL_PROCESS_IMMEDIATE_ENABLE     STD_OFF

#define COM_TX_IPDU_SIGNAL_PROCESS_IMMEDIATE_ENABLE     STD_OFF

#define COM_RX_SIGNAL_TIMEOUT_ACTION_REPLACE_ENABLE     STD_OFF

#define COM_RX_SIGNAL_TIMEOUT_ACTION_SUBSTITUTE_ENABLE     STD_OFF

#define COM_RX_SIG_GROUP_TIMEOUT_ACTION_REPLACE_ENABLE     STD_OFF

#define COM_RX_SIG_GROUP_TIMEOUT_ACTION_SUBSTITUTE_ENABLE     STD_OFF

#define COM_GW_SRC_DSP_SIG_TYPE_UINT8_N_ENABLE     STD_OFF

#define COM_GW_SRC_DSP_SIG_TYPE_UINT8_DYN_ENABLE     STD_OFF

#define COM_SIGNAL_SIGNED_TYPE_ENABLE     STD_OFF

#define COM_TXIPDU_TIGGERTRANSMIT_CALLOUT_ENABLE   STD_OFF



 #define ComIPduGroup_Tx    0u
#define ComIPduGroup_Rx    1u



#define ComIPdu_0x12a_Rx    0u /* Rx-0 */
#define ComIPdu_0x110_Tx    1u /* Tx-0 */



#define ComSignal_1_Rx    0u /* ComIPdu_0x12a_Rx */

#define ComSignal_0_Tx    0u /* ComIPdu_0x110_Tx */









extern const struct Com_ConfigTypeTag Com_Config;


#endif
/***********************************************************************************************************************
**                                      End of file                                                                   **
***********************************************************************************************************************/
