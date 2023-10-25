#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 *
 * @n: number.
 *
 * Return: sqrt(n).
 */
int _sqrt(int n, int i);
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return _sqrt(n, 1);
}

int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);

	return (_sqrt(n, i + 1));
}
