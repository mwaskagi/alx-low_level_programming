#include "main.h"
/**
 * print_last_digit - main function
 * @n: the digit
 * Description: check last digit
 * Return: digit
 */

int print_last_digit(int n)
{
	int num = n % 10;

	if (num < 0)
		num *= -1;

	_putchar(num + '0');

	return (num);
}
