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
	int i;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
		p[i] = min++;

	p[i] = '\0';

	return (p);
}
