#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - that prints a name.
 * @name: name to print.
 * @f: pointer to function.
 * Return: NOTHING.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;
	f(name);
}
