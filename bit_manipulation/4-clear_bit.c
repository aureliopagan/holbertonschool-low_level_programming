#include "main.h"

/**
 * clear_bit - Clears (sets to 0) a bit at a specified index
 * @n: Pointer to the number to modify
 * @index: The index (starting from 0) of the bit to clear
 *
 * Return: 1 if the bit was successfully cleared, or -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}

	*n &= ~(1UL << index);

	return (1);
}

