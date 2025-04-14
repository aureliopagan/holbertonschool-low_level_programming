#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be flipped
 *             to convert one number to another
 * @n: The initial number
 * @m: The target number
 *
 * Return: The number of bits that must be flipped to convert n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int flip_count = 0;

	while (diff)
	{
		flip_count += diff & 1;
		diff >>= 1;
	}

	return (flip_count);
}

