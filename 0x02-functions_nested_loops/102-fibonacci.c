#include "main.h"

/**
 * main - Entry pt
 *
 * Description: prints the first 50 Fib num
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
	unsigned long a, b, S;
	int i;

	printf("%lu, %lu", a, b);
	while (i < 50)
	{
		S = a + b;
		printf(", %lu", S);
		a = b;
		b = S;
		i++;
	}
	printf("\n");
	return (0);
}
