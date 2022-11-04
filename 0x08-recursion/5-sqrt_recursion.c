#include "main.h"

/**
 * _sqrt - helps in calcuation of square root
 * @x: number
 * @y: number
 * Return: 0
 */

int _sqrt(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (_sqrt(x, y + 1);
}
/**
 * _sqrt_recursion - calculates square root of a number
 * @n: number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
