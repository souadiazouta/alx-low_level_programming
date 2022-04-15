#include <stdio.h>
#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @n: the size of the memory to print.
 * @s: the adress of memory to fills.
 * @b: constant byte.
 *
 * Return: pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; i < (int)n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
