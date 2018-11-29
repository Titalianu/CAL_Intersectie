/* 
 * File:   sys_tasks.h
 * Author: Cristian T. A.
 *
 * Created on August 17, 2018, 1:26 PM
 */

#include "general.h"
#include "sys_tasks.h"

#include "mcal_init.h"

void TASK_Inits()
{
    MCAL_vInit();
    GPIO_u8SetPortPin(PORT_A, 10, DIGITAL, OUTPUT);	
}

void TASK_1ms()
{

}

void TASK_5ms()
{

}

void TASK_10ms()
{   

}

void TASK_100ms()
{ 
    
}

void TASK_500ms()
{ 

}
T_U8 u8Angle1=60;
T_U8 u98Angle2=90;
void TASK_1000ms()
{		
		
		vSetAngle(u8Angle1);
		u8Angle1+=10;
		if(u8Angle1==120)
		{
			u8Angle1=60;
		}
	
}