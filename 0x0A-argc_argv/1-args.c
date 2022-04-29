#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that prints the number of
 * argumenrs passed into it.
 *
 * @argc: argument number
 * @argv: argument array
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{

	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
