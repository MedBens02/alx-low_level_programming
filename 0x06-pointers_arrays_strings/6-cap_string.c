#include "main.h"

/**
 * is_separator - checks if a char is separator
 *
 * @c: character to check
 *
 * Return: True or False
 */

int is_separator(char c)
{
	char sep[] = " \t\n,;.!?\"(){}";
	char *p = sep;

	while (*p != '\0')
	{
		if (c == *p)
			return (1);
		p++;
	}

	return (0);
}

/**
 * cap_string - capitalizes all words of a string.
 *
 * @str: string
 *
 * Return: modified str
 */

char *cap_string(char *str)
{
	int cap_next = 1;
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (cap_next && *ptr >= 97 && *ptr <= 122)
			*ptr -= 32;
		cap_next = is_separator(*ptr);
		ptr++;
	}
	return (str);
}
