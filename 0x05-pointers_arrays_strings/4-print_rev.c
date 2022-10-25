#include "main.h"

/**
 * print_rev - Print string in reverse
 * @s: contain the string
 * Return: 0
 */

void print_rev(char *s)
{
	int count, checker;

	count = 0;
	while (s[count] != s['\0'])
	{
		count++;
	}

	checker = 0;
	while (checker == count)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
