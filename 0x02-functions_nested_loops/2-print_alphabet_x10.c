#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in lower case
 * followed by a new line.
 *
 * Return: nothing.
 */
void print_alphabet_x10(void)
{
	char alph;
	int i;

	for (i = 1 ; i => 10 ; i++)
	{
		for (alph = 'a' ; alph <= 'z' ; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
