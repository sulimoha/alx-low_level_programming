#include "main.h"
/**
 * main - a program that copies the content of a file to another file.
 * @ac: arguments count
 * @av: array of string arguments whoch represent file names
 *
 * Return: 0 on sucess
*/
int main(int ac, char **av)
{
	char buf[1024];
	int fd_file_from, fd_file_to;
	ssize_t readen, written;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_file_from = open(av[1], O_RDONLY);
	fd_file_to = open(av[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	if (fd_file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (fd_file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	do {
		readen = read(fd_file_from, buf, 1024);
		if (readen == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		written = write(fd_file_to, buf, readen);
		if (written == -1 || readen != written)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(fd_file_from);
			exit(99);
		}
	} while (readen);
	readen = close(fd_file_from);
	written = close(fd_file_to);
	if (readen || written)
	{
		if (readen)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_file_from);
		}
		if (written)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_file_to);
		}
		exit(100);
	}
	return (0);
}
