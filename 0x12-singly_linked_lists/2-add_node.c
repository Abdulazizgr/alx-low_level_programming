#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_elem;
	int str_len = 0;

	new_elem = malloc(sizeof(list_t));
	if (new_elem == NULL)
	{
		free(new_elem);
		return (NULL);
	}

	while (str[str_len] != '\0')
		str_len++;

	new_elem->len = str_len;
	new_elem->str = strdup(str);
	new_elem->next = *head;
	*head = new_elem;

	return (*head);
}
