#include "main.h"

/**
 * read_textfile - Reads a text file and prints its contents
 * @filename: The name of the file to open and read from
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters it could read and print,
 *         or 0 if the file cannot be opened or read, or if there is an error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t read_bytes, written_bytes;
	char *buffer;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(file_descriptor);
		return (0);
	}

	read_bytes = read(file_descriptor, buffer, letters);
	if (read_bytes == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (written_bytes == -1 || written_bytes != read_bytes)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (written_bytes);
}

