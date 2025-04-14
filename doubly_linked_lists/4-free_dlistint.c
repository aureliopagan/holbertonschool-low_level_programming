#include "lists.h"

/**
 * free_dlistint - Frees all nodes of a doubly linked list
 * @head: Pointer to the head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	while (head)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}

