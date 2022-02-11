#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: the number of integers passed.
 * @separator: the string to be printed between numbers
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index, ctr, na;

	index = ctr = 0;
	va_start(ap, n);

	while (index < n)
	{
		na = va_arg(ap, unsigned int);
		printf("%d", na);
		if (!!separator)
		{
			if (ctr < n - 1)
			{
				printf("%s", separator);
			}
		}
		index++;
		ctr++;
	}
	va_end(ap);
	printf("\n");
}
