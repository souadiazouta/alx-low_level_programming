#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc: numero de arg
 * @argv: the tab of argement
 *
 * Return: result 0
 */

int main(int argc, char *argv[])
{
	int result;
	int (*cal)(int, int);



	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2] == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	cal = get_op_func(argv[2]);

	if (cal == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = cal(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);

	return (0);
}

