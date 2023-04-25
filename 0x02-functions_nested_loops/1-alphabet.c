#include <stdio.h>
/**
 * main - Entry point
 * Descrption: a program that calls a function
 * Return: 0
 */

int main(void)
{
	void print_alphabet(void)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
	print_alphabet();
}
