#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: int
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;
	int tmp;

	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
