#include "main.h"

/**
 * is_prime_number - checks if n is prime.
 *
 * @n: nmber.
 * @i: divisor.
 *
 * Return: 1 if prime, 0 if not.
 */

int prime(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime(n, 2));
}
/**
 * prime - finds if n is prime.
 *
 * @n: numebr.
 * @i: divisor.
 *
 * Return: is prime.
 */

int prime(int n, int i)
{
	if (i == n)
		return (1);
	else if (n % i == 0)
		return (0);

	return (prime(n, i + 1));
}
