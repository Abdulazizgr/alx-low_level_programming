#include "main.h"

/**
 * create_file - creates a file and writes text into it
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fr, k, m = 0;

	if (!filename)
		return (-1);

	fr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fr < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[k])
			k++;
		m = write(fr, text_content, k);
		if (k != m)
			return (-1);
	}

	close(fr);

	return (1);
}
