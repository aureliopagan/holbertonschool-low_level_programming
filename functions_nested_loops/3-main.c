#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int result;

	result = _islower('a');  /* Test with a lowercase letter */
	_putchar(result + '0');  /* Convert integer to character and print */
	_putchar('\n');

	result = _islower('Z');  /* Test with an uppercase letter */
	_putchar(result + '0');  /* Convert integer to character and print */
	_putchar('\n');

	result = _islower('1');  /* Test with a non-alphabetic character */
	_putchar(result + '0');  /* Convert integer to character and print */
	_putchar('\n');

	return (0);
}

