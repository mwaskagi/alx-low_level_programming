#include "main.h"

/**
 * prime_check - counter check the number
 * @a: number
 * @b: number
 * Return: 0
 */

int prime_check(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_check(a, b + 1));
}

/**
 * is_prime_number - check if number is prime or not
 * @n: number
 * Return: 1 if prime else 0
 */

int is_prime_number(int n)
{
	return (prime_check(n, 2));
}
