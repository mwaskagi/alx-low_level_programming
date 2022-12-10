#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - functions creates a file
 * @filename: file name
 * @text_content: text to be written in file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, n_write;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, o_RDWR | O_TRUNC | O_CREATE, 0600);
	if (fd == -1)
		return (-1);
	while (text_content[i] != '\n')
	{
		i++;
	}
	n_write = write(fd, text_content, i);
	if (n_write == -1)
		return (-1);
	return (1);
}
