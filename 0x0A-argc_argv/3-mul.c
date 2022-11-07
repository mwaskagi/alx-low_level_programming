#include "main.h"
#include <stdio.h>

/**
 * main - print the multiple of two integers
 * @argc: interger
 * @argv: string array
 * Return: 0 if two integers are there 1 if none
 */

int main(int argc, int argv[])
{
	if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
