#include "main.h"
/**
 * more_numbers - Entry point
 * Description: prints 0-14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int i = 1;
	int j;
	int k;

	while (i < 10)
	{
		for (j = 48; j <= 57; j++)
		{
			_putchar(j);
		}
		for (k = 'A'; k <= 'D'; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
		i++;
	}
}
