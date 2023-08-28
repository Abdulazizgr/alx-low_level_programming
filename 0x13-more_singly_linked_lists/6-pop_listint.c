#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Double pointer to the head of the linked list.
 *
 * Return: The head node's data (n), or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *an;

	if (head == NULL || *head == NULL)
		return (0);

	an = *head;
	*head = (*head)->next;
	n = an->n;
	free(an;

	return (n);
}
