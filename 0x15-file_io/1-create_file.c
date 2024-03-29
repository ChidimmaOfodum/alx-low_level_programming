#include "main.h"
/**
 * create_file - Creates a file if does not exist otherwise opens
 * @filename: filename
 * @text_content: text content to be written in the file
 * Return: Success (1) Fail (-1)
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fdw, fdo, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}


	fdo = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (text_content == NULL)
	{
		close(fdo);
		return (-1);
	}
	while (text_content[len])
	{
		len++;
	}

	fdw = write(fdo, text_content, len);

	if (fdo == -1 || fdw == -1)
		return (-1);
	close(fdo);

	return (1);
}
