#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d grid created by previous function
 * @grid: pointer to 2d grid
 * @height: number of rows
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);

}
