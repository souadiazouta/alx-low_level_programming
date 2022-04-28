#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - returns 1 if the input
 * integer is a prime number
 *
 * @n: number
 *
 * Return: 1 if the input integer
 * is a prime number
 */

int is_prime_number(int n)
{
	return (is_prime(n, 1));
}

/**
 * is_prime - check if number is prime
 *
 * @n: number
 * @i: iteration times
 *
 * Return: 1 if it is prime otherwise 0
 */

int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (is_prime(n, i + 1));
}
