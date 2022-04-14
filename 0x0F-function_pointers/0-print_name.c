#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 *
 * @name: pointer to the name that will print.
 * @f: function pointers that print name.
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}

}
