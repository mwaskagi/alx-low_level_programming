#include "main.h"

/**
 * _strlen_recursion - count the string length
 * @s: string
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s != '\n')
	{
		return (0 + _strlen_recursion(s + 1));
	}
	return (0);
}
