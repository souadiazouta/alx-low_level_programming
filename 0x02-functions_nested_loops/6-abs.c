#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 *
 * @n: variables for  number tested
 * Return: absolute value
 */
int _abs(int n)
{

	if (n < 0)
	{
		n = (-n);
		return (n);
	}
	else
	{
		return (n);
	}
}
