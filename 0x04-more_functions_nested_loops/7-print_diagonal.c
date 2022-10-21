#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: the numberof times the line going to print
 * Return: void
 */

void print_diagonal(int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y  < x; y++)
		{
			_putchar(' ');
		}
		_putchar(92);

		if (y < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
