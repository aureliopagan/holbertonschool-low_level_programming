#include "main.h"

/**
 * print_binary - Outputs the binary form of a given number
 * @n: The number to be converted and printed in binary
 */
void print_binary(unsigned long int n)
{
	int started = 0;
	unsigned long int bit_mask = 1UL << (sizeof(n) * 8 - 1);

	while (bit_mask)
	{
		if (n & bit_mask)
		{
			putchar('1');
			started = 1;
		}
		else if (started)
		{
			putchar('0');
		}
		bit_mask >>= 1;
	}

	if (!started)
		putchar('0');
}

