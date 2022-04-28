#include <stdio.h>
#include "main.h"

/**
 * _sqrt - function return square
 *
 * @x: number to calculate
 * @y: power of square
 *
 * Return: return the square
 */

int _sqrt(int x, int y)
{
	if (y * y > x)
	{
		return (-1);
	}
	if (y * y != x)
	{
		return (_sqrt(x, ++y));
	}

	return (y);
}

/**
 * _sqrt_recursion - returns the natural
 * square root of a number
 *
 * @n: number
 *
 * Return: natural square
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
