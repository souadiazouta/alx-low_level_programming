#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates 
 * two string
 * 
 * @s1: string num 1
 * @s2: string num 2
 * @n: num of byte to take from s2
 *
 * Return: pointer to new string
 */
 
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, num, siz1, siz2;



	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	siz1 = strlen(s1);
	siz2 = strlen(s2);

	num = (n < siz2) ? n : siz2;

	ptr = malloc(sizeof(char) * (siz1 + num) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < siz1 ; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0 ; j < num ; i++, j++)
	{
		ptr[i] = s2[j];
	}

	ptr[i] = '\0';

	return (ptr);
}
