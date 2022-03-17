#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function that print number from n to 98 
 *
 * @n: number start with
 */

void print_to_98(int n)
{
	int j;

	for (j = n ; j <= 98 ; j++)
	{
		if (j != 98)
		{
			putchar(',');
			putchar(' ');
		}
		if (j == 98)
		{
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
		}
		else if ((j) >= 10)
		{
			putchar(((j) / 10) + '0');
			putchar(((j) % 10) + '0');
		}
		else if ((j) < 10)
		{
			putchar(' ');
			putchar(((j) % 10) + '0');
		}
		else if (j > -10 && j < 0)
		{
			putchar((-((-j) % 10)) + '0');
		}
		else if (j < -10)
		{
			putchar((-((-j) / 10)) + '0');
			putchar((-((-j) % 10)) + '0');
		}
	}
}
