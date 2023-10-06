#include <stdio.h>


/**
 * main - Entry point of the program
 *
 * Description: This program prints hexa from 0 -> f
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char h = 'a';

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	while (h <= 'f')
	{
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
}
