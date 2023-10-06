#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet
 * followed by a newline except q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l != 'e' && l != 'q')
		{
			putchar(l);
		}
		l++;
	}
	putchar('\n');
	return (0);
}
