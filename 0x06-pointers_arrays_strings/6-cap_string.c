#include "main.h"
#include <stdbool.h>

/**
 * is_separator - checks if a char is separator
 *
 * @c: character to check
 *
 * Return: True or False
 */

bool is_separator(char c)
{
	char sep[] = " \t\n,;.!?\"(){}";
	char *p = sep;

	while (*p != '\0')
	{
		if (c == *p)
			return true;
		p++;
	}

	return false;
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
	bool cap_next = true;
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (cap_next && *ptr >= 97 && *ptr <= 122)
			*ptr -= 32;
		cap_next = is_separator(*ptr);
		ptr++;
	}
	return str;
}
