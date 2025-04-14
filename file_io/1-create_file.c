#include "main.h"

/**
 * create_file - Creates a file and writes text content to it
 * @filename: The name of the file to be created
 * @text_content: A NULL-terminated string to write into the file
 *
 * Return: 1 on success, -1 on failure
 *         If filename is NULL, returns -1
 *         If text_content is NULL, creates an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t written_bytes;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (!text_content)
	{
		close(file_descriptor);
		return (1);
	}

	written_bytes = write(file_descriptor, text_content, strlen(text_content));
	if (written_bytes == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);

	return (1);
}

