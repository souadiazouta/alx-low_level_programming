#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * main - program that prints that multiples numbers.
 * Return: Always 0.
 */

int main(int argc, char* argv[])
{
	int i;

	if (argc == 3)
	{
		if (*argv >= 0 && *argv <= 9)
			printf("%d\n", (int)(argv[1] * argv[2]));
	}
	else
	{
		printf("Error");
	}

	return 0;
}
