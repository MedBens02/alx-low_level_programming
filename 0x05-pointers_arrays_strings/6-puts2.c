#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the
 * first character
 *
 * @str: input str
 */

void puts2(char *str)
{
	char *i = str;

	while (*i != '\0')
	{
		_putchar(*i);
		i += 2;
	}
	_putchar('\n');
}
