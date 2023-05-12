#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the products of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i, sum = 1;

		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	printf("Error\n");
	return (1);
}
