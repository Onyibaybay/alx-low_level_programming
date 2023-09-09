#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - functions that create a file with the specified permissions
 * @filename: name of to create
 * @text_content: content writed in the file.
 *
 * Returns: 1 on success, -1 on failure.file cannot be created, written,
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	size_t nletters;
	ssize_t bytes_written;
	int rwr;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
		size_t nletters = strlen(text_content);
	bytes_written = write(file_descriptor, text_content, nletters);

	if (text_content != NULL)
	{
		rwr = write(file_descriptor, text_content, nletters);

		if (rwr == -1)
			return (-1);
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
