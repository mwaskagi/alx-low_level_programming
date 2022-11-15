#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that print dog information
 * @d: pointer
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NUll)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
