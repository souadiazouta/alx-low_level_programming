#include <stdio.h>
#include "main.h"

/**
 * get_bit - function that returns the value
 * of a bit at a given index
 *
 * @n: number
 * @index: ......
 *
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if(index > 63)
	{
		return (-1);
	}
	else
	{
		return ((n >> (index)) & 1);
	}
}
