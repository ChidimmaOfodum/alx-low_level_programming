#include "main.h"
/**
 * _isalpha - Entry point
 * Description: checks if input in an alphabet
 * @c: ASCII character
 * Return: 0 if alpha, 1 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90)
			|| (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
