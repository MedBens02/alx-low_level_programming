#include "main.h"

/**
 * leet - encodes a string into 1337.
 *
 * @str: string input
 *
 * Return: coded string
 */

char *leet(char *str)
{
	char *p = str;
	char *chars = "AaEeOoTtLl";
	char *codes = "4433007711";

	while (*p != '\0')
	{
		char *check = chars;
		char *flip = codes;

		while (*check != '\0')
		{
			if (*p == *check)
			{
				*p = *check;
				break;
			}
			check++;
			flip++;
		}
		p++;
	}
	return (str);
}
