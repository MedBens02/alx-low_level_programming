#include "3-calc.h"

/**
 * main - entry pt
 *
 * @argc: args num
 * @argv: arg
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int (*op)(int, int);
	int num1, num2, R;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = get_op_func(argv[2]);

	R = op(num1, num2);
	printf("%d\n", R);

	return (0);
}
