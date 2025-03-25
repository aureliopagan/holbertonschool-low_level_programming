#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings, followed by a new line.
 * @separator: The string that will be printed between the strings.
 * @n: The number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	/* Initialize the va_list to handle the variable arguments */
	va_start(args, n);

	/* Loop through each argument and print the string */
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		/* Check if the string is NULL and print "(nil)" if so */
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		/* If a separator is provided and it's not the last string, print it */
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	/* Clean up the va_list after use */
	va_end(args);

	/* Print a newline character after printing all the strings */
	printf("\n");
}

