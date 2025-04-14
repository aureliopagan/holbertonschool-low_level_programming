#include "lists.h"

/**
 * sum_dlistint - Calculates the total sum of all node values in the list
 * @head: Pointer to the head of the doubly linked list
 *
 * Return: Sum of all node data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}

