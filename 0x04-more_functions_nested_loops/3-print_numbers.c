#include "main.h"

/**
 * print_numbers - print number from 0 to 9 followed
 * by new line
 * Return: 0
 */

void print_number(void)
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		_putchar((i) + '0');
	}
	_putchar('\n');
}
