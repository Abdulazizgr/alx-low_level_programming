#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
 listint_t *p = NULL;
 listint_t *nx = NULL;

 while (*head)
 {
 nx = (*head)->next;
 (*head)->next = p;
 p = *head;
 *head = nx;
 }

 *head = p;

 return (*head);
}
