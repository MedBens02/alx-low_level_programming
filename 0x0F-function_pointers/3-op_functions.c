#include "3-calc.h"

/**
 * op_add - adds 2 ints
 * @a: int
 * @b: int
 * Return: sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subs 2 ints
 * @a: int
 * @b: int
 * Return: sub.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mult 2 ints
 * @a: int
 * @b: int
 * Return: prod.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div 2 ints
 * @a: int
 * @b: int
 * Return: div.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo 2 ints
 * @a: int
 * @b: int
 * Return: modulo.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
