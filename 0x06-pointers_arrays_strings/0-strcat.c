#include "main.h"

/**
 * _strcat - concatenates two strings.
 *
 * @dest: result
 * @src: source
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char *end = dest;

	while (*end != '\0')
		end++;
	while (*src != '\0')
	{
		*end = *src;
		end++;
		src++;
	}

	*end = '\0';
	return (dest);
}
