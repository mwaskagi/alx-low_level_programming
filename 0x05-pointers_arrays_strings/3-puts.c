#include "main.h"

/**
 * _puts - write a strings
 * @str: contains the string
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	for  (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
