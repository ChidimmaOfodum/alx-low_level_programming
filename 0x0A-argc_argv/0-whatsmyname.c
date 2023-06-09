#include <stdio.h>

/**
  * main - prints the arguments to main
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 always
  */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;

	return (0);
}

