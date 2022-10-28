#include "main.h"

/**
 * rot13 - encode using a simple caesar cipher by replacing
 * each letter with the letter thirteen places down the alphabet
 * @str: string
 * Return: 0
 */

char *rot13(char *str)
{
	int a = 0, b;
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijkl";

	while (str[a] != '\n')
	{
		b = 0;
		while (b <= 51)
		{
			if (s[b] == str[a])
				str[a] = c1[b];
			b++;
		}
		a++;
	}
	return (str);
}
