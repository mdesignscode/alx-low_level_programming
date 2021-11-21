#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: destination area.
 * @src: source area.
 * @n: bytes to be copied.
 *
 * Return: 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
