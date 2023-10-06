#include <stdio.h>


/**
 * main - Entry point of the progra
 *
 * Description: This program prints all possible combinations
 * of double double-digit numbers separated by , then space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 100; n++)
	{
		for (m = n + 1; m < 100; m++)
		{
			putchar('0' + (n / 10));
			putchar('0' + (n % 10));
			putchar(' ');
			putchar('0' + (m / 10));
			putchar('0' + (m % 10));
			if (n < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
