#include "main.h"
/** 
 * _isdigit - Entry point
 * Description: checks whether input is a digit
 * @c: input parameter
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
