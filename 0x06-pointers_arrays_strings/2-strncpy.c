#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - function that copies a string.
 *
 * @dest: pointer string.
 * @src: pointer string.
 * @n: number of character.
 *
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, d;


	d = strlen(src);

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = (i <= d) ? src[i] : '\0';
	}

	return (dest);
}
