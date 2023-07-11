#include "main.h"
/**
 * append_text_to_file - appends text to file
 * @filename: filename
 * @text_content: content to be appended
 * Return: success- 1 failure -1
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[len])
	{
		len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);

	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
