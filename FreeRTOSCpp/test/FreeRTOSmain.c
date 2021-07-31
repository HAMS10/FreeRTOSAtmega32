/*
 * freeRTOSmain.c
 *
 * Created: 14/05/2013 20:10:58
 *  Author: eBlady
 */ 

#include "FreeRTOS.h"
#include "task.h"

#include "../src/uCConfig.h"
#include "../src/module.h"

int main(void)
{
	uCConfigPorts();

	moduleStartTasks(tskIDLE_PRIORITY + 1);

	vTaskStartScheduler();

	return 0;
}

