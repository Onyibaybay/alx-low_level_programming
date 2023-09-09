#include "main.h"

/**
 * read_textfile - function that reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr, st;
	char *file;

	if (filename == NULL)
	{
		return (0);
	}
	st = open(filename, O_RDONLY);
	{

		if (st == -1)
		{
			return (0);
		}
		file = malloc(sizeof(char) * letters);
		if (file == NULL)
		{
			return (0);
		}
		rd = read(st, file, letters);
		wr = write(STDOUT_FILENO, file, rd);

	if (wr != rd || wr == -1)
	{
		return (0);
	}
	close(st);
	free(file);
	return (wr);
	}
}
