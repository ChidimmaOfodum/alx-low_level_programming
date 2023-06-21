#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: array size
 * @cmp: search function
 * Return: 0 or index of value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result > 0)
			return (i);
	}
	return (0);
}
