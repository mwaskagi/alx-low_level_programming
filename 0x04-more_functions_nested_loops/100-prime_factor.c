#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the prime factor of x
 * Return: 0
 */

int main(void)
{
	long a, b;

	a = 612852475143;

	for (b = 2; a > b; b++)
	{
		while (a % b == 0)
			a = a / b;
	}
	printf("%lu", b);
	printf("\n");
	return (0);
}
