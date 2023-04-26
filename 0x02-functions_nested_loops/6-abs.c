#include "main.h"
/**
 * _abs - Entry point
 * @n: a number
 * Description: computes absolute value of an integer
 * Return: 0
 */

int _abs(int n)
{
	if (n >= 0)
	{
		printf("%d\n", n);
	}
	else
	{
		printf("%d\n", n * -1);
	}
}
