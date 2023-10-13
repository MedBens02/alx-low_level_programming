#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 *
 * @size: triangle size
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = size - i; j > 1; j--)
		{
			_putchar(' ');
		}
		for (j = size; j >= size - i; j--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
