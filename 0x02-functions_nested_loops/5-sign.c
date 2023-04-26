#include "main.h"
/**
 * print_sign - Entry point
 * Description: prints sign of a number
 * @n: a number
 * Return: 0 if zero, 1 if negative and -1 otherwise
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(43);
		return (1);
	}
}
