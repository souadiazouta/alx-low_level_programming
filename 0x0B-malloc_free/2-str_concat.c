#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: string number 1.
 * @s2: string number 2.
 *
 * Return: pointer to a newly allocated space in memory, NULL if on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned int i, j, size1, size2;



	size1 = strlen(s1);
	size2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	arr = malloc((size1 + size2 + 1) * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < size1 ; i++)
	{
		arr[i] = s1[i];
	}

	for (j = 0 ; j < size2 ; j++)
	{
		arr[j + i] = s2[j];
	}

	return (arr);
}
