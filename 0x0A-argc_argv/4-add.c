#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the sum of arguments
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 or 1
  */

int main(int argc, char *argv[])
{
	int sum;
	int i;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
