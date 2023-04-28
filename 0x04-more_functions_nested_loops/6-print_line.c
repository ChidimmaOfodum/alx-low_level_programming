#include "main.h"
/**
 * print_line - Entry point
 * Description: a program that prints a straight line
 * @n: number of lines to be printed
 * Return: void
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
