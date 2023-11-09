#include "variadic_functions.h"

/**
 * print_all - prints anything.
 *
 * @format: format
 * @...: args
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	char *separator;
	int i = 0;

	va_start(args, format);
	separator = "";

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", separator, va_arg(args, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", separator, str);
			break;
		}
		separator = ", ";
		i++;
	}

	va_end(args);

	printf("\n");
}
