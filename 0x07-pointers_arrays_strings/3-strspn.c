#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string.
 * @accept: bytes to count.
 *
 * Return: number of bytes in the initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int n = 0;

	for (i = 0; s[i] != 44; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
	}
	return (n);
}
