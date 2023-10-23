#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 * @s: string.
 * @c: char to locate.
 *
 * Return: pointer to the first occurrence of the character c in s
 * and NULL if not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			break;
		s++;
	}

	if (*s == '\0')
		return (0);

	return (s);
}
