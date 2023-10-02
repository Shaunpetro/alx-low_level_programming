#include "main.h"

/**
 * create_buffer - allocates 1024 bytes for buffer
 * @file: name of file buffer thats storing cahrs for
 *
 * Return: ptr to newly allocated buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"ERROR: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - close file descriptors
 * @fd: the file descriptors to be closed
 */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "ERROR: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - func to cp the contents of a file to another file
 * @argc: num of arguments supplied to the prog
 * @argv: arr of ptr to the arguments
 *
 * Return:
 *         0 on success, else
 *         exit code 97: if arg count incorrect
 *         exit code 98: if file_from doesnt exist
 *         exit code 99: if file_to cant be created or written
 *         exit code 100: file_to or dile_from can't close
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "USAGE: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"ERROR: Can't read file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"ERROR: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
