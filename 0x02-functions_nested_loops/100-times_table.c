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
			for (last = 1; last <= n; last++)
			{
				ret = first * last;
				_putchar(ret + '0');
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
