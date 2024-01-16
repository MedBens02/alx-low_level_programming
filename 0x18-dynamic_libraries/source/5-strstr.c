#include "main.h"

/**
 * _strstr - locates a substring.
 *
 * @haystack: str to search.
 * @needle: substr to find.
 *
 * Return: ptr to beginning of the located substring
 * or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] == haystack[i + j]; j++)
		{
			if (needle[j] && (needle[j] != haystack[i + j]))
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
