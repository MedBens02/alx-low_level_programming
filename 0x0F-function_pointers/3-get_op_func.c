#include "3-calc.h"

/**
 * get_op_func - finds which operation to do.
 *
 * @s: operator
 *
 * Return: ptr to the right op fct.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s[1] == '\0' && *s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}
