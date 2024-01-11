#include "lists.h"

/**
 * dlistint_len - calculates len of a dl list
 * @h: ptr to head of the list
 * Return: len
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
