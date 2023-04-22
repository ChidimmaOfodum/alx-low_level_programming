#include <stdio.h>

/*
 * main - Entry point
 * Description: printing combination of three digits
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
			for (k = j + 1; j < 58; j++)
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
