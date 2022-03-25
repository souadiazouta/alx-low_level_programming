#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: the destination string and the result is stored in it.
 * @src: the source string.
 * Return: pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, n;


	n = (int)strlen(dest);
	for (i = 0 ; i < (int)strlen(src) ; i++)
	{
		dest[n + i] = src[i];
	}
	
	dest[n + i] = '\0';

	return dest;
}
