#include "lists.h"

/**
 * list_len - calculates the total number of elements in a linked list
 * @h: pointer to the first node of the list
 *
 * Return: the total count of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}

