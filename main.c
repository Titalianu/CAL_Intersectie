#include "general.h"
#include "hal_motor.h"

int main()
{
    
	vMotorInit();
		vSetMotorDir(0);
/*
	vSetMotorDir(0);
	vSetMotorSpeed(30);
*/
	while(1)
	{
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
		*/
		int i=0;
		int speed=10;
  		while(i<5)
 	 	{	
		
			vSetMotorSpeed(speed);
			__delay_ms(100);
			speed+=10;
			i++;
    	}


	}
    return 0;
}