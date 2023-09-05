#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - function that reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytesRead, bytesWritten = 0;

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	buffer = (char *)malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	bytesRead = fread(buffer, sizeof(char), letters, file);

	if (bytesRead < 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	buffer[bytesRead] = '\0';

	write(STDOUT_FILENO, buffer, bytesRead);

	if (bytesWritten < 0 || (ssize_t)bytesWritten != bytesRead)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	fclose(file);
	free(buffer);
	return (bytesRead);
}
