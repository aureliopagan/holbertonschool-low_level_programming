#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Inserts a new node at the beginning of a doubly linked list
 * @head: Double pointer to the head node
 * @n: Data to insert in the new node
 *
 * Return: Pointer to the newly added node, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = *head;

	if (*head)
		(*head)->prev = node;

	*head = node;

	return (node);
}

