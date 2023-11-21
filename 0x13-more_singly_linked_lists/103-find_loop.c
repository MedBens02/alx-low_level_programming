#include "lists.h"

/**
 * find_listint_loop - Finds the start of a loop in a linked list
 *
 * @head: Pointer to the head of the list
 *
 * Return: Address of the node where the loop starts, or NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr1, *ptr2;

	if (head == NULL)
		return (NULL);

	ptr2 = head->next;

	while (ptr2 != NULL)
	{
		if (ptr2 = ptr2->next)
			return(ptr2);
		for (ptr1 = head; ptr1 != ptr2; ptr1 = ptr1->next)
			if (ptr1 == ptr2->next)
				return(ptr2->next);
		ptr2 = ptr2->next;
	}
	return (NULL);
}
