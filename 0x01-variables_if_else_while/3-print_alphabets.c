#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alph;
	char alph1;

	for (alph = 'a' ; alph <= 'z' ; alph++)
	{
		putchar(alph);
	}

	for (alph1 = 'A' ; alph1 <= 'Z' ; alph1++)
	{
		putchar(alph1);
	}

	putchar('\n');

	return (0);
}
