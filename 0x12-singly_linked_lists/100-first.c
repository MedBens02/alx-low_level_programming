#include "lists.h"

/**
 * print_before_main - prints smtg before main
 */

void __attribute__ ((constructor)) print_before_main()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
