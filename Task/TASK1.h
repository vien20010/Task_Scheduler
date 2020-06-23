/*
 * TASK1.h
 *
 *  Created on: Jun 8, 2020
 *      Author: Lam Vien
 */

#ifndef __TASK1_H_
#define __TASK1_H_

#include <stdbool.h>
#include <stdint.h>
#include "inc/hw_memmap.h"
#include "driverlib/gpio.h"
#include "Mylib/switches.h"
#include "Mylib/led.h"
#include "Mylib/uartstdio.h"
#include "debug.h"

//declare all ledstate
typedef enum
{
	S_GREEN,
	S_YELLOW_WAIT,
	S_YELLOW,
	S_RED_WAIT,
	S_RED,
	S_GREEN_WAIT
}LedState_t;

static LedState_t State = S_GREEN;

void Task1(void *myobject);
void Task1Update(void);

extern uint32_t LedTimerCount;


#endif /* TASK1_TASK1_H_ */
