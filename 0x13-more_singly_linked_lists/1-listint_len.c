#include "lists.h"

/**
 * listint_len - Prints all the elements of a list
 *
 * @h: ptr to head of the list
 *
 * Return: num of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nbr = 0;

	while (h != NULL)
	{
		nbr++;
		h = h->next;
	}

	return (nbr);
}
