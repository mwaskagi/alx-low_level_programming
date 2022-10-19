#include "main.h"
/**
 * times_table - function
 * description: multiplacation
 *
 * Return: void
 */

void times_table(void)
{
	int n, m, p;

	n = 0;

	while (n <= 9)
	{
		m = 1;
		_putchar('0');

		while (m <= 9)
		{
			_putchar(',');
			_putchar(' ');

			p = n * m;

			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + '0');

			_putchar((p % 10) + '0');
			m++;
		}
		_putchar('\n');
		n++;
	}
}
