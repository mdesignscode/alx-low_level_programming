#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of integers to add.
 *
 * Return: sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int index, sum;

	index = sum = 0;
	va_start(ap, n);
	if (n == 0)
		return (0);

	for (; index < n; index++)
		sum += va_arg(ap, unsigned int);

	va_end(ap);
	return (sum);
}
