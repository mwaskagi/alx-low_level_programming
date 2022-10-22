#include <stdio.h>

/**
 * main - provides a function that will print buzz
 * if the number is a module of 3 and
 * fiz buz if the number is module of 3 and 5
 * Return: 0
 */

int main(void)
{
	int x;

	x = 1;
	printf(" %d", x);

	for (x = 2; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf(" Fuzz");
		}
		else if (x % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", x);
		}
	}
	printf("\n");
	return (0);
}
