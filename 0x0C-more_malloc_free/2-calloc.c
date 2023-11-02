#include "main.h"

/**
 * _calloc - Allocates memory for an array, using malloc.
 *
 * @nmemb: nbr of elts.
 * @size: size of type
 *
 * Return: ptr to memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; p[i] != '\0'; i++)
		p[i] = 0;

	return (p);
}
