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
	int k;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			for (k = j + 1; k < 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (k == 57 && j == 56 && i == 55)
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
	}
	return (0);
}
