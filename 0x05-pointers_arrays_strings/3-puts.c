#include "main.h"

/**
 * _puts -  prints a string, followed by a new line, to stdout.
 *
 * @str: string input
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str +  0);
		str++;
	}
	_putchar('\n');
}
