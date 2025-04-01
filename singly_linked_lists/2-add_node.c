#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node to the beginning of a linked list
 * @head: pointer to the first node in the list
 * @str: string to duplicate in the new node
 *
 * Return: pointer to the newly added node, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = 0;
	while (str[new_node->len] != '\0')
	{
		new_node->len++;
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

