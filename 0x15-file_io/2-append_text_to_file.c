#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file to append the text to
 * @text_content: the content to be appended into the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content);
{
	int fo, x, z = 0;

	if (!filename)
		return (-1);

	fo = open(filename, O_WRONLY | O_APPEND);
	if (fo < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[x])
			x++;
		z = write(fo, text_content, x);
		if (x != z)
			return (-1);
	}

	close(fo);

	return (1);
}
