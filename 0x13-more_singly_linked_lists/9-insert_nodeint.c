#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: heas of list
 * @idx: index where to add a node
 * @n: data of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	ptr = *head;

	for (i = 0; i < idx - 1 && ptr != NULL; i++)
		ptr = ptr->next;

	if (ptr == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = ptr->next;
	ptr->next = new;

	return (new);
}
