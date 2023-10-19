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
	int i;

	while (*str != '\0')
	{
		for (i = 0; i <= 52; i++)
		{
			if (*str == chars[i])
			{
				*str = rot[i];
				break;
			}
		}
		str++;
	}
	return (p);
}
