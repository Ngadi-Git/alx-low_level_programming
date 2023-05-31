#include <stdio.h>
#include "main.h"

/**
 *jack_bauer -  count down 24hrs
 *
 *Return: void.
 */

void  jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			printf("%02d:%02d\n", hour, minute);	
		}
	}
	
}
