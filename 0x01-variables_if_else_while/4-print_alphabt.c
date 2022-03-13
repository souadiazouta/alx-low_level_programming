#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the alphabet in lowercase exept q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z' ; alph++)
	{
		if (alph != 'q' || alph != 'e')
		{
			putchar(alph);
		}
	}
	putchar('\n');

	return (0);
}
