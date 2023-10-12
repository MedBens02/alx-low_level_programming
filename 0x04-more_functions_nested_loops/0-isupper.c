#include "main.h"

/**
 * _isupper - Fct that finds uppercase characters
 *
 * @c: input
 *
 * Return: 1 if c is upper, 0 otherwise
 */

int _isupper(int c);
{
	if (65 <= c && c <= 90)
		return(1);
	else
		return (0);
}
