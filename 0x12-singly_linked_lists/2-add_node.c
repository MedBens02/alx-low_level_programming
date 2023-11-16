#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *
 * @head: ptr to head
 * @str: str to put in list_t str
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
