#include <stdio.h>

/**
 * main - Entry point
 * Description: printing all possible combibination of single digits
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
		}
	}
	putchar('\n');

	return (0);
}
