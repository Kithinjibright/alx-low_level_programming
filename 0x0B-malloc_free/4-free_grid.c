#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - frees the 2d grid that was previously created in alloc_grid function
 * @grid: pointer to previous 2d array
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
