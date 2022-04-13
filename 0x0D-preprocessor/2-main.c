#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *
 * main - prints the name of the file.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 0 ; i < (int)strlen(__FILE__) ; i++)
	{
		_putchar(__FILE__[i]);
	}
	_putchar('\n');

	return (0);
}
