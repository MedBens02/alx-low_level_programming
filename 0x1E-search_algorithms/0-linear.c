#include "search_algos.h"

/**
 * linear_search  - searches for a value in an array of integers
 * using the Linear search algorithm
 *
 * @array: array to search in
 * @size: its size
 * @value: int to search for
 *
 * Return: -1 if NULL or mot present, first index of value
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
