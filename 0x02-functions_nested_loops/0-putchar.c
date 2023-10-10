#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This program prints "_putchar" followed by a newline.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char str[] = "_putchar\n";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (0);
}
