#include "lists.h"

/**
 * print_dlistint - Prints all elements of a doubly linked list
 * @head: Pointer to the start of the doubly linked list
 *
 * Return: The total number of nodes in the list
 *
 */

size_t print_dlistint(const dlistint_t *head)
{
	size_t node_count = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		node_count++;
		head = head->next;
	}

	return (node_count);
}

