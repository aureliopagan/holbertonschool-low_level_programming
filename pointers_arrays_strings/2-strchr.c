#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search.
 * @c: The character to locate.
 *
 * Return: Pointer to the first occurrence of c, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')  /* Loop until the end of the string */
	{
		if (*s == c)  /* Check if the current character matches c */
		{
			return (s);  /* Return pointer to the found character */
		}
		s++;  /* Move to the next character */
	}

	/* Check for the null terminator */
	if (c == '\0')
	{
		return (s);  /* Return pointer to the null terminator */
	}

	return (NULL);  /* Character not found */
}

