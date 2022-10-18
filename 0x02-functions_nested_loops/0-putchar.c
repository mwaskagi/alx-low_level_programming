#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * Main - Print putchar
 *
 * Return: 0
 */

int main(void)
{
	write(2, "_putchar\n", 10);

	return (0);
}
