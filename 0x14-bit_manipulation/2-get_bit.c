#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * get_bit - Function returns the value of a bit at
 * a given index
 * @index: index
 * @n: bit value
 * Return: value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
		return (n & 1);
	return (get_bit(n >> 1, index - 1));
}
