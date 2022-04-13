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


	size = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr != NULL)
	{
		for (i = 0 ; i < size ; i++)
		{
			arr[i] = str[i];
		}
	}
	else
	{
		return (NULL);
	}
	return (arr);
}
