#include "main.h"

/**
 * main - Entry pt
 *
 * Description: prints the first 50 Fib num
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long a = 1, b = 2, S;
	int i;

	printf("%lu, %lu", a, b);
	while (i < 48)
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
