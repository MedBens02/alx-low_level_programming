#include "main.h"

/**
 * main - Entry pt
 *
 * Description: prints sum of even Fib nums < 4mill
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long a, b, S, eS;

	while (S <= 4000000)
	{
		S = a + b;
		if (S % 2 == 0)
			eS += S;
		a = b;
		b = S;
	}
	printf("%lu\n", eS);
	return (0);
}
