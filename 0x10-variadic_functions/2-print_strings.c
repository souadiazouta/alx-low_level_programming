#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings.
 *
 * @separator: string to be printed between the strings.
 * @n:the number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *prt;


	if (separator == NULL)
	{
		return;
	}

	va_start(ap, n);

	for (i = 0 ; i < n ; i++)
	{
		if (ptr == NULL)
		{
			ptr = "(nil)";
		}
		printf("%s", ptr);
		if (i !=(n-1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
}
