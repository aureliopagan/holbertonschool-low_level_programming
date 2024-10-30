#include "main.h"
/**
 * puts2 - function name 
 *
 *@str: variable that points where to print
 *
 * Return: void
 **/

void puts2(char *str)
{
	int len = 0, i;

	if (len != 8)
	{
		while (str[len] != '\0')
		len++;

		for (i = 0; i < len; i += 2)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
