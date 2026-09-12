

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
 * @file        : BswM_Cfg.h
 * @licence     : 
 * @date        : 2026-09-12 22:33:34
 * @customer    : iSoft
 * @description : configuration parameter of BswM
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : for_EasyXMen_V25.10_patch
 **********************************************************************************************************************/

#ifndef BSWM_CFG_H
#define BSWM_CFG_H

/* =================================================== inclusions =================================================== */
#include "Std_Types.h"
#include "Os.h"
#include "CanSM.h"
#include "ComM.h"
#include "EcuM.h"

#ifdef __cplusplus
extern "C" {
#endif
/* ===================================================== macros ===================================================== */

/* enable/disable events for requests port control */
#define BSWM_EVENT_RQSTPORT_ENABLE STD_ON

/* enable/disable events for ComM Init Reset */ 
#define BSWM_EVENT_COMM_INITIATE_RESET_LIST_ENABLE STD_ON

/* enable/disable events for Dcm ComModeRequest */
#define BSWM_EVENT_DCM_APPLICATION_UPDATED_INDICATION_ENABLE STD_OFF

/* enable/disable events for mode switch error event */
#define BSWM_EVENT_MODE_SWITCH_ERROR_EVENT_ENABLE STD_OFF

/* enable/disable events for Nm CarWakeupIndication */
#define BSWM_EVENT_NM_CAR_WAKEUP_INDICATION_ENABLE STD_OFF

/* enable/disable events for partition restarted event */
#define BSWM_EVENT_PARTITION_RESTARTED_ENABLE STD_OFF

/* enable/disable events for switch ack notification */
#define BSWM_EVENT_SWITCH_ACK_NOTIFICATION_ENABLE STD_OFF

/* enable/disable mode request port */
#define BSWM_MODE_RQSTPORT_ENABLE  STD_ON

/*  enable/disable BswM_BswModeNotification */
#define BSWM_BSWMODENOTIFICATION_ENABLED STD_OFF

/* enable/disable events for CanSM Indication */
#define BSWM_CANSMINDICATION_ENABLED STD_OFF

/* enable/disable events for ComM Indication */
#define BSWM_COMMINDICATION_ENABLED STD_OFF

/* enable/disable ComM Pnc Request */
#define BSWM_COMMPNCREQUEST_ENABLED STD_OFF

/* enable/disable events for Dcm ComModeRequest */
#define BSWM_DCMCOMMODEREQUEST_ENABLED STD_OFF

/* enable/disable events for EcuM Indication */
#define BSWM_ECUMINDICATION_ENABLED STD_ON

/* enable/disable events for EcuM RUN Request Indication */
#define BSWM_ECUMRUNREQUESTINDICATION_ENABLED STD_OFF
 
 /* enable/disable events for EcuM Wakeup Source */
#define BSWM_ECUMWAKEUPSOURCE_ENABLED STD_OFF

/* enable/disable events for EcuM GoDownHaltPoll */
#define BSWM_ETHIFPORTGROUPLINKSTATECHG_ENABLED STD_OFF

/* enable/disable events for EthSM Indication */
#define BSWM_ETHSMINDICATION_ENABLED STD_OFF

/* enable/disable port for FrSM Indication */
#define BSWM_FRSMINDICATION_ENABLED STD_OFF

/* enable/disable port for GenericRequest */
#define BSWM_GENERICREQUEST_ENABLED STD_ON

/* enable/disable port for J1939Dcm StateSwitch */
#define BSWM_J1939DCMBROADCASTSTATUS_ENABLED STD_OFF

/* enable/disable port for J1939Nm Indication */
#define BSWM_J1939NMINDICATION_ENABLED STD_OFF

/* enable/disable port for J1939Rm StateSwitch */
#define BSWM_LINSMINDICATION_ENABLED STD_OFF

/* enable/disable port for LinSM Indication */
#define BSWM_LINSCHEDULEINDICATION_ENABLED STD_OFF

/* enable/disable port for LinTp ModeRequest */
#define BSWM_LINTPMODEREQUEST_ENABLED STD_OFF

/* enable/disable port for Nm StateChange Notification */
#define BSWM_NMSTATECHANGENOTIFICATION_ENABLED STD_OFF

/* enable/disable port for NvM JobModeIndication */
#define BSWM_NVMJOBMODEINDICATION_ENABLED STD_OFF

/* enable/disable port for NvM Request */
#define BSWM_NVMREQUEST_ENABLED STD_OFF

/* enable/disable port for NvM StateChange Notification */
#define BSWM_SDCLIENTSERVICECURRENTSTATE_ENABLED STD_OFF

/* enable/disable port for NvM StateChange Notification */
#define BSWM_SDCONSUMEDEVENTGROUPCURRENTSTATE_ENABLED STD_OFF

/* enable/disable port for NvM StateChange Notification */
#define BSWM_SDEVENTHANDLERCURRENTSTATE_ENABLED STD_OFF

/* enable/disable port for SoAd SoConModeChg */
#define BSWM_SOADSOCONMODECHG_ENABLED STD_OFF

/* enable/disable port for SwcModeNotification */
#define BSWM_SWCMODENOTIFICATION_ENABLED STD_OFF

/* enable/disable port for SwcModeRequest */
#define BSWM_SWCMODEREQUEST_ENABLED STD_OFF

/* enable/disable port for Timer */
#define BSWM_TIMER_ENABLED STD_OFF


/* enable/disable API for CanSM */
#define BSWM_CANSM_ENABLED STD_ON

/* enable/disable API for ComM */
#define BSWM_COMM_ENABLED                 STD_ON

/* enable/disable API for ComM PNC */
#define BSWM_COMM_PNC_ENABLED             STD_OFF

/* enable/disable API for DCM */
#define BSWM_DCM_ENABLED STD_OFF

/* enable/disable API for Det */
#define BSWM_DEV_ERROR_DETECT STD_OFF

/*  enable/disable API for EcuM */
#define BSWM_ECUM_ENABLED STD_ON

/* enable/disable API for EthIf */
#define BSWM_ETHIF_ENABLED STD_OFF

/* enable/disable API for EthSM */
#define BSWM_ETHSM_ENABLED STD_OFF

/* enable/disable API for FrSM */
#define BSWM_FRSM_ENABLED STD_OFF

/* enable/disable API for GenericRequest */
#define BSWM_GENERIC_REQUEST_ENABLED STD_ON

/* enable/disable API for J1939Dcm */
#define BSWM_J1939DCM_ENABLED STD_OFF

/* enable/disable API for J1939Rm */
#define BSWM_J1939RM_ENABLED STD_OFF /* create J1939Rm */

/* enable/disable API for J1939Nm */
#define BSWM_J1939NM_ENABLED STD_OFF

/* enable/disable API for LinSM */
#define BSWM_LINSM_ENABLED STD_OFF

/* enable/disable API for LinTp */
#define BSWM_LINTP_ENABLED STD_OFF

/* enable/disable API for Nm */
#define BSWM_NM_ENABLED STD_OFF

/* enable/disable API for NvM */
#define BSWM_NVM_ENABLED STD_OFF

/* enable/disable API for SD */
#define BSWM_SD_ENABLED STD_OFF

/* enable/disable API for SoAd */
#define BSWM_SOAD_ENABLED STD_OFF

/* enable/disable control for Timer */
#define BSWM_TIMER_ENABLED STD_OFF

/* enable/disable API for VERSION */
#define BSWM_VERSION_INFO_API STD_OFF


/* enable/disable BswM_BswModeNotification */
#define BSWM_BSW_MODE_DEF_NOTIFICATION STD_OFF

/* enable/disable BswMSwcModeNotification */
#define BSWM_SWC_MODE_DEF_NOTIFICATION STD_OFF

/* enable/disable BswMSwcModeRequest */
#define BSWM_SWC_MODE_DEF_REQUEST STD_OFF

/* Multi-partition control switch */
#define BSWM_MULTI_PARTITION_ENABLED STD_OFF

/* Defining the number of cores */
#define BSWM_MAX_NUM_CORE 1u


/* The functionality that enables PB configuration */
#define BSWM_PB_CONFIG_ENABLED STD_OFF

/* ================================================ type definitions ================================================ */
/* type definition for timer index */
typedef uint8 BswM_TimerIdxType;

/* type definition for event request port index */
typedef uint8 BswM_EventRqstPortIdxType;

/* type definition for rule index */
typedef uint8 BswM_RuleIndexType;

/* type definition for action list index */
typedef uint8 BswM_ActionListIndexType;

/* type definition for Com IPdu group type */
typedef uint8 BswM_ComIpduGruType;

/* type definition for mode group type */
typedef uint8 BswM_ModeGroupType;

/* =========================================== external data declarations =========================================== */

/* ========================================= external function declarations ========================================= */

#ifdef __cplusplus
}
#endif

#endif /* BSWM_CFG_H */
