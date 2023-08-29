#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node
 * @head: pointer to the head
 * @index: index of the node
 *
 * Return: 1 if succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur, *a;
	unsigned int k;

	if (head == NULL || *head == NULL)
		return (-1);

	cur = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(cur);
		return (1);
	}

	for (k = 0; k < index - 1; k++)
	{
		if (cur->next == NULL)
			return (-1);

		cur = cur->next;
	}

	a = cur->next;

	if (a == NULL)
		return (-1);

	cur->next = a->next;
	free(a);

	return (1);
}
