#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to
 *              a 2 dimensional array of integers.
 *
 * @width: width
 * @height: height
 *
 * Return: pointer of an array of integers NULL on faliure
*/

int **alloc_grid(int width, int height)
{
	int **grid, d, p;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (d = 0; d < height; d++)
	{
		grid[d] = malloc(width * sizeof(int));
		if (grid[d] == NULL)
		{
			while (d >= 0)
			{
				free(grid[d]);
				d--;
			}
			free(grid);
			return (NULL);
		}
		for (p = 0; p < width; p++)
			grid[d][p] = 0;
	}
	return (grid);
}
