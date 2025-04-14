#include "main.h"

/**
 * get_bit - Retrieves the value of a bit at a specified index
 * @n: The number to extract the bit from
 * @index: The index of the bit to retrieve (starting from 0)
 *
 * Return: The bit value at the given index (0 or 1),
 *         or -1 if an error occurs (e.g., index out of range)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}

