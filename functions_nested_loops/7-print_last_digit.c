#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to get the last digit from
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;  /* Get the last digit */
	if (last_digit < 0)
	{
		last_digit = -last_digit;  /* Make it positive if negative */
	}
	_putchar(last_digit + '0');  /* Print the last digit as a character */
	return (last_digit);
}

