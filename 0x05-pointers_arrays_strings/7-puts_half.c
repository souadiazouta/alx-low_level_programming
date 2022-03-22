#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - function that print half of a string.
 * @str: pointer type char.
 */

void puts_half(char *str)
{
	
	int len, i;

	len = (int)strlen(s) - 1;
	for (i = len /2 ; i < (int)strlen(s) ; i++)
	{
		_putchar(s[i]);
	}
}
