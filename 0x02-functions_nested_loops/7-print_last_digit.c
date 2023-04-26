#include "main.h"
/**
 * print_last_digit - Entry point
 * Description: prints last digit of a numbber
 * @i: integer
 * Return: 0-9
 */

int print_last_digit(int i)
{
	int j = i % 10;

	if (j < 0)
	{
		_putchar(-j + 48);
		return (-j);
	}
	else
	{
		_putchar (j + 48);
		return (j);
}

