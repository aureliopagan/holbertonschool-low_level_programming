#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_last_digit(1234);   /* Test with a positive number */
	_putchar('\n');

	print_last_digit(-567);   /* Test with a negative number */
	_putchar('\n');

	print_last_digit(0);      /* Test with zero */
	_putchar('\n');

	return (0);
}

