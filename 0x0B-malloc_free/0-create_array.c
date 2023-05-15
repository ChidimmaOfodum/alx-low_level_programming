#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - a function that creates an array
 * @size: size of the array
 * @c: elements in the array
 * Return: Null or pointer
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
