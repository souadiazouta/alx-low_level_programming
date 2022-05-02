#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: the string that locates a caracter in.
 * @c: the first caracter.
 * Return: pointer to the first occurrence of the character.
 */

char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
