#include "lists.h"

/**
 * sum_dlistint - sums the data of a list
 * @head: head of list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int S = 0;
	dlistint_t *ptr;

	ptr = head;

	while (ptr != NULL)
	{
		S += ptr->n;
		ptr = ptr->next;
	}
	return (S);
}
