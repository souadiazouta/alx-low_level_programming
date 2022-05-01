#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *  _strcmp - function that compares two strings.
 *  @s1: string.
 *  @s2: string.
 *  Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i;


	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
	}

	return (0);

}
