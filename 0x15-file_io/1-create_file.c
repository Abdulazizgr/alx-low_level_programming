#include "main.h"

/**
 * create_file - creates a file and writes a text
 * @filename: the name of the file
 * @text_content: the text content to write
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, n;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (op == -1)
		return (-1);

	if (text_content != NULL)
	{
		n = 0;
		while (text_content[n] != '\0')
			n++;
	}

		wr = write(op, text_content, n);

		if (wr == -1)
		{
			close(op);
			return (-1);
		}
		close(op);
		return (1);
	}

