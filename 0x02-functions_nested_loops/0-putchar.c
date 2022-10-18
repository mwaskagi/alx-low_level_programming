#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Print putchar
 * Description: printing putchar
 * Return: 0
 */

int main(void)
{
	write(1, "_putchar\n", 9);

	return (0);
}
