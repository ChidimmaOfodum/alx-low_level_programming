#include "main.h"
/**
 * print_rev - prints the reverse of a string
 * @s: input string
 */

void print_rev(char *s)
{
	int counter;
	int j = 0;

	while (*s != '\0')
	{
		s++;
		j++;
	}
	s--;
	for (counter = j; counter > 0; counter--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
