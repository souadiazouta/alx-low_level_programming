#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer.
 * @array: array to search in it.
 * @size: size of array.
 * @cmp: function used to compare.
 *
 * Return: the first element for which
 * cmp function does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;


	if (size <= 0 || !(array) || !(cmp))
	{
		return (-1);
	}

	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]))
		{
			break;
		}
	}

	if (i < size)
	{
		return (i);
	}
	return (-1);
}
