CC = gcc

CFLAGS = -Wall -pthread \
-I./src \
-I./FreeRTOS/include \
-I./FreeRTOS/portable/ThirdParty/GCC/Posix

SRC = \
src/main.c \
src/producer_task.c \
src/consumer_task.c \
src/medium_task.c \
src/monitor_task.c \
FreeRTOS/tasks.c \
FreeRTOS/queue.c \
FreeRTOS/list.c \
FreeRTOS/timers.c \
FreeRTOS/portable/MemMang/heap_4.c \
FreeRTOS/portable/ThirdParty/GCC/Posix/port.c \
FreeRTOS/portable/ThirdParty/GCC/Posix/utils/wait_for_event.c

OUT = rtos_priority_inversion.exe

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
