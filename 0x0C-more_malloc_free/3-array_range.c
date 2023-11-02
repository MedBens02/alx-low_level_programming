#include "main.h"

/**
 * array_range - creates an array of integers.
 *
 * @min: min int
 * @max: max int
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p;
	int i, range;

	if (min > max)
		return (NULL);

	range = max - min + 1;
	p = malloc(range * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
		p[i] = min++;

	return (p);
}
