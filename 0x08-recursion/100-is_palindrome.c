#include "main.h"

/**
 * check - check number from is_palindrome
 * @s: number
 * Return: 0
 */

int check(char *s)
{
	if (*s != '\0')
	{
		return (1 + check(s + 1));
	}
	return (0);
}

/**
 * counter_check - check is_palindrome value
 * @s: string 1
 * @a: checker
 * Return: 0
 */

int counter_check(char *s, int a)
{
	if (a <= 0)
	{
		return (1);
	}
	if (*s == *(s + (a - 1)))
	{
		return (counter_check(s + 1, a - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - check if string is a palindrome
 * @s: string
 * Return: 1 if palindrome 0 if not
 */

int is_palindrome(char *s)
{
	int a;

	a = check(s);
	return (counter_check(s, a));
}
