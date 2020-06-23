/*
 * TASK3.c
 *
 *  Created on: Jun 8, 2020
 *      Author: Lam Vien
 */
#include <Task/TASK3.h>


extern uint32_t LedTimerCount;

void Task3(void *myobject)
{
	Task3Update();
}
void Task3Update(void)
{
	if(switchState(2) == PRESSED)
	{
		LedTimerCount += 5000; //Increase the Led's ON duration by 5s
	}
}




