#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet speak)
 * @str: The string to be encoded
 *
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char normal_chars[] = "aeotlAEOTL"; /* Characters to be replaced */
	char leet_chars[] = "43071"; /* Characters to replace with */

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == normal_chars[j])
			{
				str[i] = leet_chars[j / 2]; /* Replace with leet character */
				break;
			}
		}
	}

	return (str);  /* Parentheses around return value */
}

