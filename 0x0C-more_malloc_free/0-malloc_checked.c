#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b: size
 *
 * Return: ptr to the array or NULL.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
