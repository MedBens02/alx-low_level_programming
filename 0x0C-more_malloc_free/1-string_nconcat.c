#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: str 1
 * @s2: str 2
 * @n: n bytes of s2 to copy
 *
 * @Return: s1 + n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len++;

	p = malloc(len + n + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];

	for (i = 0; i < n; i++)
	{
		if (s2[i] == '\0')
			break;

		p[len + i] = s2[i];
	}
	p[len + n + 1] = '\0';

	return (p);
}
