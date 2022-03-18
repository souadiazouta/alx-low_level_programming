#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers -print numbers from 0 to 9.
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i >= 9 ; i++)
	{
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
