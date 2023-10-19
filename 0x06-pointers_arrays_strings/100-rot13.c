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

	while (*str != '\0')
	{
		char *check = chars;
		char *flip = rot;

		while (*check != '\0')
		{
			if (*str == *check)
			{
				*str = *flip;
				break;
			}
			check++;
			flip++;
		}
		str++;
	}
	return (p);
}
