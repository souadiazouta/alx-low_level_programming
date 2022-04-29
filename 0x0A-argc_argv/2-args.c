#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that prints all arguments it receives.
 *
 * @argc: argument number
 * @argv: argument array
 *
 * Return: Always 0.
 */

int main(int argc, char* argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}

	return 0;
}
