#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: str separator
 * @n: number of strs
 * @...: strs
 *
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	const char *str;
	unsigned int i;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strs, const char *);
		printf("%s", str ? str : "(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
}
