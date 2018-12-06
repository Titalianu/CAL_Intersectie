#include "general.h"
#include "hal_motor.h"

int main()
{
/*  
	vSetMotorDir(0);
	vSetMotorSpeed(30);
*/
	T_U8 black=0b1100;
	T_U8 white=0b0;
	T_U8 color;
	TASK_Inits();

	//TASK_vSchedule();
	while(1)
	{
			color=LF_u8ReadPins();
			//0-alb 1-negru
			if(color==white)
			{
				vSetMotorDir(0);
				vSetMotorSpeed(10);
			
			}
			else{
				vSetMotorDir(0);
				vSetMotorSpeed(10);
			}
/*
		int speed;
		vSetMotorDir(0);
		for(speed=10;speed<=100;speed+=10)
		{
			vSetMotorSpeed(speed);
			__delay_ms(1000);
			if(speed=100)
			{	
				speed=10;
			}
		}
		int i=0;
		int speed=10;
  		while(i<5)
 	 	{	
		
			vSetMotorSpeed(speed);
			__delay_ms(100);
			speed+=10;
			i++;
    	}

*/
	}
    return 0;
}