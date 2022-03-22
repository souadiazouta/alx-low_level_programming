#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character.
 * @str: pointertype char.
 */

void puts2(char *str)
{
	int i;

	for (i = 0 ; i < (int)strlen(str) ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
