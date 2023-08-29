#include "lists.h"

/**
 * sum_listint - the sum of all the data
 * @head: pointer to the head
 *
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
