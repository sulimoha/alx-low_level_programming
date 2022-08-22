#include "main.h"
#include "_putchar.c"
/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: the file name to be read
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	size_t i = 0;
	char *buf;

	buf = malloc(letters * sizeof(size_t));
	if (buf == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	read(fd, buf, letters);
	close(fd);
	for (i = 0; i < letters; i++)
	{
		_putchar(buf[i]);
	}
	_putchar('\0');
	return (i);
}
