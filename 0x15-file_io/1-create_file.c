#include "main.h"

/**
 * create_file - create a file and write in it
 * @filename:file to be created
 * @text_content: content of the file created
 *
 * Return: 1 or -1;
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; )
			len++;
		wr = write(fd, text_content, len);
	}
	if (wr == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
