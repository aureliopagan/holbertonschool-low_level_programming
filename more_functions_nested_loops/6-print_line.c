#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times to print the character '_'.
 *
 * Return: void
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
