#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b: size
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		return (98);
}
