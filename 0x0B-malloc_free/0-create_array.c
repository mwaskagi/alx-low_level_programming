#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars and initializes
 * it with a specific char
 * @size: size of array
 * @c: character
 * Return: null if size is 0 else return pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *str;

	if (size == 0)
		return (0);
	str = malloc(size);

	if (str == 0)
		return (0);
	for (a = 0; a < size; a++)
	{
		*(str + a) = c;
	}
	*(str + a) = '\0';
	return (str);
}
