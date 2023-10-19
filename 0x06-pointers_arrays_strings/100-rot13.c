#include "main.h"

/**
 * leet - encodes a string with ROT13.
 *
 * @str: string input
 *
 * Return: coded string
 */

char *rot13(char *str)
{
	char *p = str;
	char *chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*p != '\0')
	{
		char *check = chars;
		char *flip = rot;

		while (*check != '\0')
		{
			if (*p == *check)
			{
				*p = *flip;
				break;
			}
			check++;
			flip++;
		}
		p++;
	}
	return (str);
}
