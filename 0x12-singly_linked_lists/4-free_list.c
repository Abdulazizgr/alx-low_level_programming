#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: A pointer to the head of the list.
 */
void free_list(list_t *head)
{
	list_t *curr, *n;

	curr = head;
	while (curr != NULL)
	{
		n = curr;
		curr = curr->next;
		free(n->str);
		free(n);
	}
}
