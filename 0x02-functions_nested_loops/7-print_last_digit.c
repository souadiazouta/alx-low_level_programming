#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - function that print the last digit of a number
 *
 * @n: variables for number tested
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int d, abs;

	if (n < 0)
	{
		abs = abs (n);
		d = abs  % 10;
		_putchar('0' + (-d));
		return (-d);
	}
	else
	{
		d = n % 10;
		_putchar('0' + d);
		return(d);
	}
}
