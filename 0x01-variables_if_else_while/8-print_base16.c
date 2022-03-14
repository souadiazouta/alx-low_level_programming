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

	for (num = 0 ; num < 10 ; num++)
	{
		putchar(num % 16 + '0');
	}
	for (num = 97 ; num < 103 ; num++)
	{
		putchar(num % 16 + '0');
	}
	putchar('\n');

	return (0);
}
