#include <stdio.h>

/**
 * main - use putchar to list alphabet to lowercase
 * description: print aplhabet to lower
 * Return: 0
 */


int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
