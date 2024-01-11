#include "lists.h"

/**
 * get_dnodeint_at_index - finds the nth node of a dlistint_t list.
 * @head: head of list
 * @index: index of node
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i;

	ptr = head;

	for (i = 0; i < index && ptr != NULL; i++)
		ptr = ptr->next;

	return (ptr);
}
