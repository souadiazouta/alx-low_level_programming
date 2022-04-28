#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int
 *
 * @b: pointer toa string of 0 and 1
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0, i = 0;


	if (!b)
	{
		return (0);
	}
	while (b[i])
	{
		switch (b[i])
		{
			case '0':
				convert *= 2;
				break;
			case '1':
				convert *= 2;
				convert += 1;
				break;
			default:
				return (0);
				break;
		}
		i++;
	}

	return (convert);
}
