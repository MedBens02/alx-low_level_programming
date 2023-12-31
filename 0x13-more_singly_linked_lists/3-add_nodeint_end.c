#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list.
 *
 * @head: head of list
 * @n: nbr to add
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	ptr = *head;

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = new;

	return (ptr);
}
