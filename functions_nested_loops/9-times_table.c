#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
    int i, j, product;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            product = i * j;

            if (j == 0)
            {
                _putchar(product + '0');  /* Print the first number without comma */
            }
            else
            {
                _putchar(',');              /* Print a comma before the next number */
                _putchar(' ');              /* Print space after the comma */

                if (product < 10)
                {
                    _putchar(' ');          /* Print a space for single-digit products */
                }
                _putchar((product / 10) + '0'); /* Print the first digit if it's two digits */
                _putchar((product % 10) + '0'); /* Print the last digit of the product */
            }
        }
        _putchar('\n');                  /* New line after each row */
    }
}

