#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlist
 * @head: ptr to head
 * @n: data int
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
