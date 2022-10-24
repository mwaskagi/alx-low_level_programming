#include "main.h"

/**
 * print_triangle - print trinagle
 * @n: integer
 * Return: void
 */

void print_triangle(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y <= n; y++)
			{
				if (y <= n - x)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
