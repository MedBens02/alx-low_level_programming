#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: pointer to memory.
 * @b: cst byte.
 * @n: number of bytes to modify.
 *
 * Return: pointer to memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (s);
}
