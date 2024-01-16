#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: setring
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		++len;

	return (len);
}
