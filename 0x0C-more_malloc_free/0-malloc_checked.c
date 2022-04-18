#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * using malloc
 * @b: number of bit.
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	int *alloc;


	alloc = malloc(b);
	if ( alloc == NULL)
	{
		exit(98);
	}
	return (alloc);
}
