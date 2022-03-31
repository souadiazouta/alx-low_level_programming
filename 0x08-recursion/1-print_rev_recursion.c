#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - function that prints a string.
 * @s: string to print.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*s);
	}
}
