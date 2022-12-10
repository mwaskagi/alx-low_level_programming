#include  <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - function that reads a text and prints
 * it to the POSIX standard output.
 * @filename: file
 * @letters: number of letters to read and print
 * Return: actual number of letters it could read
 * and print, if file cannot be opend or read, or
 * file name is null, or write fails or doesn't write
 * the expected amount of bytes to
 * return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int  fd, n_read, n_write;
	char *s;

	if (filename == NULL)
		return (0);

	s = malloc(letters * sizeof(char) + 1);
	if (!s)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(s);
		return (0);
	}
	n_read = read(fd, s, letters);
	if (n_read == -1)
	{
		free(s);
		return (0);
	}
	n_write = write(STDOUT_FILENO, s, n_read);
	close(fd);
	free(s);
	if (n_read == n_write)
		return (n_write);
	return (0);
}
