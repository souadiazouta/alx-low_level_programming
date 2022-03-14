#include <stdlib.h>
#include <stdio.h>
/**
 * main - print all the numbers of 16 base  in lowercase .
 *
 * Return: Always 0.
 */
int main(void)
{
	char num;
	char alph;

	for (num = 0 ; num < 10 ; num++)
	{
		putchar(num % 16 + '0');
	}
	for (alph = 'a' ; alph <= 'f' ; alph++)
	{
		putchar(alph);
	}
	putchar('\n');

	return (0);
}
