#include "main.h"

/**
 * print_diagsums - the sum of the 2 diagonals of a square matrix of int.
 *
 * @a: array to work on.
 * @size: size of array.
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		s2 += a[size - i - 1];
		a += size;
	}
	printf("%u, ", s1);
	printf("%u\n", s2);
}
