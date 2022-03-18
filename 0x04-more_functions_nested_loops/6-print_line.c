#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_line -print the character _ n time.
 *  
 *  @n: variable number of time
 * Return: Always 0.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1 ; i <= n ; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
