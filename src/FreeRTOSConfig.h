#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H
#define configTICK_TYPE_WIDTH_IN_BITS    TICK_TYPE_WIDTH_32_BITS


#include <stdint.h>

/* Scheduler */
#define configUSE_PREEMPTION                    1
#define configUSE_TIME_SLICING                  1
#define configCPU_CLOCK_HZ                      1000000
#define configTICK_RATE_HZ                      1000
#define configMAX_PRIORITIES                    5

/* Memory */
#define configMINIMAL_STACK_SIZE                128
#define configTOTAL_HEAP_SIZE                   ( ( size_t ) ( 64 * 1024 ) )

/* Mutex & Semaphores */
#define configUSE_MUTEXES                       1
#define configUSE_COUNTING_SEMAPHORES           1

/* Debug */
#define configUSE_TRACE_FACILITY                1
#define configUSE_STATS_FORMATTING_FUNCTIONS    1

/* Required hooks */
#define configUSE_IDLE_HOOK                     0
#define configUSE_TICK_HOOK                     0

/* API inclusion */
#define INCLUDE_vTaskDelay                      1
#define INCLUDE_xTaskGetSchedulerState          1

#endif
