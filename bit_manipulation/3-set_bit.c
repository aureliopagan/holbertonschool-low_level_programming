#include "main.h"

/**
 * set_bit - Sets a bit at a specific index to 1
 * @n: Pointer to the number where the bit will be set
 * @index: The index (starting from 0) of the bit to set
 *
 * Return: 1 if successful, or -1 if an error occurs (e.g., invalid index)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}

	*n |= (1UL << index);

	return (1);
}

