#include "main.h"

/**
 * _islower - check is char
 * @c: the letter
 * Return: 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
