#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: the size of the array.
 * @c: the char inisializes.
 *
 * Return: pointer to the array, or NULL if il fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;


	if (size != 0)
	{
		arr = malloc(size * sizeof(char));
		if (arr != NULL)
		{
			for (i = 0 ; i < (int)size ; i++)
			{
				arr[i] = c;
			}
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}
	return (arr);
}
