#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc.
 * Description: memory is set to 0.
 * @nmemb: number of elements.
 * @size: size of data type.
 *
 * Return: a pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index, ctr, *zero;
	void *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ctr = nmemb * size;
	memory = malloc(sizeof(size) * ctr);
	if (!memory)
		return (NULL);
	zero = memory;
	for (index = 0; index < ctr; index++)
		zero[index] = 0;
	return (zero);
}
