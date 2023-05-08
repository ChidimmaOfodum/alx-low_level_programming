#include "main.h"
/**
 * *_memset - a function that fills memory
 * @s: a given location in memory
 * @b: constant byte
 * @n : the number of bytes to be filled
 * Return: memory location
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
