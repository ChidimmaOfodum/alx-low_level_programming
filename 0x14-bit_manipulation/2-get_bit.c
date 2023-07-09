include "main.h"

/**
 * get_bit - gets bit at an index
 * @n: number
 * @index: index
 * Return: bit at index
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n > 64)
		return (-1);
	return ((n >> index) && 1);
}
