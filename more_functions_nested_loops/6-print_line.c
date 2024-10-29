#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times to print the character '_'.
 *
 * Description: This function prints the character '_' to the terminal
 *              for a given number of times specified by the parameter
 *              'n'. If 'n' is less than or equal to 0, nothing is printed.
**/



void print_line(int n)
{
    int i;

    if (n <= 0)
    {
        _putchar ('\n');
        return;
    }

    for (i = 0; i < n; i++)
    {
        putchar('_');
    }
    _putchar('\n');
}
