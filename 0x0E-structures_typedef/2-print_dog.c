#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that print struct dog.
 * 
 * @d: variable of type struct dog.
 * 
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name = NULL)
		{
			printf("Name: (nil)\n");
		}
		else 
		{
			printf("Name: (%s)\n", d->name);
		}
		if (d->owner == NULL)
		{
			printf("owner: (nil)\n");
		}
		else
		{
			printf("owner: (%s)\n", d->owner);
		}
		if (d->age == 0)
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Age: (%.2f)\n", d->age);
		}
	}
}
