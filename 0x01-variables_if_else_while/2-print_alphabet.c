#include <stdio.h>
#include <ctype.h>

/**
 * main convert charters to lower case using 
 * putchar
 * Return: 0
 */

int main()
{
	char a[] = "ABCDEFGHIJKL";
	char b[] = "MNOPQRSTUVWXYZ";
	char result;

	result = tolower(a[13]);
	putchar(result);

	result = tolower(b[13]);
	putchar(result);
	return (0);
}
