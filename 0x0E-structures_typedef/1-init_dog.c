#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that intialize struct dog.
 * 
 * @d: pointer of struct dog.
 * @name: pointer name of dog.
 * @age: age of dog.
 * @owner: pointer to  owner of dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
