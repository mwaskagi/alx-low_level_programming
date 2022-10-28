#include "main.h"

/**
 * print_number - check if a number is an integer
 * @n: number
 * Return: 0
 */

void print_number(int n)
{
	int a, b, c;

	b = 10;

	if (n < 10 && n >= 0)
	{
		_putchar (n + '0');
	}
	else if (n > - 10 && n < 0)
	{
		n = n - 2 * n;
		_putchar('-');
		_putchar(n + '0');
	}
	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar('-');
		}
		a = n;

		while (a / b > 9)
		{
			b = b * 10;
		}
		while (b > 0)
		{
			c = a / b;
			a = a % b;
			_putchar(c + '0');
			b = b / 10;
		}
	}
}
