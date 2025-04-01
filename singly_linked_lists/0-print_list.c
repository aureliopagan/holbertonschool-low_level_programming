#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints each element of a singly linked list
 * @h: pointer to the head of the list
 *
 * Return: the total number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", h->len);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;
		count++;
	}

	return (count);
}

