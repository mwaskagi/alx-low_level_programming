#include "main.h"

/**
 * print_rev - Print string in reverse
 * @s: contain the string
 * Return: 0
 */

void print_rev(char *s)
{
	int count;

	count = 0;
	while (s[count] != s['\0'])
	{
		count++;
	}

	count--;
	while (count != 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
