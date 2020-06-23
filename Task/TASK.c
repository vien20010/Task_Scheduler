/*
 * TASK.c
 *
 *  Created on: Jun 8, 2020
 *      Author: Lam Vien
 */
#include <stdbool.h>
#include <stdint.h>
#include "inc/hw_memmap.h"
#include "driverlib/gpio.h"
#include "Mylib/switches.h"
#include "Mylib/led.h"
#include "Mylib/uartstdio.h"
#include "debug.h"
#include "TASK1.h"
#include "TASK2.h"
#include "TASK3.h"
#include "Scheduler/Scheduler.h"
//"cycle time" = 50 tick, Task1 Start at 0, Task2 Start at 1, Task3 Start at 2
tSchedulerTask     g_psSchedulerTable[3] = {{Task1,(void*)0,50,0,1},{Task2,(void*)0,50,1,1},{Task3,(void*)0,50,2,1}};
//3 Task
uint32_t g_ui32SchedulerNumTasks = 3;


