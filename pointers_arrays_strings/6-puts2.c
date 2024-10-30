#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: pointer to the string to print.
 *
 * Return: void
 */
void puts2(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')  /* Calculate the length of the string */
		len++;

	for (i = 0; i < len; i += 2)  /* Print every other character */
	{
		_putchar(str[i]);
	}
	_putchar('\n');  /* Print a new line at the end */
}

