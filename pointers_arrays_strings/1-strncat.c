#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to use from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/* Move to the end of dest */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Append up to n bytes from src to dest */
	while (n > 0 && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	*ptr = '\0';  /* Add null terminator */
	return (dest);
}

