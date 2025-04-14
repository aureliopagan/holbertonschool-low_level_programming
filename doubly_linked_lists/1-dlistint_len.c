#include "lists.h"

/**
 * dlistint_len - Counts the nodes in a doubly linked list
 * @h: Pointer to the start of the list
 *
 * Return: Total number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t total_nodes = 0;

	while (h)
	{
		total_nodes++;
		h = h->next;
	}

	return (total_nodes);
}

