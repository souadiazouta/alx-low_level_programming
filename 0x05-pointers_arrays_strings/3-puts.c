#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _puts - function that prints a string, followed by new line, to stdout
 * @str: pointer type char
 */

void _puts(char *str)
{
	int i;
	for(i = 0 ; i < strlen(str) ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
