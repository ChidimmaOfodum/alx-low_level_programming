#include "main.h"
/**
 * read_textfile - a function that reads a file and prints to stdout
 * @filename: filename
 * @letters: number of letters to be read
 * Return: success- letters read - fail: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, char_read;
	char *buffer;
	buffer = malloc(sizeof(size_t) * letters);

	if (!buffer || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	char_read = read(fd, buffer, letters);

	write(STDOUT_FILENO, buffer, char_read);
	free(buffer);
	close(fd);
	return (char_read);
}
