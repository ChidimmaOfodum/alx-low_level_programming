#include "main.h"
/**
 * factorial - returns factorial of a number
 * @n : input number
 * Return: -1, 0 or factorial of the given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

