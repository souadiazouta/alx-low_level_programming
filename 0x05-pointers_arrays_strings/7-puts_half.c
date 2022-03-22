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

	len = (int)strlen(str) ;
	if (len % 2 != 0)
	{
		for (i = (len - 1) / 2 ; i < (int)strlen(str) ; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = len / 2 ; i < (int)strlen(str) ; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
