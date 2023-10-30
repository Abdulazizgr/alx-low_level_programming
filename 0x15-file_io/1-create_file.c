#include "main.h"

/**
 * create_file - creates a file and writes text content into it
 * @filename: the name of the file to create
 * @text_content: the text to write in the file
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
		wr = write(fd, text_content, len);
		if (wr != len)
			return (-1);
	}

	close(fd);

	return (1);
}
