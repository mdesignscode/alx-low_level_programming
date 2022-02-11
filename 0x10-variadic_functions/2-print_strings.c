#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: is the number of strings passed to the function.
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index, cnt;
	char *ptns;

	va_start(ap, n);

	index = cnt = 0;
	for (; index < n; index++, cnt++)
	{
		ptns = va_arg(ap, char *);
		if (!!ptns)
			printf("%s", ptns);
		else
			printf("(nil)");
		if (!!separator)
		{
			if (cnt < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(ap);
	printf("\n");
}
