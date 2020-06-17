

/**
 * main.c
 */
#include <stdbool.h>
#include <stdint.h>
#include "inc/hw_memmap.h"
#include "driverlib/gpio.h"
#include "driverlib/sysctl.h"
#include "Mylib/switches.h"
#include "Mylib/led.h"
#include "Mylib/uartstdio.h"
#include "debug.h"
#include "Scheduler/Scheduler.h"

int main(void)
{
    SysCtlClockSet(SYSCTL_SYSDIV_1 | SYSCTL_USE_OSC | SYSCTL_OSC_MAIN |SYSCTL_XTAL_16MHZ);
    switchInit(); //Configuration switch
    ledInit(); //Configuration led
    SchedulerInit(1000);    //systick interrupts after 1 ms
    while(1)
    {
        SchedulerRun();
    }
}
