#include <stdio.h>

/**
  * main - prints all argument including the first
  * @argc: argument count
  * @argv: argument vector
  * Return: always 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	(void)argc;

	return (0);
}
