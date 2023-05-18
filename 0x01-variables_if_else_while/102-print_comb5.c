#include <stdio.h>

/**
 * main - Entry point
 * Description: printing a combination of numbers
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			putchar(' ');
			for(k = 48; k < 58; k++)
			{
				for (l = 49; l < 58; l++)
				{
					putchar(k);
					putchar(l);
					putchar(',');
				}
			}
		}
	}
}
