#include "main.h"

/**
 * _memset - printes buffer
 * @s: contain buffer
 * @b: writes to buffer
 * @n: gets the size
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(s + a) = b;
	}
	return (s);
}
