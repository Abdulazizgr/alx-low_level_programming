#include "lists.h"

/*
 * add_nodeint_end - Adds a new node at the end of a lstint_t list
 *
 * @head: Pointer to the head 
 * @n: Value to be assigned to the new node
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *a = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	while (a != NULL)
	{
		a = a->next;
	}

	a->next = new_node;
	return (new_node);
}
