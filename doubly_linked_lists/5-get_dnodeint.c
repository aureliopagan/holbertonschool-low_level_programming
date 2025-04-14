#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the node at a specific index
 * @head: Pointer to the start of the doubly linked list
 * @index: Position of the node to retrieve (starting from 0)
 *
 * Return: Pointer to the node at the given index, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}

	return (NULL);
}

