#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional array of integers.
 * @grid: The 2-dimensional array of integers to be freed.
 * @height: The height of an grid.
 */
void free_grid(int **grid, int height)
{
	int cpt;

	for (cpt = 0; cpt < height; cpt++)
		free(grid[cpt]);

	free(grid);
}
