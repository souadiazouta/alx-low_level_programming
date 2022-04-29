#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that prints its name.
 *
 * @argc: argument number
 * @argv: argument array
 *
 * Return: Always 0.
 */

int main(int argc, char* argv[])
{
	printf("%s\n", argv[0]);
	(void) argc;

	return (0);
}
