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
	size_t n = 0;

	while (h != NULL)
	{
		n++;

		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
	}

	return (n);
}
