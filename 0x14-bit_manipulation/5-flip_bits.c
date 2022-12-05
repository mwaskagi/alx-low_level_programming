#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Function returns the number
 * of bits need to flip to get from one
 * number to another
 * @n: number 1
 * @m: number 2
 * Return: number of flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a = 0, num1, num2;

	while (!(n == 0 && m == 0))
	{
		num1 = n & 1;
		num2 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (num1 != num2)
			a += 1;
	}
	return (a);
}
