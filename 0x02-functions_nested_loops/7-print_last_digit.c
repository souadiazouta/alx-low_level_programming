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
	int d;

	d = n % 10;
	_putchar(d);
	return(d);
}
