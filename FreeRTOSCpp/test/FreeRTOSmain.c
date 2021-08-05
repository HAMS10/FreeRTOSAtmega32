/*
 * freeRTOSmain.c
 *
 * Created: 14/05/2013 20:10:58
 *  Author: eBlady
 */ 

#include "FreeRTOS.h"
#include "task.h"

#include "../src/src_uCConfig.h"
#include "../src/srcTask.h"

int main(void)
{
	uCconfigPorts();

	taskStartThreads(tskIDLE_PRIORITY + 1);

	vTaskStartScheduler();

	return 0;
}

