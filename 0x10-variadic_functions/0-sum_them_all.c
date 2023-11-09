#include "variadic_functions.h"

/**
 * sum_them_all - sums of all its parameters.
 *
 * @n: number of nums
 *
 * Return: The sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int S = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
		S += va_arg(nums, int);

	va_end(nums);
	return (S);
}
