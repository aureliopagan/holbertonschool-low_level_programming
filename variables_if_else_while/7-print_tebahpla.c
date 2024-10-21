#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar('a' + i);  /* Print letters from 'z' to 'a' */
	}

	putchar('\n');  /* Print a newline */

	return (0);
}

