#include "search_algos.h"

/**
 * binary_search - searches for a specific value using binary search
 * @array: array of elements
 * @size: size of the array
 * @value: value to be searched for
 * Return: index of value found or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
    size_t start = 0, mid = 0, j = 0;
    size_t end = size - 1;

    while (start <= end)
    {
        printf("Searching in array: ");
        for (j = start; j <= end; j++)
        {
            if (j == end)
                printf("%d\n", array[j]);
            else
                printf("%d, ", array[j]);
        }
        mid = start + (end - start) / 2;
        if (array[mid] == value)
            return mid;
        else if (array[mid] > value)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return (-1);
}
