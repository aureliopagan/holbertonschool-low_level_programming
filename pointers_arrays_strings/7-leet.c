#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet speak)
 * @str: The string to be encoded
 *
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
	char *leet_chars = "43071"; /* Characters to replace with */
	char *normal_chars = "aeotlAEOTL"; /* Characters to be replaced */
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == normal_chars[j])
			{
				str[i] = leet_chars[j / 2]; /* Replace the character */
				break;
			}
		}
	}

	return (str);
}

