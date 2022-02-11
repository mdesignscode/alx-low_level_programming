#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: is a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 *
 * Return: nothing.
 */
void print_all(const char *const format, ...)
{
	int index = 0;
	va_list arguments;
	char *string;

	va_start(arguments, format);
	while (format[index] && format)
	{
		switch (format[index])
		{
		case 'c':
			printf("%c", va_arg(arguments, int));
			break;
		case 'i':
			printf("%d", va_arg(arguments, int));
			break;
		case 'f':
			printf("%f", va_arg(arguments, double));
			break;
		case 's':
			string = va_arg(arguments, char *);
			if (!string)
				string = "(nil)";
			printf("%s", string);
			break;
		default:
			index++;
			continue;
		}
		if (index < 3)
			printf(", ");
		index++;
	}

	printf("\n");
}
