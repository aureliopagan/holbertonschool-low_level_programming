#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers separated by a specified separator
 * @n: The number of integers provided to the function
 * @separator: The string that will be printed between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	/* Initialize va_list to access the arguments */
	va_start(args, n);

	/* Iterate through each argument */
	for (i = 0; i < n; i++)
	{
		/* Print the current number */
		printf("%d", va_arg(args, int));

		/* If a separator is provided and it's not the last number, print it */
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	/* End the va_list processing */
	va_end(args);

	/* Output a newline character after printing all numbers */
	printf("\n");
}

