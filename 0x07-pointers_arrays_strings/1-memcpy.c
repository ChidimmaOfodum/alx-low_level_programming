#include "main.h"
/**
 * *_memcpy - a function that copies memory space
 * @dest: pointer to destination
 * @n: number of bytes to be copied
 * @src: pointer to source
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
