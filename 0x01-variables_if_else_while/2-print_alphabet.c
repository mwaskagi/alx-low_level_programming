#include <stdio.h>
#include <ctype.h>

/**
 * main convert charters to lower case using 
 * putchar
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
