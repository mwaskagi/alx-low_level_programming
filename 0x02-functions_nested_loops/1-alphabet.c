#include <stdio.h>
#include "main.h"

/**
 * main - calphabet
 *
 * Return: 0
 */

void  print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
