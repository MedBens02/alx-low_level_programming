#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator: the separator
 * @n: number of ints
 * @...: the ints to print
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	va_end(nums);
	printf("\n");
}
