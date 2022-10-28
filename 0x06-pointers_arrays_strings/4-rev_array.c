#include "main.h"

/**
 * reverse_array - function that reverse array content
 * @a: array
 * @n: number of elements in array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int b = 0, c;

	n = n - 1;
	while (b <= n)
	{
		c = a[b];
		a[b++] = a[n];
		a[n--] = c
	}
}
