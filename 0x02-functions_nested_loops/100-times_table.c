#include "main.h"
/**
 * print_times_table - main function
 * @n: the integer
 * Return: Always 0
 */

void print_times_table(int n)
{
	int last, first, ret;

	if (n > 0 && n <= 15)
	{
		for (first = 0; first <= n; first++)
		{
			_putchar('0');
			for (last = 1; last <= n; last++)
			{
				_putchar(',');
				_putchar(' ');
				ret = first * last;

				if (ret <= 9)
					_putchar(' ');
				if (ret < 100)
					_putchar(' ');

				if (ret > 9 && ret < 100)
				{
					_putchar((ret / 10) + '0');
				}

				if (ret > 99)
				{
					_putchar((ret / 100) + '0');
					_putchar(((ret / 10) % 10) + '0');
				}
				_putchar((ret % 10) + '0');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('0');
		_putchar('\n');
	}
}
