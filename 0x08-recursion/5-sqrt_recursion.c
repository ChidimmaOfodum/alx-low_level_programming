#include "main.h"
int _sqrt_helper(int num, int guess);
/**
 * _sqrt_recursion - returns square root of a number
 * @n: base number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - a helper function
 * @num: base number
 * @guess: square root
 * Return: square root
 */

int _sqrt_helper(int num, int guess)
{
	if (guess * guess == num)
	{
		return (guess);
	}
	else if (guess * guess > num)
	{
		return (-1);
	}

	return (_sqrt_helper(num, (guess + 1)));
}
