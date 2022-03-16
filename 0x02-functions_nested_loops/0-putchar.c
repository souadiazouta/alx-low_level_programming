#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - print _putchar
 *
 * Return: 0 success
 */

int main(void)
{
	write(1, '_putchar\n',sizeof('_putchar\n'));
	return (0);
}
