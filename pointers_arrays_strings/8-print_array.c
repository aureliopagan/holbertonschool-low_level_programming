#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers.
 * @a: pointer to the array of integers.
 * @n: number of elements to be printed.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");  /* Print comma and space if not the last element */
		}
	}
	printf("\n");  /* Print new line at the end */
}

