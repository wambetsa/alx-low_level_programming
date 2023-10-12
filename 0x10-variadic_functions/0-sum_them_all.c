#include <stdio.h>
#include <stdarg.h>

/* sum_them_all - function that sums arguments in function
 * @n - the number of values in the argument
 * @sum - the sum of argument values
 * @ap - the va_list
 * @i - the counter used to navigate argument values
 * Return: Returns parameter sum 
 * If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	va_start(ap, n);

	sum = 0;

	for (i = 0; i < n; i ++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
