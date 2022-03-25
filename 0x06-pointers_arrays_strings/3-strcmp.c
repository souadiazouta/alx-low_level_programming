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
	int n1, n2;

	n1 = (int)strlen(s1);
	n2 = (int)strlen(s2);

	if ( n1 == n2)
	{
		return (0);
	}
	else if (n1 > n2)
	{
		return (15);
	}
	else
	{
		return (-15);
	}
}
