#include "function_pointers.h"

/**
 * int_index - function searches for interger
 * @array: integer array
 * @size: array size
 * @cmp: pointer to function
 * Return: index of first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]))
				return (a);
		}
	}

	return (-1);
}
