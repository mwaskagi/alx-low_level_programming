#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - print buffer
 * @s: buffer
 * @b: write
 * @n: size
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsinged int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}

/**
 * _calloc - allocate memory to array
 * @nmemb: string s1
 * @size: byte size
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	_memset(str, 0, nmemb * size);

	return (str);
}
