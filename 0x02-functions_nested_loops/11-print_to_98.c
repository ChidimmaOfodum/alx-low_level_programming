#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 * Description: a program that prints to 98
 * @n: starting point
 * Return: 0
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("\n");
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("\n");
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}
