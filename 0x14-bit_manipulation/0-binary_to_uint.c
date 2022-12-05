#include <stdio.h>
#include "main.h"

/**
 * binary_to_unit - function converts a binary number to an unsigned int
 * @b: pointer
 * Return: converted number
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int a = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		a = a << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			a = a | 1;

		a++;
	}
	return (a);
}
