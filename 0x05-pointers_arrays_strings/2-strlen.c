#include <stdio.h>
#include "main.h"

/**
 * _strlen - functions taht returns the length of a string.
 * @s: pointer type char.
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);

}
