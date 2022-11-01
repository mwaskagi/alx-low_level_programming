#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the two diagonals
 * of a square marix of integers
 * @a: array
 * @size: size of array
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int b, c;
	int d = 0, e = 0;
	
	for (b = 0; b < size; b++)
	{
		for (c = 0; c < size; c++)
		{
			if (b == c)
				d = d + a[(size + 1) * a];
			if (b + c == size - 1)
				e = e + a[(size - 1) * (b + 1)];
		}
	}
	printf("%i, %i\n", d, e);
}
