#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dl list
 * @h: ptr to head of the list
 * Return: num of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n)
}
