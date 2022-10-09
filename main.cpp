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
	bool mode = false;
    while (1) 
    {
		mode = !mode;
		_delay_ms(5000);
		Lights::Toggle(mode);
		_delay_ms(5000);
		Lights::Toggle(!mode);
    }
}