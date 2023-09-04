#include "main.h"

/**
 * read_textfile - read and write the contents
 * @filename: the name of the file
 * @letters: the number of characters to read and write
 *
 * Return: the number of characters written, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *an;

	if (filename == NULL)
		return (0);

	an = malloc(sizeof(char) * letters);
	if (an == NULL)
		return (0);

	op = open(filename, O_RDONLY);

	if (op == -1)
	{
		free(an);
		return (0);
	}

	re = read(op, an, letters);
	if (re == -1)
	{
		free(an);
		return (0);
	}

	wr = write(STDOUT_FILENO, an, re);
	if (wr == -1 || wr != re)
	{
		free(an);
		return (0);
	}

	free(an);
	close(op);

	return (wr);
}
