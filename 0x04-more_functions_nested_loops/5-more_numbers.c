#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14,
 *		followed by a new line.
 */

void more_numbers(void)
{
	int i, n;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 15; i++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
}
