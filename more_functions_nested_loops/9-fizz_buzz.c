#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - prints the FizzBuzz sequence from 1 to 100.
 *
 * Return: void
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)  /* Print a space after each number or word except the last one */
		{
			printf(" ");
		}
	}
	printf("\n");  /* Print a new line at the end */
}

