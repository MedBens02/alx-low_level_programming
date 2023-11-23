#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another.
 *
 * @n: num 1
 * @m: num 2
 *
 * Return: num of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbr = 0;
	unsigned long int xor = n ^ m;

	while (xor > 0)
	{
		nbr += xor & 1;
		xor = xor >> 1;
	}
	return (nbr);
}
