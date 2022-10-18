#include "main.h"

/**
 * main - calphabet
 *
 * Return: 0
 */

void print_alphabet();

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet()
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
}
