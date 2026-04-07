#include <stdio.h>

#include "FreeRTOS.h"
#include "task.h"

void MediumPriorityTask(void *pvParameters)
{
    (void)pvParameters;

    while (1)
    {
        printf("[MEDIUM] Running CPU-intensive task\n");
        vTaskDelay(pdMS_TO_TICKS(100));
    }
}
