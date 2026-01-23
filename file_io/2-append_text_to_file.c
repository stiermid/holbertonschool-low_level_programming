#include "main.h"

/**
 * append_text_to_file - adds text to the end of file
 * @filename: name of the file
 * @text_content: content to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	while (text_content[len] != '\0')
		len++;

	w = write(fd, text_content, len);
	if (w == -1 || w != len)
	{
		close(fd);
		return(-1);
	}

	close(fd);
	return (1);
}

