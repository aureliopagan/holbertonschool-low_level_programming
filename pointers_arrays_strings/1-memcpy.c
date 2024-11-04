#include "main.h"

/**
 * _memcpy - Copies memory from src to dest.
 * @dest: Destination memory.
 * @src: Source memory.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

