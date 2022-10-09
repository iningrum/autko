/*
 * autko.cpp
 *
 * Created: 10/9/2022 10:34:14 AM
 * Author : WIN-11K
 */ 
#include "main.h"
#include <CarManager/lights.h>
int main(void)
{
	Lights::Setup();
	Lights::On(true);
    /* Replace with your application code */
    while (1) 
    {
		_delay_ms(10000);
		Lights::Toggle(true);
    }
}