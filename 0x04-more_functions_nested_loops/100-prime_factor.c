#include <stdio.h>

/**
 * main - Entry pt
 *
 * Description:  largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long n = 612852475143;
	unsigned long lp = 1;
	unsigned long i;

	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			lp = i;
			n /= i;
		}
	}

	printf("%lu\n", lp);

	return (0);
}
