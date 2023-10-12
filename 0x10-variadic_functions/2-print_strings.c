#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings -  function that prints strings then a new line
 *
 * @separator: This is the input separator
 * @n: This is the number of items
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		char *k;
		k = va_arg(ap, char *);
		if (k == NULL)
			printf("(nil)");
		else
			printf("%s", k);
		if (separator != NULL && (i + 1) != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
