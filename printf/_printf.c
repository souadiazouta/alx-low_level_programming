#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/**
 * _printf - function that produces 
 * output according to a format.
 *
 * @format: is a character string.
 *
 * Return: the number of characters printed.
 */

int _printf(const char *format, ...)
{

	const char *print;
	unsigned int i;
	char *s;
	int count = 0;
	va_list arg;



	va_start(arg, format);

	for (print = format ; *print != '\0' ; print++)
	{
		while (*print != '%')
		{
			write(1, &(*print),1);
			print++;
			count++;
		}
		print++;
	       
		if (*print == 'c')
		{
			i = va_arg(arg, int);
			write(1, &i, 1);
			count++;
			break;
		}
		else if (*print == 's')
		{
			s = va_arg(arg,char *);
			for(i = 0 ; s[i] != '\0' ; i++)
			{
				write(1, &s[i], 1);
				count++;
			}
			break;
		}
		
	}
	va_end(arg);
	return (count);
}
