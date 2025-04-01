#include <stdlib.h>
#include "lists.h"

/**
 * free_list - deallocates memory for a linked list
 * @head: pointer to the first node in the list
 *
 * Description: Iterates through the list, freeing each node and its data.
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while (head != NULL)
	{
		current_node = head->next;

		free(head->str);

		free(head);

		head = current_node;
	}
}

