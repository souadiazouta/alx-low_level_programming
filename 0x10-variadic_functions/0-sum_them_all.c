#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum
 * of all its parametres.
 *
 * @n :variadic inputs type int.
 *
 * Return: returns the sum or 0 if n equal to 0.
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;



	va_start (ap, n);

	sum = 0;
	for (i = 0 ; i < n ; i++)
	{
		sum += va_arg (ap, const unsigned int);
	}

	va_end (ap);

	return (sum);
}
