#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees memmory
 * @height: height of the 2d array
 * @grid: pointer to the 2d array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
