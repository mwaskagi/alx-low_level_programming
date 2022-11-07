#include "main.h"

/**
 * _strlen - get the length of a string
 * @s: is the string
 * Return: size of array
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
