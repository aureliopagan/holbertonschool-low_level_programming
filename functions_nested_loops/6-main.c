#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int result;

	result = _abs(10);   /* Test with a positive number */
	_putchar(result + '0');  /* Print absolute value */
	_putchar('\n');

	result = _abs(-5);   /* Test with a negative number */
	_putchar(result + '0');  /* Print absolute value */
	_putchar('\n');

	result = _abs(0);    /* Test with zero */
	_putchar(result + '0');  /* Print absolute value */
	_putchar('\n');

	return (0);
}

