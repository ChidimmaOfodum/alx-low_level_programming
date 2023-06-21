#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - performs function on each element of the array
 * @array: array element
 * @size: array size
 * @action: function pointer
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
