#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 *           which contains a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL
 *         or if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	dup_str = (char *)malloc((len + 1) * sizeof(char));

	if (dup_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dup_str[i] = str[i];
	}

	dup_str[len] = '\0';

	return (dup_str);
}
