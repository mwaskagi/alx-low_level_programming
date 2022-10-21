#include "main.h"

/**
 * print_triangle - print trinagle
 * @n: integer
 * Return: void
 */

void print_triangle(int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		for (y = 1; y < (n - i); y++)
			_putchar(' ');
		for (y--; y < n; y++)
			_putchar(35);
		if (x < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
