#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at
 * @head: pointer to the head
 * @idx: index where the new node should be inserted
 * @n: value of the new node
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *cur;
	unsigned int k;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	cur = *head;
	k = 0;

	while (k < idx - 1 && cur != NULL)
	{
		cur = cur->next;
		k++;
	}

	if (cur == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = cur->next;
	cur->next = new_node;

	return (new_node);
}
