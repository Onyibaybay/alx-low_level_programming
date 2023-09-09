#include "main.h"

/**
 * create_file - functions that create a file with the specified permissions
 * @filename: name of to create
 * @text_content: content writed in the file.
 *
 * Return: 1 on success, -1 on failure.file cannot be created, written,
 */

int create_file(const char *filename, char *text_content)
{
	int temp, store, i, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	store = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (store == -1)
	{
		return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
	{
		length++;
	}
	temp = write(store, text_content, length);

	if (temp == -1)
	{
		return (-1);
	}
	close(store);
	return (1);
}
