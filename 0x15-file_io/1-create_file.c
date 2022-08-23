#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: is the name of the file to create.
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int text_len = 0;

	if (!filename)
	{
		return (-1);
	}

	while (text_content[text_len])
	{
		text_len++;
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		if (write(fd, text_content, text_len) == -1)
		{
			return (-1);
		}
	}
	close(fd);

	return (1);
}
