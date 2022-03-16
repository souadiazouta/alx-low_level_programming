#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * times_table - function that print the 9 times table starting with 0
 *
 */

void times_table(void)
{
	int i, j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			if ((i * j) >= 10)
			{
				putchar(((i * j) / 10) + '0');
				putchar(((i * j) % 10) + '0');
				putchar(',');
			}
			else if ((i * j) < 10)
			{
				putchar(((i * j) % 10) + '0');
			}
		}
		putchar('\n');
	}
}
