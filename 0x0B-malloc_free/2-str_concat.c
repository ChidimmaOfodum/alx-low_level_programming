#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates a string
 * @s1: First string
 * @s2: second string
 * Return: pointer or null
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1 = 0, len2 = 0;
	int i, j;
	
	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}
	ptr = malloc(len1 + len2 + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		ptr[len1] = s2[j];
		len1++;
	}
	return (ptr);
}
