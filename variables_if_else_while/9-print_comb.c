#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');  /* Print the digit */

		if (i < 9)  /* Check if it's not the last number */
		{
			putchar(',');  /* Print the comma */
			putchar(' ');  /* Print the space */
		}
	}

	putchar('\n');  /* Print a newline */

	return (0);
}

