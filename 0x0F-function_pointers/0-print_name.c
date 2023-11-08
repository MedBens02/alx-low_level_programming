#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: str name
 * @f: fct that defines if name is upper/lower...
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
