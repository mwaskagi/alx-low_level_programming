#include "3-calc.h"

/**
 * op_add - add two numbers
 * @a: number
 * @b: number
 *
 * Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtractors two number
 * @a: number
 * @b: number
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_div - divides two number
 * @a: number
 * @b: number
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - get module for two numbers
 * @a : number
 * @b: number
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
/**
 * op_mul - multiply two numbers
 * @a: number
 * @b: number
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
