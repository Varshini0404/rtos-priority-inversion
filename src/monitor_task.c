#include <stdio.h>

#include "FreeRTOS.h"
#include "task.h"

void MonitorTask(void *pvParameters)
{
    (void)pvParameters;

    while (1)
    {
        printf("[MONITOR] System alive\n");
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
