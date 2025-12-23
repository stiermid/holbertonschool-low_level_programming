#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - inits a 2 dimensional arroy of integers
 * @width: width of table
 * @height: height of table
 *
 * Return: a pointer to first item, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **table;

	if (width <= 0 || height <= 0)
		return (NULL);


	table = malloc(height * sizeof(int *));
	if (table == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		table[i] = malloc(width * sizeof(int));
		if (table[i] == NULL)
		{
			while (i--)
				free(table[i]);
			free(table);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			table[i][j] = 0;
	}

	return (table);
}

