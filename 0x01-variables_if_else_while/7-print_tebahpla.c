#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the alphabet inreverse followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alph;

	for (alph = 'z' ; alph >= 'a' ; alph--)
	{
		putchar(alph);
	}
	putchar('\n');

	return (0);
}
