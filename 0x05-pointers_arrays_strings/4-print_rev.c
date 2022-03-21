#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - function that prints a string, in reverse.
 * @s: pointer type char.
 */

void print_rev(char *s)
{
	int i;

	for (i = (int)strlen(s) - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
