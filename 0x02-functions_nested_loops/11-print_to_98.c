#include "main.h"

/**
 * print_to_98 - prints nums from n to 98
 *
 * @n: input
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		n += (n < 98) ? 1 : -1;
	}
	printf("98\n");
}
