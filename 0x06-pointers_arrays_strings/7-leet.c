#include "main.h"

/**
 * leet - changes letters to integer
 * @str: sting
 * Return: 0
 */

char *leet(char *str)
{
	int a = 0, b;
	char c[] = "aAeEoOtTlL";
	char c1[] = "4433007711";

	while (str[a] != '\0')
	{
		b = 0;
		while (b <= 9)
		{
			if (c[b] == str[a])
			{
				str[a] = c1[b];
			}
			b++;
		}
		a++;
	}
	return (str);
}
