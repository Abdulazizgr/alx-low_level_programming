#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to the first node
 * @index: index of the node
 *
 * Return: pointer to the nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	if (head == NULL)
		return (NULL);

	for (k = 0; k < index; k++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	return (head);
}
