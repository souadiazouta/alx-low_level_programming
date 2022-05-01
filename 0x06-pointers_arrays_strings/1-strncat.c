#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: the destination string and the result is stored in it.
 * @src: the source string.
 * @n: number of byte from src.
 *
 * Return: pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, d;


	d = (int)strlen(dest);
	for (i = 0 ; i < n ; i++)
	{
		dest[d + i] = src[i];
	}
	
	dest[d + i] = '\0';

	return (dest);
}
