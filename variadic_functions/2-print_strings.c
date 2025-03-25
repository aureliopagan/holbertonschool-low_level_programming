#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - A function that prints a series of strings,
 * followed by a newline.
 * @separator: The string to be printed between each string.
 * @n: The number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	/* Initialize va_list to start processing the variable arguments */
	va_start(args, n);

	/* Loop through each string argument and print it */
	for (i = 0; i < n; i++)
	{
		/* Retrieve the next string argument */
		str = va_arg(args, char *);

		/* Check if the string is NULL, and print "(nil)" if it is */
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		/* If a separator is provided and it's not the last string, print 
		 * the separator.
		 */
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	/* Clean up after using va_list */
	va_end(args);

	/* Print a newline character after all the strings are printed */
	printf("\n");
}

