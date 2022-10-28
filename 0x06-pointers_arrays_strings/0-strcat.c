#include "main.h"

/**
 * _strcat - function that concatinate two strings
 * @dest: string one
 * @src: string two
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0, c = 0;

	while (dest[a] != '\n')
		a++;
	while (src[b] != '\n')
		b++;
	while (c <= b)
	{
		dest[a] = src[c];
		c++;
		a++;
	}
	return (dest);
}
