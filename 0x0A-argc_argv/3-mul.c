#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * main - program that prints that multiples numbers.
 *
 * @argc: argument number
 * @argv: argument array
 * 
 * Return: Always 0.
 */

int main(int argc, char* argv[])
{
	int i, res = 0;

	if (argc == 3)
	{
		for (i = 1 ; i < argc ; i++)
		{
			res = (res == 0) ? atoi(argv[i]) : res * atoi(argv[i]);
		}
		
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
