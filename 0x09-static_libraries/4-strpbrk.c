#include "main.h"

/**
 * _strpbrk - locates the first occurance in string
 * @s: string
 * @accept: buffer
 * Return: pointer to byte in s that matches
 * one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; *(accept + b); b++)
		{
			if (*(s + a) == *(accept + b))
				return (s + a);
		}
	}
	return (0);
}
