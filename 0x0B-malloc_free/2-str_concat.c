#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, c, d;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = 0, b = 0;

	while (*(s1 + a) != '\0')
		a++;
	while (*(s2 + b) != '\0')
		b++;

	string = malloc(a + b + 1);

	if (string == 0)
		return (0);

	for (c = 0; c < a; c++)
	{
		*(string + c) = *(s1 + c);
	}
	for (c = 0, d = a; c < b; d++, c++)
	{
		*(string + d) = *(s2 + c);
	}
	*(string + d) = '\0';
	return (string);
}
