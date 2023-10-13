#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 *
 * @n: number of lines
 *
 */

void print_diagonal(int n)
{
	int i = n, j = n;

	while (n > 0)
	{
		i = j;
		while (i > n)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
	}
	if (j <= 0)
		_putchar('\n');
}
