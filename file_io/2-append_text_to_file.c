#include "main.h"

/**
 * append_text_to_file - Appends text to the end of an existing file
 * @filename: The name of the file to append to
 * @text_content: A NULL-terminated string to append to the file
 *
 * Return: 1 on success, -1 on failure
 *         If filename is NULL, returns -1
 *         If text_content is NULL, nothing is appended, but returns 1
 *         If the file does not exist or cannot be written to, returns -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t written_bytes;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		written_bytes = write(file_descriptor, text_content, strlen(text_content));

		if (written_bytes == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);

	return (1);
}

