#include "main.h"

/**
 * _isdigit - check if its a digit from 0 t0 9
 * @c: hold the character
 * Return: 1 if digit between 0 to 9 else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
