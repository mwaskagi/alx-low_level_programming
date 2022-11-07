#include "main.h"

/**
 * _strstr - finds the first occurrence of substring
 * needle in the string haystack
 * @haystack: string
 * @needle: buffer
 * Return: pointer to the beginning of the located
 * substring or null if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0, b, c;

	while (*(haystack + a) != '\0')
	{
		c = a;
		b = 0;
		while (*(needle + b) == *(haystack + a) && *(haystack + a) != '\0')
		{
			a++;
			b++;
		}
		if (*(needle + b) == '\0')
			return (haystack + c);
		a = c + 1;
	}
	return (0);
}
