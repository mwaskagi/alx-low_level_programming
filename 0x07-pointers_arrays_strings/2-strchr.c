#include "main.h"

/**
 * _strchr - locater charcter in a string
 * @s: buffer one
 * @c: buffer two
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
			return (0);
	}
	return (s);
}
