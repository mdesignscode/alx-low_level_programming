#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc.
 * Description: if malloc fails, the malloc_checked function
 * should cause normal process termination with a status value of 98.
 * @b: size to be allocated.
 *
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
