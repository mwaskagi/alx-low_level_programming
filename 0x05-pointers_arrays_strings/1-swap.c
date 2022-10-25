#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: store the first integer
 * @b: store the second integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
