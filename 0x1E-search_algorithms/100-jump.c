#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of ints
 * using the Jump search algorithm.
 *
 * @array: The array to search in
 * @size: its size
 * @value: The value to search for
 *
 * Return: First index where value is found, or -1 if NULL or not found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, last;
	size_t i, r, l;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);
	last = 0;

	while (last < size && array[last] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", last, array[last]);
		last += jump;
		if (last >= size || array[last] > value)
			break;
	}

	r = last < size ? last : size - 1;
	l = (last >= jump) ? (last - jump) : 0;

	printf("Value found between indexes [%lu] and [%lu]\n", l, r);
	for (i = l; i <= r && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
