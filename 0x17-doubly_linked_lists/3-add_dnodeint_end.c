#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlist.
 * @head: head of list
 * @n: data int
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;

	new->prev = tmp;
	tmp->next = new;

	return (new);
	
