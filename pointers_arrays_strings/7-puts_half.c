#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line.
 * @str: pointer to the string to print.
 *
 * Return: void
**/
void puts_half(char *str)
{
	int len = 0;
	int start;

	while (str[len] != '\0')  /* Calculate the length of the string */
	{
		len++;
	}

	if (len % 2 == 0)  /* If even, start from the halfway point */
	{
		start = len / 2;
	}
	else  /* If odd, start from the character after the halfway point */
	{
		start = (len - 1) / 2 + 1;
	}

	while (str[start] != '\0')  /* Print the second half of the string */
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');  /* Print a new line */
}

