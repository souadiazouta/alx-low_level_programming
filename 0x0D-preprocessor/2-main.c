#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 0;

	for ( i = 0 ; i < (int)strlen(__FILE__) ; i++)
	{
		_putchar(__FILE__);
	}
	_putchar('\n');
	
	return (0);

}
