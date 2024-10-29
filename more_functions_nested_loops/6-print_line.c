#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times to print the character '_'.
 *
 * Return: void.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');  /* Print a newline if n is less than or equal to 0 */
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');  /* Print the character '_' */
	}
	_putchar('\n');  /* Print a newline after the line */
}

