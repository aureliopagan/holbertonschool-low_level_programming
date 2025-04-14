#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer
 * @b: Pointer to a string of 0s and 1s
 *
 * Return: Converted number, or 0 if input is invalid
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		num = num << 1;

		if (*b == '1')
			num |= 1;

		b++;
	}

	return (num);
}

