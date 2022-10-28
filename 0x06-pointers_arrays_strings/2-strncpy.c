#include "main.h"

/**
 * _strncpy - function copies as string
 * @dest: string one
 * @src: string two
 * @n: size of string
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0';)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
