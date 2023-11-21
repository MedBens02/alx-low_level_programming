#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a list.
 *
 * @head: head of list
 * @index: index of node to delete
 *
 * Return: 1 if success, -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr, *tmp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
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
	free(tmp);

	return (1);
}
