#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char *argv[]);

/**
 * main - copies text content from one file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: On success - 0
 */

int main(int argc, char *argv[])
{
	char *file_from = argv[1];
	char *file_to = argv[2];
	char buf[1024];
	int fd_from, fd_to, count_read, count_written, close_from, close_to;

	if (argc != 3)
	{
		perror("Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(file_from, O_RDWR);
	fd_to = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 00664);

	count_read = read(fd_from, buf, 1024);

	if (fd_from == -1 || file_from == NULL || count_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	count_written = write(fd_to, buf, count_read);

	if (fd_to == -1 || count_written == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	close_from = close(fd_from);
	close_to = close(fd_to);

	if (close_to == -1)
	{
		dprintf(2, "Error: Can't close %d\n", fd_to);
		exit(100);
	}

	if (close_from == -1)
	{
		dprintf(2, "Error: Can't close %d\n", fd_from);
		exit(100);
	}

	return (0);

}
