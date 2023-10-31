#include "main.h"

/**
 * str_concat - concatenates two strings.
 *
 * @s1: str 1
 * @s2: str 2
 *
 * Return: a ptr to new space in mem containing s1 followed by s2 and \0
 * return NULL if fail
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, l1 = 0, l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;

	p = malloc(1 + (sizeof(*p) * (l1 + l2)));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		p[i] = s1[i];
	for (i = 0; i <= l2; i++)
		p[l1+ i] = s2[i];

	return (p);
}
