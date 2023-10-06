#include <stdio.h>


/**
 * main - Entry point of the progra
 *
 * Description: This program prints all possible combinations
 * of double-digit numbers separated by , then space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
			putchar('0' + n);
			putchar('0' + m);
			if (n < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
