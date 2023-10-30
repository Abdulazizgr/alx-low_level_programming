#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed. 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fr;
	int a, b;
	char *buff;

	if (!filename)
		return (0);

	fr = open(filename, O_RDONLY);
	if (fr < 0)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	a = read(fr, buff, letters);
	if (a < 0)
	{
		free(buff);
		return (0);
	}

	buff[a] = '\0';
	close(fr);

	b = write(STDOUT_FILENO, buff, a);
	if (b < 0)
	{
		free(buff);
		return (0);
	}

	free(buff);
	return (b);
}
