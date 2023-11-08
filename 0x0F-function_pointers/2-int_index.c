#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 *
 * @array: array of ints
 * @size: nbr of elts in array
 * @cmp: ptr to fct to compare values.
 *
 * Return: index of the first elt for which the cmp function does not return 0
 * if no match or size <= 0 returns -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
