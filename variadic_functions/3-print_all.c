#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints all the arguments based on the format
 * @format: the format string specifying the types of the arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *s, *separator = "";

	/* Initialize va_list to handle the variable arguments */
	va_start(args, format);

	/* Loop through each character in the format string */
	while (format && format[i])
	{
		/* Print argument based on format specifier */
		if (format[i] == 'c')
			printf("%s%c", separator, va_arg(args, int));
		else if (format[i] == 'i')
			printf("%s%d", separator, va_arg(args, int));
		else if (format[i] == 'f')
			printf("%s%f", separator, (float)va_arg(args, double));
		else if (format[i] == 's')
		{
			/* Handle strings, checking for NULL */
			s = va_arg(args, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", separator, s);
		}
		else
		{
			i++;
			continue;
		}

		separator = ", "; /* Add separator between arguments */
		i++;
	}

	/* Clean up the va_list */
	va_end(args);

	/* Print newline after all arguments */
	printf("\n");
}

