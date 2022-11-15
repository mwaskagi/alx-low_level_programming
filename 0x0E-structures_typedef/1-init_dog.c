#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function fo rht dog
 * @d: pointer
 * @name: dog name
 * @age: age of dog
 * @owner: dogs owner
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
