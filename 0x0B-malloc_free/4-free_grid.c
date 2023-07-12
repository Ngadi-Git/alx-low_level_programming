#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees 2D grid created in alloc_grid.
  * @grid: pointer to pointer.
  * @height: height of grid.
  *
  * Return: void.
  */

void free_grid(int **grid, int height)
{
	int indx;

	for (indx = 0; indx < height; indx++)
	{
		free(grid[indx]);
	}
	free(grid);
}
