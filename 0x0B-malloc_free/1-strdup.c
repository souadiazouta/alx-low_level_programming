#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function returns a pointer to a new string
 * which is a dupicate of the string str.
 *
 * @str: the string that will be duplicate.
 *
 * Return: pointer to the duplicated strins.
 * it returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *arr;
	unsigned int i, size;

	
	if (str == NULL)
	{
		return (NULL);
	}

	size = strlen(str);

	arr = malloc((size + 1) * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < size ; i++)
	{
		arr[i] = str[i];
	}

	return (arr);
}
