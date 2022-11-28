#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of string
 * @s: s is string
 * Return: string lengh
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}

/**
 * string_nconcat - joins two string
 * @s1: string 1
 * @s2: string 2
 * @n: size of string 2
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a, b ,c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	b = _strlen(s1);
	a = _strlen(s2);
	if (n < a)
		a = n;

	str = malloc(b + a + 1);

	if (str == NULL)
		return (NULL);

	for (c = 0; c < b; c++)
		*(str + c) = *(s1 + c);

	for (c = 0; c < a; c++)
		*(str + (c + b)) = *(s2 + c);
	*(str + (c + b)) = '\0';
	return (str);
}
