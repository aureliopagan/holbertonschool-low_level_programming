#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The characters to match.
 *
 * Return: The number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	char *ptr;

	while (*s)
	{
		found = 0;  /* Reset found for each character in s */
		for (ptr = accept; *ptr; ptr++)
		{
			if (*s == *ptr)
			{
				found = 1;  /* Character found in accept */
				break;
			}
		}
		if (!found)
			break;  /* Stop if character not found in accept */
		count++;  /* Increment count if character is in accept */
		s++;  /* Move to the next character in s */
	}
	return (count);
}

