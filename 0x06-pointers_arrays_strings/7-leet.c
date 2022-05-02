#include "main.h"
#include <stdio.h>

/**
 * leet - function that encodes a string into 1337
 *
 * @c: pointer string.
 *
 * Return: string encoded
 */

char *leet(char *c)
{
	char letters[] = "aAeEoOtTlL";
	char replace[] = "4433007711";
	int i, j;


	for (i = 0 ; c[i] != '\0' ; i++)
	{
		for (j = 0 ; letters[j] ; j++)
		{
			if (letters[j] == c[i] || letters[j] - 32 == c[i])
			{
				c[i] = replace[j];
			}
		}
	}

	return (c);
}
