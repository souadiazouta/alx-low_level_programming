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
	if (d == NULL)
	{
		return;
	}
	if (d->name = NULL)
	{
		d->name = "nil";
	}
	if (d->owner == NULL)
	{
		d->owner == "nil";
	}
	if (d->age == 0)
	{
		printf("Name: (%s)\n Age: (nil)\n Owner: (%s)\n", d->name, d->owner);
	}

	printf("Name: (%s)\n Age: (%s)\n Owner: (%s)\n", d->name, d->age, d->owner);
}
