#include <stdio.h>
#include "main.h"

/**
 * set_bit - function that sets the value
 * of a bit to 1 at a given index
 *
 * @n: number
 * @index: index
 *
 * Return: 1 it it worked or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= 1 << (index);
	return (1);
}
