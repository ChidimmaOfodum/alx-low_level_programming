#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{	
	int len;
	int i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		len++;
		str++;
	}
	ptr = malloc(len);
	if (ptr == NULL)
		return (NULL);

	for (i = len - 1; i <= 0; i--)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}


