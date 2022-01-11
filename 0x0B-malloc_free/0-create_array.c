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
	char *p;

	p = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		p[i] = c;

	if (size == 0 || !p)
		return (NULL);

	return (p);
}
