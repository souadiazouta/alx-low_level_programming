#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that the length
 * of a prefix substring
 *
 * @s: string
 * @accept: string
 *
 * Return: the number of bytes in
 * the initial segment of s
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;


	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != s[i] ; j++)
		{
			if ('\0' == accept[j])
			{
				return (i);
			}
		}
	}

	return (i);
}
