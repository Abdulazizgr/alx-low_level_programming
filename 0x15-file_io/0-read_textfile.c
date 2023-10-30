#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: the name of the file to be read
 * @letters: the number of letters to read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int rd, wr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	rd = read(fd, buf, letters);
	if (rd < 0)
	{
		free(buf);
		return (0);
	}

	buf[rd] = '\0';
	close(fd);

	wr = write(STDOUT_FILENO, buf, rd);
	if (wr < 0)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (wr);
}
