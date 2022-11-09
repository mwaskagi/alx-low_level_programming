#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dinebsional grid
 * @grid: array
 * @height: array
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(*(grid + a));
	}
	free(grid);
}
