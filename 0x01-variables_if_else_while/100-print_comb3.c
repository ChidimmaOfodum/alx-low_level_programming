#include <stdio.h>

/**
 * main - Entry point
 * Description: prints combination of numbers
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
			{
				putchar('\n');
			}
			else
			{
			putchar(',');
			putchar(' ');
			}
		}
	}

	return (0);
}
