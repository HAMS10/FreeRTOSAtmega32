/*
 * moduleStartTasks.c
 *
 * Created: 31/07/2021 3:21:47 p. m.
 *  Author: medin
 */
#include "FreeRTOS.h"
#include "task.h"

#include "taskStartThreads.h"

#include "dataShare/dataShareParameter.h"
#include "primary/primary.h"

void taskStartThreads(unsigned portBASE_TYPE uxPriority)
{
	xMyTaskParameters *pxTaskParameters;

	pxTaskParameters = (xMyTaskParameters *) pvPortMalloc(sizeof(xMyTaskParameters));
	
	xTaskCreate( 
				primary, 
				(const portCHAR *)"tareaNo1", 
				configMINIMAL_STACK_SIZE, (void *)  pxTaskParameters, 
				uxPriority, (xTaskHandle *) NULL 
				);
}