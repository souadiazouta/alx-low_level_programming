#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that intialize a variable 
 * of type struct dog.
 * 
 * @d: variable of type struct dog.
 * @name: variable for name of dog.
 * @age: variable for age of dog.
 * @owner: variable for owner of dog.
 *
 * Return: Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
