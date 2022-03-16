#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - function that print every minute of the day of jack bauer
 * starting from 00:00 to 23:59
 *
 *
 */

void jack_bauer(void)
{
	int min,h;

	for(h = 00 ; h <= 23 ; h++)
	{
		for(min = 00 ; min <= 59 ; min++)
		{
			write(1, h, sizeof(h));
			putchar(':');
			putchar(min / 10 + '0');
			putchar('\n');
		}
	}
}
