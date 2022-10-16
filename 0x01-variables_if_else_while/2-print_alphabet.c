#include <stdio.h>
#include <ctype.h>

/**
 * main convert charters to lower case using 
 * putchar
 * Return: 0
 */

int main()
{
	char c, result;
	c = 'A';
	result = tolower(c);
	putchar(result);

	c = 'B';
	result = tolower(c);
	putchar(result);
	return (0);
}
