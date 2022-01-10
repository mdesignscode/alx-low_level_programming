#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - frees the 2 dimensional grid previously created,
 * by my alloc_grid function.
 * @grid: grid to be freed.
 * @height: size of grid.
 *
 * Return: 0.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
