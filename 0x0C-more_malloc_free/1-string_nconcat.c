#include "main.h"
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
		len1 = 0;
	}
	else if (s2 == NULL)
	{
		n = 0;
		len2 = 0;
	}
	else
	{

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n >= len2)
	{
		n = len2;
	}
	}
	ptr = malloc(len1 + n + 1);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[len1 + j] = s2[j];
	}
	return (ptr);
}
		
