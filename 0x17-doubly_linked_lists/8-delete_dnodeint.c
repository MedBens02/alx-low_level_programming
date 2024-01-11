#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a d list.
 *
 * @head: head of list
 * @index: index of node to delete
 *
 * Return: 1 if success, -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ptr, *tmp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	ptr = *head;

	for (i = 0; ptr != NULL && i < index - 1; i++)
		ptr = ptr->next;

	if (ptr == NULL || ptr->next == NULL)
		return (-1);

	tmp = ptr->next;
	ptr->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = ptr;
	free(tmp);

	return (1);
}
