#include <stdio.h>

/**
 * main - use putchar to list alphabet both lower and uper
 * description: print the aplhabet in lower case and upercase
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
