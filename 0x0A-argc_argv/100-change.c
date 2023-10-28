#include "main.h"

/**
 * main - entry
 *
 * @argc: int
 * @argv: cents
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int cents, i;
	int coins[] = {25, 10, 5, 2, 1};
	int result = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
