#include "Mcu.h"
#include "Gpt.h"
#include "Platform.h"
#include "Mcl.h"
#include "Port.h"
#include "Dio.h"
#include "Can_43_FLEXCAN.h"
#include "Can_GeneralTypes.h"

/* Global ms counter (incremented every 1ms) */
volatile uint64_t Gpt0Ch0_Cnt = 0;

/* Periodic task flags */
volatile uint8_t Flag_1ms   = 0;
volatile uint8_t Flag_5ms   = 0;
volatile uint8_t Flag_10ms  = 0;
volatile uint8_t Flag_20ms  = 0;
volatile uint8_t Flag_50ms  = 0;
volatile uint8_t Flag_100ms = 0;

/* GPT notification callback: triggers every 1ms */
void GptNotification_Pit0Ch0()
{
	Gpt0Ch0_Cnt++;

	Flag_1ms = 1;

	if ((Gpt0Ch0_Cnt % 5U)   == 0U) { Flag_5ms   = 1; }
	if ((Gpt0Ch0_Cnt % 10U)  == 0U) { Flag_10ms  = 1; }
	if ((Gpt0Ch0_Cnt % 20U)  == 0U) { Flag_20ms  = 1; }
	if ((Gpt0Ch0_Cnt % 50U)  == 0U) { Flag_50ms  = 1; }
	if ((Gpt0Ch0_Cnt % 100U) == 0U) { Flag_100ms = 1; }
}

void Task_1ms(void)
{
	/* ---- 1ms task content: Send a CAN frame periodically ---- */
	static uint8 CanTx_Sdu[8] = {0x00U, 0x01U, 0x02U, 0x03U, 0x04U, 0x05U, 0x06U, 0x07U};
	static uint8 TxCounter = 0U;     /* Running counter for payload change */
	Can_PduType CanWrite_Data;
	Std_ReturnType Ret = (Std_ReturnType)E_NOT_OK;

	/* Update CAN payload so we can see it changing on a CANoe/bus log */
	CanTx_Sdu[0] = TxCounter;                            /* Byte0: counter */
	CanTx_Sdu[1] = (uint8)(Gpt0Ch0_Cnt & 0xFFU);         /* Byte1: low byte of ms counter */
	CanTx_Sdu[2] = (uint8)((Gpt0Ch0_Cnt >> 8U) & 0xFFU); /* Byte2: mid byte of ms counter */
	CanTx_Sdu[3] = (uint8)((Gpt0Ch0_Cnt >> 16U) & 0xFFU);/* Byte3: high byte of ms counter */

	/* Fill the CAN PDU structure required by Can_43_FLEXCAN_Write */
	CanWrite_Data.id          = 0x123U;       /* Standard ID: 0x123 */
	CanWrite_Data.swPduHandle = 0U;           /* Not used by the driver in bare-metal use */
	CanWrite_Data.length      = 8U;           /* DLC = 8 bytes */
	CanWrite_Data.sdu         = CanTx_Sdu;    /* Pointer to payload buffer */

	/* Transmit via the configured Tx Hardware Object */
	Ret = Can_43_FLEXCAN_Write(
	         Can_43_FLEXCANConf_CanHardwareObject_CanHardwareObject_2_Tx,
	         &CanWrite_Data);

	/* Increment payload counter regardless of write result
	 * (Write may return CAN_BUSY when the MB is still occupied - it's ok, skip once) */
	TxCounter++;

	/* Avoid unused variable warnings in case DevErrorDetect is off */
	(void)Ret;

}

void Task_5ms(void)
{
	/* TODO: 5ms task content */
}

void Task_10ms(void)
{
	/* TODO: 10ms task content */
}

void Task_20ms(void)
{
	/* TODO: 20ms task content */
}

void Task_50ms(void)
{
	/* TODO: 50ms task content */
}

// uint8_t TxCounter = 0U;
// uint8_t RxCounter = 0U;
void Task_100ms(void)
{
	/* Example: Toggle PB10 level, observable 200ms square wave (100ms half-period) */
	static uint8_t led_state = 0;
	led_state = !led_state;
	Dio_WriteChannel(DioConf_DioChannel_DioChannel_PB10, led_state);

	// TxCounter++;
	// Com_SendSignal(ComConf_ComSignal_ComSignal_0_Tx,&TxCounter);

	// Com_ReceiveSignal(ComConf_ComSignal_ComSignal_1_Rx,&RxCounter);
}

/* ============================ Main Scheduler ============================ */
void Scheduler_Main(void)
{
	if (Flag_1ms)
	{
		Flag_1ms = 0;
		Task_1ms();
	}
	if (Flag_5ms)
	{
		Flag_5ms = 0;
		Task_5ms();
	}
	if (Flag_10ms)
	{
		Flag_10ms = 0;
		Task_10ms();
	}
	if (Flag_20ms)
	{
		Flag_20ms = 0;
		Task_20ms();
	}
	if (Flag_50ms)
	{
		Flag_50ms = 0;
		Task_50ms();
	}
	if (Flag_100ms)
	{
		Flag_100ms = 0;
		Task_100ms();
	}
}

int main()
{
    Mcu_Init(&Mcu_Config);
    Mcu_InitClock(McuClockSettingConfig_0);
    while ( MCU_PLL_LOCKED != Mcu_GetPllStatus() )
    {
        /* Busy wait until the System PLL is locked */
    }
    Mcu_DistributePllClock();
    Mcu_SetMode(McuModeSettingConf_0);

    Mcl_Init(NULL_PTR);
    Platform_Init(NULL_PTR);

    Port_Init(&Port_Config);

    Gpt_Init(&Gpt_Config);
    Gpt_EnableNotification(GptConf_GptChannelConfiguration_GptChannelConfiguration_0);
    Gpt_StartTimer(GptConf_GptChannelConfiguration_GptChannelConfiguration_0, 3.0E4);
    
    Dio_WriteChannel(DioConf_DioChannel_DioChannel_PB10, 0);
    Gpt0Ch0_Cnt = 0U;
    
    Can_43_FLEXCAN_Init(&Can_43_FLEXCAN_Config);
	Can_43_FLEXCAN_SetControllerMode(Can_43_FLEXCANConf_CanController_CanController_0, CAN_CS_STOPPED);
	Can_43_FLEXCAN_SetControllerMode(Can_43_FLEXCANConf_CanController_CanController_0, CAN_CS_STARTED);

	/* BSW Init */
	// CanSM_Init(&CanSM_Config);
	// CanIf_Init(&CanIf_Config);
    while(1)
    {
        Scheduler_Main();
    }
    return 0;
}
