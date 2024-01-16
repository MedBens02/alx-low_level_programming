#include "main.h"

/**
 * _isalpha - checks if c is in alpha
 *
 * @c: input for fct
 *
 * Return: returns 1 is in alpha otherwise 0
 */

int _isalpha(int c)
{
	if (c > 96 && c < 123)
		return (1);
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
