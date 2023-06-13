#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a string copy
 * @str: string to be copied
 * Return: pointer to new memory or null
 */

char *_strdup(char *str)
{
	int len = 0;
	int i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
	{
		len++;
	}
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}


