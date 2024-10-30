#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest.
 * @dest: pointer to the destination buffer.
 * @src: pointer to the source string.
 *
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];  /* Copy each character */
	}
	dest[i] = '\0';  /* Null-terminate the destination string */

	return (dest);  /* Return the pointer to dest */
}

