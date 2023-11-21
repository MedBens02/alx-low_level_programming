#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 *
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nbr;
	const listint_t *printer, *loop_check;

	if (head == NULL)
		exit(98);

	printer = head;
	loop_check = head;

	while (printer != NULL && printer->next != NULL)
	{
		printf("[%p] %d\n", (void *)printer, printer->n);

		nbr++;

		printer = printer->next;
		loop_check = loop_check->next->next;

		if (printer == loop_check)
		{
			printf("-> [%p] %d\n", (void *)printer, printer->n);
			exit(98);
		}
	}
	return (nbr);
}
