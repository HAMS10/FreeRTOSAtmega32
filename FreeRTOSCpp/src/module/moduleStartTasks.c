/*
 * moduleStartTasks.c
 *
 * Created: 31/07/2021 3:21:47 p. m.
 *  Author: medin
 */
#include "moduleConfig.h"

#include "moduleStartTasks.h"

#include "module.h"



void moduleStartTasks(unsigned portBASE_TYPE uxPriority)
{
	xMyTaskParameters *pxTaskParameters;

	pxTaskParameters = (xMyTaskParameters *) pvPortMalloc(sizeof(xMyTaskParameters));
	
	xTaskCreate( 
				module, 
				(const portCHAR *)"tareaNo1", 
				configMINIMAL_STACK_SIZE, (void *)  pxTaskParameters, 
				uxPriority, (xTaskHandle *) NULL 
				);
}