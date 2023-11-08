#include "function_pointers.h"

/**
 * main - entry pt
 *
 * @argc: num of args
 * @argv: arg
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	char *ptr = (char *)main;
	int n = 0, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n; i++)
	{
		printf("%02hhx", ptr[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
