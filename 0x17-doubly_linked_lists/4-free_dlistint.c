#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->n);
		free(ptr);
	}
}
