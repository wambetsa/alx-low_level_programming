#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Function printing numbers then a new line
 *
 * @separator: the input separator
 * @n: the input number
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start (ap, n);
	for (i = 0; i < n; i ++)
	{
		printf("%d", va_arg(ap, const unsigned int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
