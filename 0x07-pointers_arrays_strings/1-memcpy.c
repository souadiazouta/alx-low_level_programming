#include <stdio.h>
#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @n: the size of the memory to copies.
 * @src: the address of memory to copies.
 * @dest: the address of memory to paste in.
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0 ; i < (int)n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
