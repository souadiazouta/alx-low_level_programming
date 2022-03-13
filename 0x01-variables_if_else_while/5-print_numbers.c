#include <stdlib.h>
#include <stdio.h>
/**
 * main - print all single numbers of base 10 starting from 0 .
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
