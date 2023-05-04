#include "main.h"
/**
 * _strlen - prints the length of a given string
 * @s: address of input string
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int j = 0;
	 
	while (*s != '\0')
	{
		s++;
		j++;
	};

	return (j);
}
