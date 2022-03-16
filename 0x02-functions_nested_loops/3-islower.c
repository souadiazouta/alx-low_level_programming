#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _islower - funcction that checks for lowercase characters
 *
 * Return:0 if c is lowercase otherwise 0
 */
int _islower(int c)
{

	if (c <= 'Z' || c <= 'z' )
	{
		return (0);
	}else
	{
		return (1);
	}
}
