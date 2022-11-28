#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - alocates memory usinf malloc
 * @b: size
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);

	if (str == NULL)
		exit(98);
	return (str);
}
