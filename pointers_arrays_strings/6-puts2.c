#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: pointer to the string to print.
 *
 * Return: void
**/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)  /* Iterate through the string */
	{
		_putchar(str[i]);  /* Print every other character */
	}
	_putchar('\n');  /* Print a new line */
}

