#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: is the name of the file.
 * @text_content: is a NULL terminated string to add at the end of
 * the file
 *
 * Return: 1 on success, -1 on failure
 * Do not create the file if it does not exist
 * if filename is NULL return -1
 * if text_content is NULL do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions
 * to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
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
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		if (write(fd, text_content, text_len)  == -1)
		{
			return (-1);
		}
	}
	close(fd);

	return (1);
}
