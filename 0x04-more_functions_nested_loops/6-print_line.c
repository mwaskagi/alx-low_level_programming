#include "main.h"

/**
 * print_line - print line depending on the option entered
 * @n: the number of time the loop will go
 * Return: void
 */

void print_line(int n)
{
	while (n > 0)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
	}
}
