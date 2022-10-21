#include "main.h"

/**
 * more_numbers - loops 10 times
 * Return: void
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int y;

		for (y = 0; y <= 14; y++)
		{
			if (i >= 10)
				_putchar((y / 10) + 48);
			_putchar((y % 10) + 48);
		}
		_putchar('\n');
	}
}
