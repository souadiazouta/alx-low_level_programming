#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function that frees a 2 dimentional
 * grid previously created by alloc grid.
 *
 * @grid: address of the two dimensional grid.
 * @height: height of the array.
 *
 */

void free_grid(int **grid, int height)
{
	int j;



	if (grid == NULL || height <= 0)
	{
		return ;
	}
	for (j = 0 ; j < height ; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
