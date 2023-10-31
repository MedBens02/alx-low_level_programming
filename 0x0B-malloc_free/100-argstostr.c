#include "main.h"

/**
 * _strlen - calculates a str lenght.
 *
 * @s: str
 *
 * Return: len of str
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: num of args
 * @av: vec args
 *
 * Return: ptr to result
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, p_len = 0, p_i = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
			p_len += (1 +  _strlen(av[i]));
	}

	p = malloc(sizeof(*p) * p_len + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			for (j = 0; av[i][j] != '\0'; j++, p_i++)
				p[p_i] = av[i][j];

			p[p_i] = '\n';
			p_i++;
		}
	}

	p[p_i] = '\0';

	return (p);
}
