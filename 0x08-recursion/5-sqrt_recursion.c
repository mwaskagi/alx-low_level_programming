#include "main.h"

/**
 * _sqrt_recursion - claculates square root of a number
 * @n: number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	int i = 0;
	if((n) - (i * i) <= 0)
	{
		return (-1);
	}
	else
	{
		_sqrt_recursion(n);
	}
}
