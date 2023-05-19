#include "main.h"

/**
 * *array_range - a function that returns an array range
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int diff;
	int i;

	if (min > max)
		return (NULL);
	diff = (max - min) + 1;
	ptr = malloc(sizeof(int) * diff);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
