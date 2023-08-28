#include "lists.h"

/**
 * listint_len - Returns the number of elements in the linked list.
 *
 * @h: Pointer to the head.
 * Return: The number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
size_t n = 0;

while (h != NULL)
{
n++;
h = h->next;
}
return (n);
}

