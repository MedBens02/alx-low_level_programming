#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int a, b, p;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			p = a * b;
			if (b == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');

				if (p < 10)
					_putchar(' ');
				_putchar((p % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
