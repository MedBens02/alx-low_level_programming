#include "main.h"

/**
 * _islower - Checks for lowercase ch
 *
 * @c: fct input
 *
 * Return: returns 1 if c is lc otherwise always 0 (Success)
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}
