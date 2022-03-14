#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main- print the last digit of the number stored in variables.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n , r ;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;
	if (r > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n , r);
	}
	else if (r < 6 && r != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n ,r);
	}
	else
	{
		printf("last digit of %d and is %d\n", n , r);
	}
	return (0);
}
