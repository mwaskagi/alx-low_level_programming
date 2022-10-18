#include <stdio.h>
#include "main.h"

/**
 * main - calphabet
 *
 * Return: 0
 */

int print_alphabet()
{
	int ch, alpha;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		alpha = putchar(ch);
	}

	alpha = putchar('\n');
	return (alpha);
}

int main(void)
{
	print_alphabet();
	return (0);
}
