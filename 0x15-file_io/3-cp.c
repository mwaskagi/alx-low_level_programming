#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Function allocates 1024 bytes
 * @file: name of buffer
 * Return: pointer to buffer
 */

char *create_buffer(char *file)
{
	char *b;

	b = malloc(sizeof(char) * 1024);

	if (b == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (b);
}

/**
 * close_file - Fucntion closes file descriptot
 * @fd: file descriptor
 */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function copies content of a file to another file
 * @argc: number of argument supplied
 * @argv: array pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int from, to, n_read, n_write;
	char *b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	b = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	n_read = read(from, b, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || n_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(b);
			exit(98);
		}

		n_write = write(to, b, n_read);
		if (to == -1 || n_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(b);
			exit(99);
		}

		n_read = read(from, b, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (n_read > 0);

	free(b);
	close_file(from);
	close_file(to);

	return (0);
}
