#include <stdio.h>

#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"

extern SemaphoreHandle_t resourceMutex;

void HighPriorityTask(void *pvParameters)
{
    (void)pvParameters;

    while (1)
    {
        printf("[HIGH] Waiting for resource\n");

        xSemaphoreTake(resourceMutex, portMAX_DELAY);
        printf("[HIGH] Resource acquired\n");

        xSemaphoreGive(resourceMutex);

        vTaskDelay(pdMS_TO_TICKS(500));
    }
}
