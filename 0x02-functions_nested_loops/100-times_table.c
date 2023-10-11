#include "main.h"

/**
 * print_times_table - prints n times table from 0
 *
 * @n: tables limit max 15
 */

void print_times_table(int n)
{
	int a, b, p;

	if (n > 15 || n < 0)
		return;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			p = a * b;
			if (b == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');

				if (p < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (p < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((p / 10) + '0');
				}
				else
				{
					_putchar((p / 100) + '0');
					_putchar(((p / 10) % 10) + '0');
				}
				_putchar((p % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
