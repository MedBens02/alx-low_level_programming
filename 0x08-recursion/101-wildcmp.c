#include "main.h"

/**
 * wildcmp - Compares two strs considering * as a wildcard.
 * @s1: first str.
 * @s2: second str with * as a wildcard.
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	else if (*s2 == '*')
	{
		if (*s1 != '\0')
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

		return (wildcmp(s1, s2 + 1));
	}
	else if (*s1 == '\0' || *s1 != *s2)
		return (0);

	return (wildcmp(s1 + 1, s2 + 1));
}
