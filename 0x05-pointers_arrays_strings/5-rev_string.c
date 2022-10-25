#include "main.h"

/**
 * rev_string - printcharcters in reverse
 * @s: contain string
 * Return: 0
 */

void rev_string(char * s)
{
	int a, b, c;

	for (a = 0; s[a] != '\0'; a++)
	{
	}

	a--;

	while (a > b)
	{
		c = s[a];
		s[a--] = s[b];
		s[b++] = c;
	}
}
