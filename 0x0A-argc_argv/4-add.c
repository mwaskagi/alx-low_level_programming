#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positeve numbers
 * @argc: integer
 * @argv: string array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0, a, b;

	if (argc > 0)
	{
		for (a = 1; a < argc; a++)
		{
			for (b = 0; argv[a][b] != '\0'; b++)
			{
				if (!(isdigit(argv[a][b])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[a]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
