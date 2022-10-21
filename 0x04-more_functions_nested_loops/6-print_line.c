#include "main.h"

/**
 * print_line - print line depending on the option entered
 * @n: the number of time the loop will go
 * Return: void
 */

void print_line(int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
