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

	srand(time(NULL));

	while (pass <= 3000)
	{
		c = rand() % 128;
		pass += c;
		putchar(c);
	}
	putchar(3127 - pass);
	return (0);
}
