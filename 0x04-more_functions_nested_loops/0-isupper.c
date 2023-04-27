#include "main.h"

/**
 * _isupper - Entry point for the function
 * Description: A function that checks if a letter is upper or lower
 * @c: int inpiut
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
