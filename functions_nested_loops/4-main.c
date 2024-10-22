#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int result;

	result = _isalpha('a');  /* Test with a lowercase letter */
	_putchar(result + '0');  /* Convert integer to character and print */
	_putchar('\n');

	result = _isalpha('Z');  /* Test with an uppercase letter */
	_putchar(result + '0');  /* Convert integer to character and print */
	_putchar('\n');

	result = _isalpha('1');  /* Test with a non-alphabetic character */
	_putchar(result + '0');  /* Convert integer to character and print */
	_putchar('\n');

	result = _isalpha('#');  /* Test with a special character */
	_putchar(result + '0');  /* Convert integer to character and print */
	_putchar('\n');

	return (0);
}

