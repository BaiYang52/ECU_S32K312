#include "Mcu.h"
#include "Mcl.h"
#include "Platform.h"
#include "Gpt.h"
#include "Port.h"
#include "Dio.h"

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
    
    while(1)
    {
        Scheduler_Main();
    }
    return 0;
}
