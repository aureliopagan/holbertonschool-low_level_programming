#include "lists.h"

/**
 * add_dnodeint_end - Appends a new node to the end of a doubly linked list
 * @head: Double pointer to the head of the list
 * @n: Integer value to store in the new node
 *
 * Return: Address of the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *current;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	current = *head;
	while (current->next)
		current = current->next;

	current->next = node;
	node->prev = current;

	return (node);
}

