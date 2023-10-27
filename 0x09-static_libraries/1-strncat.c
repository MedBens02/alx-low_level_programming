#include "main.h"

/**
 * _strncat - concatenates two strings.
 *
 * @dest: result
 * @src: source
 * @n: bytes from src
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *end = dest;

	while (*end != '\0')
		end++;
	while (*src != '\0' && n > 0)
	{
		*end = *src;
		end++;
		src++;
		n--;
	}
	*end = '\0';
	return (dest);
}
