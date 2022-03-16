#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _islower - funcction that checks for lowercase characters
 *
 * c: variables lowercase character
 * Return:0 if c is lowercase otherwise 0
 */
int _islower(int c)
{

	if (c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
