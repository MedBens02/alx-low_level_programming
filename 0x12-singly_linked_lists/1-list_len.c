#include "lists.h"

/**
 * list_len - Prints all the elements of a list
 *
 * @h: ptr to head of the list
 *
 * Return: num of nodes
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
