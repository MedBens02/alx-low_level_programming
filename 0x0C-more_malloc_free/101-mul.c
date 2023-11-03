#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: pointer to memory.
 * @b: cst byte.
 * @n: number of bytes to modify.
 *
 * Return: pointer to memory area s.
 */

int *_memset(int *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] > '0' && s[i] < '9')
			return (1);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string.
 *
 * @s: setring
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;

	return (len);
}

/**
 * error - handles errors.
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * _print - prints the product.
 *
 * @p: product str
 * @l: length
 */

void _print(int *p, int l)
{
	int i, leftZero = 0;

	while (leftZero < l && p[leftZero] == 0)
		leftZero++;
	if (leftZero == l)
		_putchar('0');
	else
	{
		for (i = leftZero; i < l - 1; i++)
			_putchar(p[i] + '0');
	}
}

/**
 * main - multiplies 2 positive numbers
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int *product;
	int l1, l2, Lt, i, j, tmp, carry, digS1, digS2;

	s1 = argv[1], s2 = argv[2];

	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		error();

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	Lt = l1 + l2 + 1;

	product = malloc(sizeof(int) * Lt);
	if (product == NULL)
		return (1);

	product = _memset(product, 0, Lt);

	for (i = l1 - 1; i >= 0; i--)
	{
		carry = 0;
		digS1 = s1[i] - '0';

		for (j = l2 - 1; j >= 0; j--)
		{
			digS2 = s2[j] - '0';
			tmp = product[i + j + 1] + (digS1 * digS2) + carry;
			product[i + j + 1] = tmp % 10;
			carry = tmp / 10;
		}
			product[i + j + 1] += carry;
	}

	_print(product, Lt);

	_putchar('\n');
	free(product);
	return (0);
}
