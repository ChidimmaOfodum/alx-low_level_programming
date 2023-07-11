#include "main.h"
int create_file(const char *filename, char *text_content)
{
	int fdw, fdo, len = 0;

	if (filename == NULL)
		return (-1);

	fdo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

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
