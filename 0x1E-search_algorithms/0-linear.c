#include "search_algos.h"
/**
 * linear_search - searches for a specific value using linear search
 * @array: array of elements
 * @size: size of the array
 * @value: value to be searched for
 * Return: index of value found or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
        size_t i = 0;

        if (!array)
                return (-1);
        for (i = 0; i < size; i++)
        {
                printf("Value checked array[%ld] = [%d]\n", i, array[i]);
                if (array[i] == value)
                {
                        return (i);
                }
        }
        return (-1);
}
