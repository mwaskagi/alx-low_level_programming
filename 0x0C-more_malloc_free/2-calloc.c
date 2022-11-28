#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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

	return (str);
}
