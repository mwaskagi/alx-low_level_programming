#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return a pointer to newly allocated space in
 * memory
 * @str: string
 * Return: null if string is null, else return pointer
 */

char *_strdup(char *str)
{
	int a, b;
	char *string;

	if (str == NULL)
		return (0);
	a = 0;

	while (*(str + a) != '\0')
	{
		a++;
	}

	string = malloc(a + 1);

	if (string == 0)
		return (0);

	for (b = 0; b < a; b++)
	{
		*(string + b) = *(str + b);
	}
	return (string);
}
