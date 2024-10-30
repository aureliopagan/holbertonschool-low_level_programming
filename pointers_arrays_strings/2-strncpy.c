#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: destination
 * @src: source
 * @n: maximum number variable 
 *
 * Return: A pointer to the resulting string dest
**/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* If src is shorter than n, fill the rest with null bytes */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

