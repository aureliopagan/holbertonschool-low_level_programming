#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The characters to match.
 *
 * Return: Pointer to the first occurrence of any character from accept in s,
 *         or NULL if none is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	while (*s)  /* Loop through each character in s */
	{
		for (ptr = accept; *ptr; ptr++)  /* Check each character in accept */
		{
			if (*s == *ptr)  /* If a match is found */
			{
				return (s);  /* Return pointer to the matched character in s */
			}
		}
		s++;  /* Move to the next character in s */
	}

	return (NULL);  /* Return NULL if no matches are found */
}

