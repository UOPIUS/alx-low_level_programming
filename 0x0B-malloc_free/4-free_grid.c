#include "main.h"

/**
 * free_grid - free 2d array grid
 * @grid: width of grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
