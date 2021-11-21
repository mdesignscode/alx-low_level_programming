#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: memory location.
 * @b: constant byte to be filled with.
 * @n: number of bytes to fill.
 *
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		*s++ = b;
	return (s);
}
