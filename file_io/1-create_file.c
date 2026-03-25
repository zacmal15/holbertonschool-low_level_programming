#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates file and writes text content to it
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to file
 *
 * Return: 1 on success, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (len > 0)
	{
		bytes_written = write(fd, text_content, len);
		if (bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
