#include "main.h"
/**
 * print_times_table - main function
 * @n: the integer
 * Return: void
 */

void print_times_table(int n)
{
	int last, first, ret;

	if (n > 0 && n <=15)
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
				{
					_putchar(' ');
				}
				else
				{
					_putchar((ret / 10) + '0');
				}
				_putchar(' ');
				_putchar((ret % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
