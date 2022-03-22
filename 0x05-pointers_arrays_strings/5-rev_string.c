#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: pointer type char.
 */

void rev_string(char *s)
{
	char rev;
	int len, i;

	len = (int)strlen(s) - 1;
	for (i = 0 ; i <= len / 2 ; i++)
	{
		rev = s[i];
		s[i] = s[len - i];
		s[len - i] = rev;
	}
}
