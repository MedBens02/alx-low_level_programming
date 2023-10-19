#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @str: string to modify
 *
 * Return: modified str
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if (*p >= 97 && *p <= 122)
			*p -= 32;
		p++;
	}

	return (str);
}
