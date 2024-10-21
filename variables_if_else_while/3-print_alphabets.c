#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char lowercase = 'a';
    char uppercase = 'A';
    int i;

    /* Print lowercase letters */
    for (i = 0; i < 26; i++)
    {
        putchar(lowercase + i);
    }

    /* Print a newline */
    putchar('\n');

    /* Print uppercase letters */
    for (i = 0; i < 26; i++)
    {
        putchar(uppercase + i);
    }

    /* Print a newline */
    putchar('\n');

    return (0);
}

