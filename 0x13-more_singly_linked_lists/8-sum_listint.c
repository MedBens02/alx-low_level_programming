#include "lists.h"

/**
 * sum_listint - sums the data of a list
 *
 * @head: head of list
 *
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	unsigned int S = 0;
	listint_t *ptr;

	ptr = head;

	while (ptr != NULL)
	{
		S += ptr->n;
		ptr = ptr->next;
	}
	return (S);
}
