#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads a rext file to
 *     print to Standard Output
 * @filename: text file to be read
 * @letters: num of letters to be read
 *
 * Return: w - the actual num of bytes that are read & printed
 *    or 0 for function fail
 *    or if filename is Null
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
		return (w);
}
