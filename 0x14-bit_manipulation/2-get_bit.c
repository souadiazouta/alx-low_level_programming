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
	unsigned int bit;


	bit = (n >> index) & 1;

	if((bit == 1)) || (bit == 0))
		return (bit);
	else
		return (-1);
}
