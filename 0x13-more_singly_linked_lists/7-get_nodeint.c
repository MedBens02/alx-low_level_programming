#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node of a listint_t linked list.
 *
 * @head: head of list
 * @index: index of node
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	ptr = head;

	for (i = 0; i < index && ptr != NULL; i++)
		ptr = ptr->next;

	return (ptr);
}
