#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list.
 *
 * @head: head of list
 * @str: string to add
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *new;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	ptr = head;

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;

	return (ptr);
}
