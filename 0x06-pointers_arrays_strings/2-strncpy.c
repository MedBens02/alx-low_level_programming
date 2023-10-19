#include "main.h"

/**
 * _strncpy - copies a string.
 *
 * @dest: result
 * @src: source
 * @n: number of elts to copy
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (start);
}
