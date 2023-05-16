#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - copies a string
 * @str: string to be copied
 * Return: Null or pointer
 */

char *_strdup(char *str)
{
	char *copy;
	int i, r = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	copy = malloc(sizeof(char) * (i + 1));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (r = 0; str[r]; r++)
	{
		copy[r] = str[r];
	}
	return (copy);
}
