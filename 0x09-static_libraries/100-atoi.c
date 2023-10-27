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

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			n = n * 10 + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);
	n = n * sign;

	return (n);
}
