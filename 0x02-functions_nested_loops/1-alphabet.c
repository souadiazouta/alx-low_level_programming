#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * function - print the alphabet in lower case followed by a new line.
 *
 * Return: nothing.
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z' ; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');

}
