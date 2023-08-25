#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - Adds a new node at the end of a list_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: The address of the newly added node, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node;
	list_t *new_node;
	unsigned int n;

	new_node = *head;
	last_node = malloc(sizeof(list_t));

	if (last_node == NULL)
		return (NULL);

	n = 0;
	while (str[n] != '\0')
		n++;

	last_node->len = n;
	last_node->str = strdup(str);
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
		return (last_node);
	}

	while (new_node->next != NULL)
		new_node = new_node->next;

	new_node->next = last_node;

	return (last_node);
}
