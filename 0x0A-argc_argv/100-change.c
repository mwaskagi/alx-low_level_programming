#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the minimun number of coins to make change
 * for an amount of money
 * @argc: integer
 * @argv: string
 * Return: 1 if error,else 0
 */

int main(int argc, char *argv[])
{
	int a = 0, b = 1, coins, change = 0, c;
	int cents[5] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		for (a = 0; argv[b][a] != '\0'; a++)
		{
			if (argv[b][a] == '-')
			{
				printf("0\n");
				return (0);
			}
			if (!(isdigit(argv[b][a])))
			{
				printf("Error\n");
				return (1);
			}
		}
		coins = atoi(argv[b]);
		for (c = 0; c < 5; c++)
		{
			while (coins >= cents[c])
			{
				coins -= cents[c];
				change += 1;
			}
		}
		printf("%d\n", change);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
