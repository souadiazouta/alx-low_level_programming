#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that prints its name .
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	
	int i;
	
	for (i = 0 ; i < argc ; i++)
	{
		printf("%s", argv[0]);
	
	}
	_putchar('\n');

	return 0;
}
