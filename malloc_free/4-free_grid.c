#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional array of integers
 * @grid: grid
 * @height: height of table
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = height;

	while (i--)
	{
		free(grid[i]);
	}

	free(grid);
}

