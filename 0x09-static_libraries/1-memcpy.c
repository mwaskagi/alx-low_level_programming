#include "main.h"

/**
 * _memcpy - copies memory
 * @dest: contain the destination
 * @src: contain the source
 * @n: size of memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(dest + a) = *(src + a);
	}
	return (dest);
}
