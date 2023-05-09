#include "main.h"
/**
 * *_strchr - a function that detects a given character
 * @s: input string
 * @c: character to be detected
 * Return: address of detected character or null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i <= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
