#include "main.h"
#include <unistd.h>

/**
 * _putchar - write character
 * C is the charcter
 * Return: 1
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
