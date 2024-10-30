
#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line.
 * @s: pointer to the string to print in reverse.
 *
 * Return: void
**/
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')  /* Calculate the length of the string */
	{
		len++;
	}

	for (len--; len >= 0; len--)  /* Print the string in reverse */
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}

