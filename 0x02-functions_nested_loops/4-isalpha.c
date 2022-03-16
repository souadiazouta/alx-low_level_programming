#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _isalpha - function that checks for alphabetic characters
 *
 * @c: variables for alphabetic character
 * Return:1 if c is lowercase otherwise 0
 */
int _isalpha(int c)
{

	if (c <= 'Z' || c <= 'z' || (c >= 99 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
