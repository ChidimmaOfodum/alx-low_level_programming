#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - return index after being passed a call back
 * @array: array
 * @size: size of array
 * @cmp: callback function
 * Return: index of found digit or -1
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result)
			return (i);
	}
	return (-1);
}
