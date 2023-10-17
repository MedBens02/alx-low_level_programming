#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates random pass
 *
 * return: 0
 */

int main(void)
{
	int pass;
	char c;

	srand(time(0));

	while (pass <= 4329)
	{
		c = rand() % 128;
		pass *= c;
		putchar(c);
	}
	putchar(4456 - pass);
	return (0);
}
