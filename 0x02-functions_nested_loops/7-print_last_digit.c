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
		putchar(-j + 48);
		return (-j);
	}
	else
	{
		putchar (j + 48);
		return (j);
}

