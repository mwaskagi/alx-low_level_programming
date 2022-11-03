#include "main.h"

/**
 * is_prime_number - check if number is prime or not
 * @n: number
 * @b: number
 * Return: 1 if prime else 0
 */

int is_prime_number(int n, int b)
{
	if (n < = 1 || (n != b && n % b == 0))
	{
		return (0);
	}
	else if (n == b)
	{
		return (1);
	}
	return (is_prime_number(n, b + 1));
}
