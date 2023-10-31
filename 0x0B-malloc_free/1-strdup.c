#include "main.h"

/**
 * _strdup - allocates a new space in memory, which ontains a copy of
 * the string given as parameter.
 *
 * @str: string.
 *
 * Return: ptr to the space, NULL if str = NULL or insufficient memory.
 */

char *_strdup(char *str)
{
	char *p;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	p = malloc(sizeof(*p) * (len + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		p[i] = str[i];

	return (p);
}
