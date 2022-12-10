#include "main.h"

/**
 * append_text_to_file - function appends test at the end
 * of a file
 * @filename: file name
 * @text_content: string to add to file
 * Return: file name is null or function fails or file
 * doesn't exist, or user lacks write permission return -1
 * else return 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n_write, i= 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	n_write = write(fd, text_content, i);

	if (fd == -1 || n_write == -1)
		return (-1);

	close(fd);
	return (1);
}
