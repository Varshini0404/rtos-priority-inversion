#include <stdio.h>

#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"

/* Task prototypes */
void LowPriorityTask(void *pvParameters);
void MediumPriorityTask(void *pvParameters);
void HighPriorityTask(void *pvParameters);
void MonitorTask(void *pvParameters);

/* Global mutex */
SemaphoreHandle_t resourceMutex;

int main(void)
{
    /* Create mutex */
    resourceMutex = xSemaphoreCreateMutex();

    if (resourceMutex == NULL)
    {
        printf("Mutex creation failed\n");
        while (1);
    }

    /* Create tasks */
    xTaskCreate(LowPriorityTask, "LOW", 1024, NULL, 1, NULL);
    xTaskCreate(MediumPriorityTask, "MEDIUM", 1024, NULL, 2, NULL);
    xTaskCreate(HighPriorityTask, "HIGH", 1024, NULL, 3, NULL);
    xTaskCreate(MonitorTask, "MON", 1024, NULL, 3, NULL);

    /* Start scheduler */
    vTaskStartScheduler();

    /* Should never reach here */
    while (1);

    return 0;
}
