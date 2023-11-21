#include "lists.h"

/**
 * print_listint - Prints all the elements of a list
 *
 * @h: ptr to head of the list
 *
 * Return: num of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nbr = 0;

	while (h != NULL)
	{
		nbr++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nbr);
}
