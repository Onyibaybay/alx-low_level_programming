#include "main.h"

/**
 * read_textfile - function that reads a text file and prints to stdoutput
 * @filename: read text file.
 * @letters: number of letter
 * Return: if filename null return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);
	if ((nrd && nwr == -1) || nrd != nwr)
		return (0);

	close(fd);
	free(buf);
	return (nwr);
}

