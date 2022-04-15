#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers.
 *
 * @separator: the string for spare numbers.
 * @n: variadic inputs type int.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;


	if (separator == NULL)

		return;

	va_start(ap, n);

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(ap, const unsigned int));

		if (i != (n - 1))

			printf("%s ", separator);
	}

	printf("\n");

	va_end(ap);

}
