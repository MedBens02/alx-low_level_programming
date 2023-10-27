#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @dest: target string.
 * @src: source str.
 * @n: number of bytes to copy.
 *
 * Return: ptr to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
