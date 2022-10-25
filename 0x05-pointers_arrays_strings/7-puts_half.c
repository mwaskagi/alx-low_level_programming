#include "main.h"

/**
 * puts_half - prints half of the srting
 * @str: contain string
 * Return: 0
 */

void puts_half(char *str)
{
	int i, n;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	if (i % 2 != 0)
	{
		n = (i - 1) / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = i / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
