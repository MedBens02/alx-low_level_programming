#include "search_algos.h"

/**
 * print_array - Prints an array of ints
 * @array: The array
 * @size: Size of the array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers using
 * the Binary search algorithm.
 *
 * @array: The array to search in
 * @size: its size
 * @value: The value to search for
 *
 * Return: The index where found, or -1 if NULL or not found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m;

	if (!array)
		return (-1);

	while (l <= r)
	{
		m = l + (r - l) / 2;
		print_array(array + l, r - l + 1);

		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}

	return (-1);
}
