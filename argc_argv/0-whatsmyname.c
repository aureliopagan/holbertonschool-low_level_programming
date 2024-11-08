#include "main.h"
#include <unistd.h>

/**
 * main - prints the name of the program followed by a new line.
 * @argc: the argument count.
 * @argv: the argument vector (array of strings).
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	/* Declare variables at the beginning of the function */
	int i;

	(void)argc;  /* Explicitly mark argc as unused to avoid the warning */

	/* Print the program name */
	for (i = 0; argv[0][i] != '\0'; i++)
	{
		_putchar(argv[0][i]);
	}

	_putchar('\n');  /* Print a new line */
	return (0);
}

/**
 * _putchar - writes a character to stdout.
 * @c: the character to print.
 *
 * Return: 1 on success, -1 on error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

