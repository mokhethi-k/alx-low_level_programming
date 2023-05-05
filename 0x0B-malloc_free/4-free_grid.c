#include "main.h"
#include <stdlib.h>

/**
 *free_grid - free the 2D array
 *@grid: the array to be freed
 *@height: the height of the array
 *Return: returns nothing
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
