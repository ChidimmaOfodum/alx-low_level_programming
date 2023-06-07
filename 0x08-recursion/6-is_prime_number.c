#include "main.h"
int is_prime_helper(int n, int divisor);
/**
 * is_prime_number - checks if a number is prime or not
 * @n : input number to be checked
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - helper function
 * @n: number to be checked
 * @divisor: divisor
 * Return: 0 or 1
 */

int is_prime_helper(int n, int divisor)
{
	if (n == divisor)
	{
		return (1);
	}
	else
	{
		if (n % divisor == 0 && n != divisor)
		{
			return (0);
		}
		return (is_prime_helper(n, divisor + 1));
	}
}

