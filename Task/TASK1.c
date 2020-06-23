/*
 * TASK1.c
 *
 *  Created on: Jun 8, 2020
 *      Author: Lam Vien
 */

#include <Task/TASK1.h>
uint32_t    LedTimerCount = 0 ;


void Task1(void *myobject)
{
	Task1Update();
}

void Task1Update(void){
	switch (State){
		case S_GREEN:
			LedTimerCount=15000; //Systick timer 15s
			State=S_GREEN_WAIT;
			break;
		case S_GREEN_WAIT:
			if(LedTimerCount==0)
			    State = S_YELLOW;
			break;
		case S_YELLOW:
			LedTimerCount=3000; //Systick timer 3s
			State=S_YELLOW_WAIT;
			break;
		case S_YELLOW_WAIT:
			if(LedTimerCount==0)
			    State=S_RED;
			break;
		case S_RED:
			LedTimerCount=15000; //Systick timer 15s
			State=S_RED_WAIT;
			break;
		case S_RED_WAIT:
			if(LedTimerCount==0)
			    State=S_GREEN;
			break;
	}
	switch(State){
		case S_GREEN:
		case S_GREEN_WAIT:
			 ledControl(LEDGREEN,ON);
			 ledControl(LEDBLUE,OFF);
			 ledControl(LEDRED,OFF);
			 break;
		case S_YELLOW:
		case S_YELLOW_WAIT:
		    ledControl(LEDGREEN,ON);
		    ledControl(LEDBLUE,OFF);
		    ledControl(LEDRED,ON);
			 break;
		case S_RED:
		case S_RED_WAIT:
		    ledControl(LEDGREEN,OFF);
		    ledControl(LEDBLUE,OFF);
		    ledControl(LEDRED,ON);
		    break;

	}
}

