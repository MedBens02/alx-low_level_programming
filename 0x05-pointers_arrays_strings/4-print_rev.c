#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: input
 */

void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
		end++;

	while (end > s)
	{
		end--;
		_putchar(*end + 0);
	}
	_putchar('\n');
}
