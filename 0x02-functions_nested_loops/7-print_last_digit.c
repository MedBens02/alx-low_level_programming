#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @x: input
 *
 * Return: last digit
 */

int print_last_digit(int x)
{
	int l;

	if (x < 0)
		l = -x % 10;
	else
		l = x % 10;
	_putchar(l + '0');
	return (l);
}


