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
		putchar(i);
		if (i == 57)
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
		}
	}

	return (0);
}