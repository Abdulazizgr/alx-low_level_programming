#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd_in, fd_out;
	int rd, wr;
	char buf[BUFSIZ];
	int ci, co;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_in = open(argv[1], O_RDONLY);
	if (fd_in < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_out = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_out < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_in);
		exit(99);
	}

	while ((rd = read(fd_in, buf, BUFSIZ)) > 0)
	{
		wr = write(fd_out, buf, rd);
		if (wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_in);
			close(fd_out);
			exit(99);
		}
	}

	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	ci = close(fd_in);
	co = close(fd_out);
	if (ci < 0 || co < 0)
	{
		if (ci < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_in);
		if (co < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_out);
		exit(100);
	}

	return (0);
}
