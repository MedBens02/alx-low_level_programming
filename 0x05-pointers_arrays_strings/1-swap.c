#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: 1st num
 * @b: 2nd num
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
