#include "main.h"

/**
 * main - Entry pt
 *
 * Description: Computes sum of mult of 3, 5 < 1024(ex)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, S;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			S += i;
	}
	printf("%d\n", S);

	return (0);
}
