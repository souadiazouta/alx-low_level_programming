#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - function that reverse the content
 * of an array of integers.
 * @a: array of integers.
 * @n: number of elements of the array.
 */
void reverse_array(int *a, int n)
{
	int rev, i;

	for (i = 0 ; i < n ; i++)
	{
		rev = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = rev;
	}
}
