#include "main.h"
#include <stdlib.h>

/**
 * free_grid- frees 2D array allocated memory
 * @grid: input array allocation
 * @height: legth of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
