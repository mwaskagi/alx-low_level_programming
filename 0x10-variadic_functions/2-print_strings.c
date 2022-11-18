#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: string between two strings
 * @n: number of strings
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int a;
	char *str;

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(list, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (a < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
