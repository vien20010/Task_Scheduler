/*
 * TASK2.h
 *
 *  Created on: Jun 8, 2020
 *      Author: Lam Vien
 */

#ifndef TASK2_TASK2_H_
#define TASK2_TASK2_H_

#include <stdbool.h>
#include <stdint.h>
#include "inc/hw_memmap.h"
#include "driverlib/gpio.h"
#include "Mylib/switches.h"
#include "Mylib/led.h"
#include "Mylib/uartstdio.h"
#include "debug.h"


void Task2(void *myobject);
void Task2Update(void);

#endif /* TASK2_TASK2_H_ */
