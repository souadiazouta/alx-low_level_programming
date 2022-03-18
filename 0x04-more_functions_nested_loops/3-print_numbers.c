#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers(void) -print numbers from 0 to 9.
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i >= 9 ; i++)
	{
		putchar((i % 10) + '0');
	}
	putchar('\n');
}
