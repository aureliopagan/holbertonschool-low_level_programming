#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_sign(10);   /* Test with a positive number */
	_putchar('\n');

	print_sign(0);    /* Test with zero */
	_putchar('\n');

	print_sign(-5);   /* Test with a negative number */
	_putchar('\n');

	return (0);
}

