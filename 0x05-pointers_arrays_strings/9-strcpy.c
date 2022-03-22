#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcpy - function that copies the string pionted to by src,
 * including the terminating null byte (\n)to the buffer pointed to by dest.
 * @dest: pointer type char.
 * @src: pointer type char.
 *
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	char *ptr;

	/*if (dest != NULL)
	{
		dest = "";
	}*/
	*ptr = dest;

	for (i = 0 ; i < (int)strlen(src) ; i++)
	{
		dest[i] = src[i];
	}
	return (ptr);
}
