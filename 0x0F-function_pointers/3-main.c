#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - performs calculation of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: result of calculation
 *
 */

int main(int argc, char *argv[])
{
	int i, a, b, result;
	char *op;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	ptr = get_op_func(op);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((a == 0 || b == 0) && (strcmp(op, "/") == 0 || strcmp(op, "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = ptr(a, b);
	printf("%d\n", result);

	return (0);
}
