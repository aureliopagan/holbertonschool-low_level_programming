#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* Print lowercase letters */
	for (i = 0; i < 26; i++)
	{
		putchar('a' + i);
	}

	/* Print uppercase letters */
	for (i = 0; i < 26; i++)
	{
		putchar('A' + i);
	}

	putchar('\n');  /* Print a newline */

	return (0);
}

