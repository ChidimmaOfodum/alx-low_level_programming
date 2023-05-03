#include "main.h"
/**
 * _strlen - prints the length of a given string
 * @s: address of input string
 * Return: lenght of string
 */

int _strlen(char *s)
{
	char i = *s;
	int j = 0;

	while (i != '\0')
	{
		i = *(s + j);
		j++;
	};

	return (j - 1);
}
