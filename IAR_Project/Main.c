#include "Mcu.h"
#include "Mcl.h"
#include "Platform.h"
#include "Gpt.h"

uint64_t GptCh0_Cnt = 0U;
void GptNotification_Pit0Ch0(void)
{
    GptCh0_Cnt++;
    // Gpt_StopTimer(GptConf_GptChannelConfiguration_GptChannelConfiguration_0);
    // Gpt_StartTimer(GptConf_GptChannelConfiguration_GptChannelConfiguration_0, 6.0E4);
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

    Gpt_Init(&Gpt_Config);
    Gpt_EnableNotification(GptConf_GptChannelConfiguration_GptChannelConfiguration_0);
    Gpt_StartTimer(GptConf_GptChannelConfiguration_GptChannelConfiguration_0, 6.0E4);
    GptCh0_Cnt = 0U;
    while(1)
    {
        /* Busy wait */
    }
    return 0;
}
