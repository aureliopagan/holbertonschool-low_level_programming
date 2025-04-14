#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index
 * @h: Double pointer to the head of the list
 * @idx: Index where the new node should be added
 * @n: Value to store in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *current = *h;
	unsigned int pos;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;

	if (idx == 0)
	{
		node->prev = NULL;
		node->next = *h;

		if (*h)
			(*h)->prev = node;

		*h = node;
		return (node);
	}

	for (pos = 0; pos < idx - 1 && current; pos++)
		current = current->next;

	if (!current)
	{
		free(node);
		return (NULL);
	}

	node->next = current->next;
	if (current->next)
		current->next->prev = node;

	current->next = node;
	node->prev = current;

	return (node);
}

