/*
 * TASK2.c
 *
*  Created on: Jun 8, 2020
 *      Author: Lam Vien
 */
#include <Task/TASK2.h>

extern uint32_t LedTimerCount;

void Task2(void *myobject)
{
	Task2Update();
}
void Task2Update(void)
{
	if(switchState(1) == PRESSED)
	{
		LedTimerCount = 0; //if switch's pressed, mcu will change Led immediately 
	}
}


