#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a two  dimensional
 * array
 * @width: array
 * @height: array
 * Return: NULL if width or height are 0 or -ve, else
 * returns pointer
 */

int **alloc_grid(int width, int height)
{
	int **a, b, c, d;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(height * sizeof(int *));

	if (a == NULL)
		return (NULL);

	for (b = 0; b < height; b++)
	{
		a[b] = malloc(width * sizeof(int));
		if (a[b] == NULL)
		{
			for (c = 0; c <= b; c++)
			{
				free(a[c]);
			}
			free(a);
			return (NULL);
		}
		for (d = 0; d < width; d++)
		{
			a[b][d] = 0;
		}
	}
	return (a);
}
