#include "main.h"

/**
 * main - entry
 *
 * @argc: int
 * @argv: int pos
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, s = 0;
	char *str;


	for (i = 1; i < argc; i++)
	{
		for (str = argv[i]; *str; str++)
			if (*str < '0' || *str > '9')
			{
				printf("Error\n");
				return (1);
			}
		s += atoi(argv[i]);
	}
	printf("%d\n", s);
	return (0);
}
