#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * clear_bit - Function that sets the value of bit to
 * 0 at given index
 * @n: number
 * @index: index
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int a;

	if (index > 63)
		return (-1);
	a = 1 << index;
	*n = *n & (~a);
	return (1);
}
