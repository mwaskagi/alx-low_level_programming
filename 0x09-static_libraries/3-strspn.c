#include "main.h"

/**
 * _strspn - gets the lenght of prefix substring
 * @s: segment
 * @accept: buffer
 * Return: number of bytes in initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (!(accept[b]))
			break;
	}
	return (a);
}
