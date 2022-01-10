#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array.
 * c: character to be initialized with.
 *
 * Return: 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	int n;
	char *p;

	p = malloc(sizeof(unsigned int) * size);

	for (i = 0, n = 0; i < size; i++, n++)
	{
		p[i] = c;
	}

	if (size == 0)
		return (0);

	else if (n > 0)
		return (&p[0]);

	else
		return (NULL);

	return (p);
}
