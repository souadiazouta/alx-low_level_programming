#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
 * main- print whethver  the number stored in variable positive or negative
 *
 * Return : Always 0
 */ 
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n == 0)
	{
		printf("%d is zero", n);
	}
	else if(n > 0)
	{
		printf("%d is positive", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}
