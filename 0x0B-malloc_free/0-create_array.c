#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of array
 * @c: char
 *
 * Return: Null is size is 0, ptr to array if fail.
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	int i;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(*p) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
