#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: string to convert
 * Return: int equivalent
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	const char *copy = b;

	if (b == NULL)
		return (0);

	while (*copy)
	{
		if (*copy != '0' && *copy != '1')
			return (0);
		copy++;
	}
	result = strtol(b, NULL, 2);

	return (result);
}
