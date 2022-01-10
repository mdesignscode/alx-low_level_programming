#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * Description: Each element of the grid should be initialized to 0.
 * @height: the rows of the grid.
 * @width: the columns of the grid.
 *
 * Return: 0.
 */
int **alloc_grid(int width, int height)
{
	int **p, i, j;
	p = malloc(sizeof(*p) * height);

	if (width <= 0 || height <= 0 || p == 0)
	return (NULL);

	else
	{
		for (i = 0; i < height; i++)
		{
			p[i] = malloc(sizeof(**p) * width);
			if (p[i] == 0)
			{
				while (i--)
					free(p[i]);
				free(p);
				return (NULL);
			}

			for (j = 0; j < width; j++)
				p[i][j] = 0;
		}
	}

	return (p);
}
