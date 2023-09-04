#include "main.h"

/**
 * append_text_to_file - appends the text
 * @filename: pointer to the name
 * @text_content: the string to add
 * Return: -1 if it fails in one step, 1 success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, n;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		n = 0;
		while (text_content[n] != '\0')
			n++;
	}
	op = open(filename, O_WRONLY | O_APPEND);

	if (op == -1)
		return (-1);
	wr = write(op, text_content, n);

	if (wr == -1)
		return (-1);
	close(op);

	return (1);
}
