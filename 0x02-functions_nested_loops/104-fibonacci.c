#include "main.h"

/**
 * xLength - returns length of x
 *
 * @x: number
 *
 * Return: num of digits
 */

int xLength(int x)
{
	int L = 0;
	if (x = 0)
		L = 1;
    
	while (x != 0)
	{
		x = x / 10;
		L += 1;
	}
	return (L);
}

/**
 * main - Entry pt
 *
 * Description: prints 98 fib nums
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, partZero;
	unsigned long f1 = 1, f2 = 2, S, max = 100000000, f1o = 0, f2o = 0, So = 0;
    
	for (i = 1; i <= 98; i ++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		partZero = xLength(max) - 1 - xLength(f1);
		while (f1o > 0 && partZero > 0)
		{
			printf("0");
			partZero--;
		}
		printf("%lu", f1);

		S = (f1 + f2) % max;
		So = f1o + f2o + (f1 + f2) / max;
		f1 = f2;
		f1o = f2o;
		f2 = S;
		f2o = So;

		if (i != 98)
			printf(", ");
		else
		       	printf("\n");
	}
	return 0;
}
