#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Function that check endianness
 * Return: 1
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return((int)*c);
}
