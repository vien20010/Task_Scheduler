/*
 * TASK3.h
 *
 *  Created on: Jun 8, 2020
 *      Author: Lam Vien
 */

#ifndef TASK3_TASK3_H_
#define TASK3_TASK3_H_

#include <stdbool.h>
#include <stdint.h>
#include "inc/hw_memmap.h"
#include "driverlib/gpio.h"
#include "Mylib/switches.h"
#include "Mylib/led.h"
#include "Mylib/uartstdio.h"
#include "debug.h"

void Task3(void *myobject);
void Task3Update(void);

#endif /* TASK3_TASK3_H_ */
