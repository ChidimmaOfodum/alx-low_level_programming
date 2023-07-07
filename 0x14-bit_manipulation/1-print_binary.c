#include "main.h"
void print_binary_helper(unsigned long int n);

/**
 * print_binary - int to binary
 * @n: int to be converted
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		printf("0");
	print_binary_helper(n);
}

/**
 * print_binary_helper - int to binary
 * @n: int to be converted
 * Return: void
 */
void print_binary_helper(unsigned long int n)
{
	if (n == 0)
		return;
	print_binary_helper(n / 2);
	printf("%lu", n % 2);
}
