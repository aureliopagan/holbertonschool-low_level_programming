#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: pointer to the string to be converted.
 *
 * Return: the converted integer or 0 if no numbers are found.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	int started = 0;

	while (*s)  /* Iterate through the string */
	{
		if (*s == '-')  /* Handle negative sign */
			sign *= -1;

		else if (*s >= '0' && *s <= '9')  /* Check if character is a digit */
		{
			started = 1;  /* Start recording number */
			num = num * 10 + (*s - '0');  /* Build the number */
		}

		else if (started)  /* Break if a number has started */
			break;

		s++;  /* Move to the next character */
	}

	return (sign * num);  /* Return the number with its sign */
}

