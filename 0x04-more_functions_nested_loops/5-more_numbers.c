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
			_putchar(y + '0');
		}
		_putchar('\n');
	}
}
