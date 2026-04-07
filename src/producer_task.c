#include <stdio.h>

#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"

extern SemaphoreHandle_t resourceMutex;

void LowPriorityTask(void *pvParameters)
{
    (void)pvParameters;

    while (1)
    {
        xSemaphoreTake(resourceMutex, portMAX_DELAY);
        printf("[LOW] Resource acquired\n");

        /* Simulate long critical section */
        vTaskDelay(pdMS_TO_TICKS(300));

        printf("[LOW] Resource released\n");
        xSemaphoreGive(resourceMutex);

        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
