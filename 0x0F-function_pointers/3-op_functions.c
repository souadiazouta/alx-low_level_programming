#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - function calcul sum
 * @a: input type intger
 * @b: input type intger
 * Return : returns the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function calcul the difference of a & b
 * @a: inout type intger
 * @b: input type integer
 * Return: return sub
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function calcul the product
 * @a: inputtype integer
 * @b: input type integer
 * Return: returne the product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function calcul division
 * @a: input
 * @b: input
 * Return: rturn division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function calcul the remainder of division
 *
 * @a: input type integer
 * @b: input type integer
 * Return: returns the remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
