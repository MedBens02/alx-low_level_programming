#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: buffer
 * @src: input
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *pt_to_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (pt_to_dest);
}
