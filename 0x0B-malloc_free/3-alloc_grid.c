#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid- a function that allocates memory to 2d array
 * @width: width of array
 * @height: height of array
 * Return: pointer or null
 *
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j, widthCount;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (widthCount = 0; widthCount < i; widthCount++)
			{
				free(ptr[widthCount]);
			}
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
