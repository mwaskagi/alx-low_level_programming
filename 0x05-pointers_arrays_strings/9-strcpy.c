#include "main.h"

/**
 * _strcpy - copies the string pointed to
 * @dest: Array
 * @src: source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = src[a];
	return (dest);
}
