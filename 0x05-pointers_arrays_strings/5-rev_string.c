#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: string input
 */

void rev_string(char *s)
{
	char tmp, *st = s, *end = s;

	while (*end != '\0')
		end++;
	end--;

	while (st < end)
	{
		tmp = *st;
		*st = *end;
		*end = tmp;
		st++;
		end--;
	}
}
