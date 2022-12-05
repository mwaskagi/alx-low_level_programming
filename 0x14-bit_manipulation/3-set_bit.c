#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * set_bit - Function sets the value of a bit to 1 at a given index
 * @n : mumber
 * @index: index
 * Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int a;

	if (index > 63)
		return (-1);
	a = 1 << index;
	*n = *n | a;
	return (1);
}
