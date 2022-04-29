#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that adds positive numbers.
 *
 * @argc: argument number
 * @argv: argument array
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;


	if (argc < 1)
	{
		printf("0\n");
	}

	for (i = 1 ; i < argc ; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
