#include "function_pointers.h"
/**
 * array_iterator - executes function given as
 * parameter on each element of array
 * @array: integer array
 * @size: size of array
 * @action: pointer of function
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && action)
		for (a = 0; a < size; a++)
			action(array[a]);
}
