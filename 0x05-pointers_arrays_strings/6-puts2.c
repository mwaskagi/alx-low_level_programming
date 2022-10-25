#include "main.h"

/**
 * putss - prints every other charcter 
 * @str: contain string
 * Return:0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\n'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
