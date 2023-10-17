#include "main.h"

/**
 * _atoi - convert a string to an integer.
 *
 * @s: str input
 *
 * Return: n
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int n = 0;

	while (*s == ' ' || *s == '+' || *s == '-' || (*s >= 9 && *s <= 13))
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		n = n * 10 + (*s - '0');
		s++;
	}
	n = n * sign;

	return (n);
}
