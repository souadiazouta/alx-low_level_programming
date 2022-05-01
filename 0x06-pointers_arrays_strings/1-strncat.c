#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: the destination string.
 * @src: the source string.
 * @n: number of byte from src.
 *
 * Return: pointer to the resulting string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, d;


	d = (int)strlen(dest);

	for (i = 0 ; i < n ; i++)
	{
		dest[d + i] = src[i];
	}

	return (dest);
}
