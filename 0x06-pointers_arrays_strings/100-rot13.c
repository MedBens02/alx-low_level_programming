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
	char chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*str != '\0')
	{
		int i = 0;

		while (i <= 52)
		{
			if (*str == chars[i])
			{
				*str = rot[i];
				break;
			}
			i++;
		}
		str++;
	}
	return (p);
}
