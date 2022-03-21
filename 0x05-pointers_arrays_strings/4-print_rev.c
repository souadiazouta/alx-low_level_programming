#include <stdio.h>
#include "main.h"

/**
 * print_rev - function that prints a string, in reverse.
 * @s: pointer type char.
 */

void print_rev(char *s)
{
	int len;

	for (i = (int)strlen(s) - 1 ; 1 >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
